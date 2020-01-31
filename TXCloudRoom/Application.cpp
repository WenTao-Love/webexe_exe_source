#include "Application.h"
#include "log.h"
#include "Base.h"
#include "DialogMessage.h"
#include "curl/curl.h"

#include <assert.h>
#include <combaseapi.h>
#include <shellapi.h>
#include <QApplication>
#include <QDesktopWidget>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <TlHelp32.h>
#include <iostream>
#include <fstream>
#include "DataReport.h"
#include "TXCloudRecordCmd.h"


static unsigned char ToHex(unsigned char x)
{
    return  x > 9 ? x + 55 : x + 48;
}

static unsigned char FromHex(unsigned char x)
{
    unsigned char y;
    if (x >= 'A' && x <= 'Z') y = x - 'A' + 10;
    else if (x >= 'a' && x <= 'z') y = x - 'a' + 10;
    else if (x >= '0' && x <= '9') y = x - '0';
    else assert(0);
    return y;
}

static std::string URLEncode(const std::string& str)
{
    std::string strTemp = "";
    size_t length = str.length();
    for (size_t i = 0; i < length; i++)
    {
        if (isalnum((unsigned char)str[i]) ||
            (str[i] == '-') ||
            (str[i] == '_') ||
            (str[i] == '.') ||
            (str[i] == '~'))
            strTemp += str[i];
        else if (str[i] == ' ')
            strTemp += "+";
        else
        {
            strTemp += '%';
            strTemp += ToHex((unsigned char)str[i] >> 4);
            strTemp += ToHex((unsigned char)str[i] % 16);
        }
    }
    return strTemp;
}

static std::string URLDecode(const std::string& str)
{
    std::string strTemp = "";
    size_t length = str.length();
    for (size_t i = 0; i < length; i++)
    {
        if (str[i] == '+') strTemp += ' ';
        else if (str[i] == '%')
        {
            assert(i + 2 < length);
            unsigned char high = FromHex((unsigned char)str[++i]);
            unsigned char low = FromHex((unsigned char)str[++i]);
            strTemp += high * 16 + low;
        }
        else strTemp += str[i];
    }
    return strTemp;
}

Application::Application(QObject *parent)
    : QObject(parent)
    , m_gdiplusToken(NULL)
    , m_normalLive(NULL)
    , m_csLive(NULL)
    , m_liveDemo(NULL)
    , m_RTCDemo(NULL)
    , m_httpPort(0)
    , m_httpServer(this)
    , m_dataList()
    , m_maxDataListCount(500)
    , m_mutex()
    , m_tempPath(L"")
    , m_screenRecord(RecordScreenNone)
    , m_proxyIP("")
    , m_proxyPort(0)
{
    ::CoInitializeEx(NULL, COINIT_APARTMENTTHREADED | COINIT_DISABLE_OLE1DDE);

    // �л������߳�
    qRegisterMetaType<ApplicationFunction>("ApplicationFunction");
    connect(this, SIGNAL(dispatch(ApplicationFunction)), this, SLOT(handle(ApplicationFunction)), Qt::QueuedConnection);
}

Application::~Application()
{
    m_httpServer.close();

    ::CoUninitialize();
}

Application& Application::instance()
{
    static Application uniqueInstance(Q_NULLPTR);
    return uniqueInstance;
}

int Application::run(int &argc, char **argv)
{
    LOGGER;

#ifdef _DEBUG
    //::MessageBoxW(NULL, NULL, NULL, MB_OK);   // ���㸽�ӵ���
#endif // DEBUG

	DataReport::instance().setExeLaunch(DataReport::instance().txf_gettickcount());
    curl_global_init(CURL_GLOBAL_ALL);

    QApplication app(argc, argv);

    if (argc <= 1)
    {
        DialogMessage::exec(QStringLiteral("ͨ��Portal.exe��Webҳ������"), DialogMessage::OK);
		//DialogMessage::exec(QStringLiteral("ͨ��Portal.exe��Webҳ������"), DialogMessage::OK,1000);
        return -1;
    }

    std::string cmd = QString::fromWCharArray(::GetCommandLineW()).toStdString();  // ע�⣬��argv������������е����ţ�����json�ַ������Ϸ�����ʹ��GetCommandLine����

    std::string prefix = "txcloudroom://liteav/params?json=";
    size_t index = cmd.find(prefix);  // ���Դ�Сд
    if (std::string::npos == index)
    {
        DialogMessage::exec(QStringLiteral("���в�����ʽ����"), DialogMessage::OK);
        return -1;
    }

    std::string json = cmd.substr(index + prefix.size());

    int ret = 0;

    if (true == resolve(json))
    {
        ret = app.exec();
    }
    else
    {
        ret = -1;
    }

    if (nullptr != m_normalLive)
    {
        delete m_normalLive;
        m_normalLive = nullptr;
    }

    if (nullptr != m_csLive)
    {
        delete m_csLive;
        m_csLive = nullptr;
    }

    if (nullptr != m_liveDemo)
    {
        delete m_liveDemo;
        m_liveDemo = nullptr;
    }

    if (nullptr != m_RTCDemo)
    {
        delete m_RTCDemo;
        m_RTCDemo = nullptr;
    }

    LINFO(L"run ret: %d", ret);

    HttpReportRequest::instance().close();

    LINFO(L"curl_global_cleanup");

    curl_global_cleanup();

    return ret;
}

void Application::quit(int retcode)
{
	LOGGER;
    QApplication::exit(retcode);
}

void Application::pushSDKEvent(int eventID, const std::map<std::string, std::string>& params)
{
    Json::Value paramsValue;

	for (std::map<std::string, std::string>::const_iterator it = params.begin(); params.end() != it; ++it)
    {
        Json::Value item;
        item["name"] = Wide2UTF8(Ansi2Wide(it->first));
        item["value"] = Wide2UTF8(Ansi2Wide(it->second));

        paramsValue.append(item);
    }
    Json::Value root;
    root["event"] = "sdkEventCallback";
    root["eventID"] = eventID;
    root["params"] = paramsValue;

    std::lock_guard<std::mutex> lock(m_mutex);

    m_dataList.push_back(root);
    if (m_dataList.size() > m_maxDataListCount)
    {
        m_dataList.pop_front();
    }
}

void Application::pushRoomStatus(int code, const std::string& msgUTF8)
{
    LTRACE(L"code: %d, msgUTF8: %s", code, UTF82Wide(msgUTF8).c_str());

    Json::Value root;
    root["event"] = "roomStatus";
    root["code"] = code;
    root["msg"] = msgUTF8.c_str();

    std::lock_guard<std::mutex> lock(m_mutex);

    m_dataList.push_back(root);
    if (m_dataList.size() > m_maxDataListCount)
    {
        m_dataList.pop_front();
    }
}

void Application::pushRoomTextMsg(const std::string& roomID, const std::string& userID, const std::string& userName
    , const std::string& userAvatar, const std::string& msg)
{
    Json::Value root;
    root["event"] = "roomTextMsg";
    root["roomID"] = roomID;
    root["userID"] = userID;
    root["userName"] = userName;
    root["userAvatar"] = userAvatar;
    root["msg"] = msg;

    std::lock_guard<std::mutex> lock(m_mutex);

    m_dataList.push_back(root);
    if (m_dataList.size() > m_maxDataListCount)
    {
        m_dataList.pop_front();
    }
}

void Application::pushMemberChange(const std::list<MemberItem>& members)
{
    Json::Value list;
    for (std::list<MemberItem>::const_iterator it = members.begin(); members.end() != it; ++it)
    {
        Json::Value item;
        item["userID"] = it->userID;
        item["userName"] = it->userName;
        item["userAvatar"] = it->userAvatar;
        item["role"] = static_cast<int>(it->role);
        list.append(item);
    }

    Json::Value root;
    root["event"] = "memberChange";
    root["list"] = list;

    std::lock_guard<std::mutex> lock(m_mutex);

    m_dataList.push_back(root);
    if (m_dataList.size() > m_maxDataListCount)
    {
        m_dataList.pop_front();
    }
}

void Application::pushSnapshotImage(const std::wstring& imgPath, const std::string& id)
{
    std::filebuf *pbuf = nullptr;
    std::ifstream filestr;

    long size = 0;
    char* buffer = nullptr;
    filestr.open(imgPath, std::ios::binary);    // Ҫ���������ļ���������ö����ƴ�
    if (true == filestr.is_open())
    {
        // ��ȡfilestr��Ӧbuffer�����ָ��
        pbuf = filestr.rdbuf();
        // ����buffer���󷽷���ȡ�ļ���С
        size = pbuf->pubseekoff(0, std::ios::end, std::ios::in);
        pbuf->pubseekpos(0, std::ios::in);

        // �����ڴ�ռ�
        buffer = new char[size];
        // ��ȡ�ļ�����
        pbuf->sgetn(buffer, size);
        filestr.close();
    }

    if (nullptr == buffer)
    {
        LERROR(L"buffer is nullptr, imgPath: %s, id: %s", imgPath.c_str(), Ansi2Wide(id).c_str());
        return;
    }

    Json::Value root;
    root["event"] = "snapshot";
    root["id"] = "id";

    root["base64Img"] = EncodeBase64((unsigned char*)buffer, size);
    delete[]buffer;

    std::lock_guard<std::mutex> lock(m_mutex);

    m_dataList.push_back(root);
    if (m_dataList.size() > m_maxDataListCount)
    {
        m_dataList.pop_front();
    }
}

void Application::executeInMainThread(ApplicationFunction func)
{
    emit dispatch(func);
}

void Application::handle(ApplicationFunction func)
{
    func();
}

void Application::onGetRequest(const std::wstring& absPath, DWORD& statusCode, std::string& respDataUTF8)
{
    if (0 == absPath.find(L"/query"))
    {
        handleQuery(absPath, statusCode, respDataUTF8);
    }
    else if (0 == absPath.find(L"/quit"))
    {
        handleQuit(absPath, statusCode, respDataUTF8);
    }
    else if (0 == absPath.find(L"/externalProtol?"))
    {
        handleExternalProtol(absPath, statusCode, respDataUTF8);
    }
    else if (0 == absPath.find(L"/csliveCreateSession?"))
    {
        handleCreateSession(absPath, statusCode, respDataUTF8);
    }
    else if (0 == absPath.find(L"/csliveDestroySession"))
    {
        handleDestroySession(absPath, statusCode, respDataUTF8);
    }
    else if (0 == absPath.find(L"/csliveSnapshotPusher"))
    {
        handleSnapshotPusher(absPath, statusCode, respDataUTF8);
    }
    else if (0 == absPath.find(L"/csliveSnapshotPlayer"))
    {
        handleSnapshotPlayer(absPath, statusCode, respDataUTF8);
    }
	else if (0 == absPath.find(L"/csliveSetMute?"))
	{
		handleCSLiveSetMute(absPath, statusCode, respDataUTF8);
	}
	else if (0 == absPath.find(L"/csliveAddPusher?"))
	{
		handleCSAddPusher(absPath, statusCode, respDataUTF8);
	}
	else if (0 == absPath.find(L"/csliveDelPusher?"))
	{
		handleCSDelPusher(absPath, statusCode, respDataUTF8);
	}
}

void Application::onLog(HSLogLevel level, const std::string& content)
{
    LINFO(L"level: %d, content: %s", level, Ansi2Wide(content).c_str());
}

void Application::onClose(ULONGLONG requestId)
{
    LINFO(L"requestId: %lu", requestId);
}

void Application::handleQuery(const std::wstring& absPath, DWORD& statusCode, std::string& respDataUTF8)
{
    static int logFlag = 0;
    if (0 == logFlag++ % 100)   // ��query��Ƶ�������״λ�ÿ100��ʱ�����һ��log
    {
        LINFO(L"absPath: %s", absPath.c_str());
    }

    std::wstring callbackValue = getCallbackName(absPath);

    Json::Value data;
    {
        std::lock_guard<std::mutex> lock(m_mutex);

        for (std::list<Json::Value>::iterator it = m_dataList.begin(); m_dataList.end() != it; ++it)
        {
            data.append(*it);
        }

        m_dataList.clear();
    }

    Json::Value root;
    root["code"] = 0;
    root["message"] = "";
    root["port"] = m_httpPort;
    root["data"] = data;

    Json::FastWriter writer;
    std::string jsonUTF8 = writer.write(root);

    statusCode = 200;
    if (true == callbackValue.empty())
    {
        respDataUTF8 = jsonUTF8;
    }
    else
    {
        respDataUTF8 = Wide2UTF8(callbackValue);
        respDataUTF8.append("(");
        respDataUTF8.append(jsonUTF8);
        respDataUTF8.append(")");
    }
}

void Application::handleQuit(const std::wstring& absPath, DWORD& statusCode, std::string& respDataUTF8)
{
    LINFO(L"absPath: %s", absPath.c_str());

    executeInMainThread([=] {
        if (nullptr != m_normalLive)
        {
            m_normalLive->quit();
            delete m_normalLive;
            m_normalLive = nullptr;
        }

        if (nullptr != m_csLive)
        {
            m_csLive->destroysession();
            delete m_csLive;
            m_csLive = nullptr;
        }

        if (nullptr != m_liveDemo)
        {
            m_liveDemo->leaveRoom();
            delete m_liveDemo;
            m_liveDemo = nullptr;
        }

        if (nullptr != m_RTCDemo)
        {
            m_RTCDemo->leaveRoom();
            delete m_RTCDemo;
            m_RTCDemo = nullptr;
        }
    });
}

void Application::handleExternalProtol(const std::wstring& absPath, DWORD& statusCode, std::string& respDataUTF8)
{
    LINFO(L"absPath: %s", absPath.c_str());

    std::wstring callbackValue = getCallbackName(absPath);

    QString queryString = QString::fromStdWString(absPath);

    QUrlQuery query(queryString.replace("/externalProtol?", ""));

    QString json = query.queryItemValue("json");

    std::string jsonDecode = URLDecode(json.toStdString());

    LINFO(L"jsonDecode: %s", Ansi2Wide(jsonDecode).c_str());

    std::string respData;
    Json::Value root;
    Json::Reader reader;
    bool ret = reader.parse(jsonDecode, root);
    if (false == ret)
    {
        respData = "{\"code\": -1, \"message\" : \"Wrong parameters\"}";
    }
    else
    {
        executeInMainThread([=]() {
            resolveProtol(root);
        });

        respData = "{\"code\": 0, \"message\" : \"\"}";
    }

    statusCode = 200;
    if (true == callbackValue.empty())
    {
        respDataUTF8 = respData;
    }
    else
    {
        respDataUTF8 = Wide2UTF8(callbackValue);
        respDataUTF8.append("(");
        respDataUTF8.append(respData);
        respDataUTF8.append(")");
    }
}

void Application::handleCreateSession(const std::wstring& absPath, DWORD& statusCode, std::string& respDataUTF8)
{
    LINFO(L"absPath: %s", absPath.c_str());

    std::wstring callbackValue = getCallbackName(absPath);

    QString queryString = QString::fromStdWString(absPath);

    QUrlQuery query(queryString.replace("/csliveCreateSession?", ""));
    
    QString pushURL = query.queryItemValue("pushURL");
    std::string pushURLDecode = URLDecode(pushURL.toStdString());

    QString pullURL = query.queryItemValue("pullURL");
    std::string pullURLDecode = URLDecode(pullURL.toStdString());

	QString title = query.queryItemValue("title");
	std::string titleDecode = URLDecode(title.toStdString());

    if (NULL != m_csLive)
	{
		m_csLive->creatsession(QString::fromStdString(pushURLDecode), QString::fromStdString(pullURLDecode));
		m_csLive->setTitle(titleDecode.c_str());
        //m_csLive->startPush(QString::fromStdString(pushURLDecode));
        //m_csLive->startPlay(QString::fromStdString(pullURLDecode));
    }

    statusCode = 200;
    if (true == callbackValue.empty())
    {
        respDataUTF8 = "{\"code\": 0, \"message\" : \"\"}";
    }
    else
    {
        respDataUTF8 = Wide2UTF8(callbackValue);
        respDataUTF8.append("({\"code\": 0, \"message\" : \"\"})");
    }
}

void Application::handleDestroySession(const std::wstring& absPath, DWORD& statusCode, std::string& respDataUTF8)
{
    LINFO(L"absPath: %s", absPath.c_str());

    std::wstring callbackValue = getCallbackName(absPath);

    if (NULL != m_csLive)
    {
        m_csLive->destroysession();
    }

    statusCode = 200;
    if (true == callbackValue.empty())
    {
        respDataUTF8 = "{\"code\": 0, \"message\" : \"\"}";
    }
    else
    {
        respDataUTF8 = Wide2UTF8(callbackValue);
        respDataUTF8.append("({\"code\": 0, \"message\" : \"\"})");
    }
}

void Application::handleSnapshotPusher(const std::wstring& absPath, DWORD& statusCode, std::string& respDataUTF8)
{
    LINFO(L"absPath: %s", absPath.c_str());

    std::wstring callbackValue = getCallbackName(absPath);

	time_t timep = NULL;
	time(&timep);
    wchar_t tmp[128] = { 0 };
	wcsftime(tmp, sizeof(tmp), L"snap_file_%H_%M_%S.jpg", localtime(&timep));
	std::wstring fullpath; 
	getSnapShotPath(fullpath);
	fullpath.append(tmp);
    QString filePath = QString::fromStdWString(fullpath);

    if (NULL != m_csLive)
    {
        m_csLive->snapShotPusher(filePath);
    }

    statusCode = 200;
    if (true == callbackValue.empty())
    {
        respDataUTF8 = "{\"code\": 0, \"message\" : \"\"}";
    }
    else
    {
        respDataUTF8 = Wide2UTF8(callbackValue);
        respDataUTF8.append("({\"code\": 0, \"message\" : \"\"})");
    }
}

void Application::handleSnapshotPlayer(const std::wstring& absPath, DWORD& statusCode, std::string& respDataUTF8)
{
    LINFO(L"absPath: %s", absPath.c_str());

    std::wstring callbackValue = getCallbackName(absPath);

	time_t timep = NULL;
	time(&timep);
    wchar_t tmp[128] = { 0 };
	wcsftime(tmp, sizeof(tmp), L"snap_file_%H_%M_%S.jpg", localtime(&timep));
	std::wstring fullpath;
	getSnapShotPath(fullpath);
	fullpath.append(tmp);
	QString filePath = QString::fromStdWString(fullpath);

    if (NULL != m_csLive)
    {
        m_csLive->snapShotPlayer(filePath);
    }

    statusCode = 200;
    if (true == callbackValue.empty())
    {
        respDataUTF8 = "{\"code\": 0, \"message\" : \"\"}";
    }
    else
    {
        respDataUTF8 = Wide2UTF8(callbackValue);
        respDataUTF8.append("({\"code\": 0, \"message\" : \"\"})");
    }
}

void Application::handleCSLiveSetMute(const std::wstring & absPath, DWORD & statusCode, std::string & respDataUTF8)
{
	LINFO(L"absPath: %s", absPath.c_str());

	std::wstring callbackValue = getCallbackName(absPath);

	QString queryString = QString::fromStdWString(absPath);

	QUrlQuery query(queryString.replace("/csliveSetMute?", ""));

	QString bMuteStr = query.queryItemValue("setMute");

	bool bMute = bMuteStr.toInt();
	if (NULL != m_csLive)
	{
		m_csLive->setMute(bMute);
		//m_csLive->startPlay(pullURLDecode.c_str());
	}

	statusCode = 200;
	if (true == callbackValue.empty())
	{
		respDataUTF8 = "{\"code\": 0, \"message\" : \"\"}";
	}
	else
	{
		respDataUTF8 = Wide2UTF8(callbackValue);
		respDataUTF8.append("({\"code\": 0, \"message\" : \"\"})");
	}
}

void Application::handleCSAddPusher(const std::wstring & absPath, DWORD & statusCode, std::string & respDataUTF8)
{
	LINFO(L"absPath: %s", absPath.c_str());

	std::wstring callbackValue = getCallbackName(absPath);

	QString queryString = QString::fromStdWString(absPath);

	QUrlQuery query(queryString.replace("/csliveAddPusher?", ""));

	QString pushUrlStr = query.queryItemValue("url");
	std::string pushURLDecode = URLDecode(pushUrlStr.toStdString());
	if (NULL != m_csLive)
	{
		m_csLive->addPlayer(QString::fromStdString(pushURLDecode));
	}

	statusCode = 200;
	if (true == callbackValue.empty())
	{
		respDataUTF8 = "{\"code\": 0, \"message\" : \"\"}";
	}
	else
	{
		respDataUTF8 = Wide2UTF8(callbackValue);
		respDataUTF8.append("({\"code\": 0, \"message\" : \"\"})");
	}
}

void Application::handleCSDelPusher(const std::wstring & absPath, DWORD & statusCode, std::string & respDataUTF8)
{
	LINFO(L"absPath: %s", absPath.c_str());

	std::wstring callbackValue = getCallbackName(absPath);

	QString queryString = QString::fromStdWString(absPath);

	QUrlQuery query(queryString.replace("/csliveDelPusher?", ""));

	QString pushUrlStr = query.queryItemValue("url");
	std::string pushURLDecode = URLDecode(pushUrlStr.toStdString());
	if (NULL != m_csLive)
	{
		m_csLive->delPlayer(QString::fromStdString(pushURLDecode));
	}

	statusCode = 200;
	if (true == callbackValue.empty())
	{
		respDataUTF8 = "{\"code\": 0, \"message\" : \"\"}";
	}
	else
	{
		respDataUTF8 = Wide2UTF8(callbackValue);
		respDataUTF8.append("({\"code\": 0, \"message\" : \"\"})");
	}
}

bool Application::resolve(const std::string& json)
{
    LINFO(L"json: %s", Ansi2Wide(json).c_str());

    std::string jsonDecode = URLDecode(json);

    LINFO(L"jsonDecode: %s", Ansi2Wide(jsonDecode).c_str());

    Json::Value root;
    Json::Reader reader;
    if (false == reader.parse(jsonDecode, root))
    {
        return false;
    }

    if (root.isMember("port"))
    {
        m_httpPort = root["port"].asInt();
    }

    std::string dataChannel;
    if (root.isMember("dataChannel"))
        dataChannel = root["dataChannel"].asString();

	int isHttpsPro = 0;
	if (root.isMember("isHttpsPro"))
		isHttpsPro = root["isHttpsPro"].asInt();

	if (-1 != m_httpPort)
	{
		std::wstring protocalHeader = L"http://127.0.0.1";
		if (isHttpsPro == 1)
			protocalHeader = L"https://127.0.0.1";

		std::wstring queryURL = format(L"%s:%d/query", protocalHeader.c_str(), m_httpPort);
		std::wstring quitURL = format(L"%s:%d/quit", protocalHeader.c_str(), m_httpPort);
		std::wstring externalProtolURL = format(L"%s:%d/externalProtol", protocalHeader.c_str(), m_httpPort);
		std::wstring createSessionURL = format(L"%s:%d/csliveCreateSession", protocalHeader.c_str(), m_httpPort);
		std::wstring destroySessionURL = format(L"%s:%d/csliveDestroySession", protocalHeader.c_str(), m_httpPort);
		std::wstring snapshotPusherURL = format(L"%s:%d/csliveSnapshotPusher", protocalHeader.c_str(), m_httpPort);
		std::wstring snapshotPlayerURL = format(L"%s:%d/csliveSnapshotPlayer", protocalHeader.c_str(), m_httpPort);
		std::wstring csliveSetMuteUrl = format(L"%s:%d/csliveSetMute", protocalHeader.c_str(), m_httpPort);
		std::wstring csliveAddPusher = format(L"%s:%d/csliveAddPusher", protocalHeader.c_str(), m_httpPort);
		std::wstring csliveDelPusher = format(L"%s:%d/csliveDelPusher", protocalHeader.c_str(), m_httpPort);
		std::vector<std::wstring> urls = {
			queryURL, quitURL, externalProtolURL, createSessionURL, destroySessionURL, snapshotPusherURL,
			snapshotPlayerURL, csliveSetMuteUrl, csliveAddPusher, csliveDelPusher };
		DWORD hsRet = 0;
		hsRet = m_httpServer.listenHttps(urls);
		/*
		if (isHttpsPro == 1)
			hsRet = m_httpServer.listenHttps(urls);
		else
			hsRet = m_httpServer.listenHttp(urls);
		*/
		DataReport::instance().setLocalHttp(DataReport::instance().txf_gettickcount());
		LINFO(L"Http server listen ret: %lu, port: %d", hsRet, m_httpPort);
	}

    if (dataChannel == "localHttp")
    {
        return true;
    }
    else
    {
        return resolveProtol(root);
    }
}

bool Application::resolveProtol(const Json::Value& root)
{
    std::string type;
    if (root.isMember("type"))
    {
        type = root["type"].asString();
    }

    bool singleton = true;
    if (root.isMember("singleton"))
    {
        singleton = root["singleton"].asBool();
    }

    if (singleton)
    {
        PROCESSENTRY32 pe32;
        pe32.dwSize = sizeof(pe32);

        HANDLE hProcessSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
        if (hProcessSnap == INVALID_HANDLE_VALUE) {
            return false;
        }

        BOOL bResult = Process32First(hProcessSnap, &pe32);
        int count = 0;
        while (bResult)
        {
            if (!wcscmp(pe32.szExeFile, L"TXCloudRoom.exe"))
            {
                count++;
            }
            bResult = Process32Next(hProcessSnap, &pe32);
        }
        CloseHandle(hProcessSnap);

        if (count >= 2)
        {
            return false;
        }
    }

    if (root.isMember("screenRecord"))
    {
        m_screenRecord = (ScreenRecordType)root["screenRecord"].asInt();
    }

	if (root.isMember("proxy"))
	{
		Json::Value proxy = root["proxy"];

		if (proxy.isMember("ip"))
		{
			m_proxyIP = proxy["ip"].asString();
		}

		if (proxy.isMember("port"))
		{
			m_proxyPort = static_cast<unsigned short>( proxy["port"].asInt());
		}
	}

	if (m_screenRecord != RecordScreenNone)
	{
		if (root.isMember("recordUrl"))
		{
			m_recordUrl = root["recordUrl"].asString();
		}

		if (root.isMember("recordPath"))
		{
			m_recordPath = root["recordPath"].asString();
		}
	}

	DataReport::instance().setProxy(!m_proxyIP.empty());
	HttpReportRequest::instance().setProxy(m_proxyIP, m_proxyPort);

    bool ret = false;

    if (type == "NormalLive")
    {
        ret = resolveNormalLiveProtol(root);
    }
    else if (type == "CustomServiceLive")
    {
        ret = resolveCSLiveProtol(root);
    }
    else if (type == "LiveRoom")
    {
        ret = resolveLiveRoomProtol(root);
    }
    else if (type == "RTCRoom")
    {
        ret = resolveRTCRoomProtol(root);
    }
    else
    {
        return false;
    }
	DataReport::instance().setRoomType(type);
	DataReport::instance().setRecordScreen(m_screenRecord);

    if (m_screenRecord != RecordScreenNone )
	{
		runRecord(m_recordUrl, m_recordPath);
	}

    return ret;
}

bool Application::resolveNormalLiveProtol(const Json::Value& root)
{
    std::string action;
    if (root.isMember("action"))
    {
        action = root["action"].asString();
    }

    // todo ������������

    if (true == action.empty())
    {
        m_normalLive = new PushPlayDemo();
    }
    else
    {
        std::string pushURL = "";
        if (root.isMember("pushURL"))
        {
            pushURL = root["pushURL"].asString();
        }

        int cameraIndex = 0;
        if (root.isMember("cameraIndex"))
        {
            cameraIndex = root["cameraIndex"].asInt();
        }

        int width = 640;
        if (root.isMember("width"))
        {
            width = root["width"].asInt();
        }

        int height = 480;
        if (root.isMember("height"))
        {
            height = root["height"].asInt();
        }

        int rotation = 1;
        if (root.isMember("rotation"))
        {
            rotation = root["rotation"].asInt();
        }

        int bitrate = 900;
        if (root.isMember("bitrate"))
        {
            bitrate = root["bitrate"].asInt();
        }

        m_normalLive = new PushPlayDemo(pushURL.c_str(), width, height, cameraIndex, rotation, bitrate);
    }

    m_normalLive->setProxy(m_proxyIP, m_proxyPort);
	DataReport::instance().setEnterDemo(DataReport::instance().txf_gettickcount());
	DataReport::instance().setResult(DataReportEnter, "success");
	HttpReportRequest::instance().reportELK(DataReport::instance().getEnterReport());
    m_normalLive->show();

    return true;
}

bool Application::resolveCSLiveProtol(const Json::Value& root)
{
    // todo ������������

    std::string action;
    if (root.isMember("action"))
    {
        action = root["action"].asString();
    }

    if (action == "stop")
    {
        if (NULL != m_csLive)
        {
            m_csLive->close();

            delete m_csLive;
            m_csLive = NULL;
        }
    }
    else if (action == "start")
    {
        std::string pushURL;
        if (root.isMember("pushURL"))
        {
            pushURL = root["pushURL"].asString();
        }

        std::string playURL;
        if (root.isMember("playURL"))
        {
            playURL = root["playURL"].asString();
        }

        std::string title;
        if (root.isMember("title"))
        {
            title = root["title"].asString();
        }

        std::string logo;
        if (root.isMember("logo"))
        {
            logo = root["logo"].asString();
        }

		bool top_window = true;
		if (root.isMember("top_window"))
		{
			top_window = root["top_window"].asBool();
		}

        m_csLive = new DialogPushPlay(top_window);

		DataReport::instance().setEnterDemo(DataReport::instance().txf_gettickcount());
		DataReport::instance().setResult(DataReportEnter, "success");
		HttpReportRequest::instance().reportELK(DataReport::instance().getEnterReport());
        m_csLive->setProxy(m_proxyIP, m_proxyPort);

        m_csLive->setTitle(title.c_str());
        m_csLive->setLogo(logo.c_str());
		m_csLive->creatsession(QString::fromStdString(pushURL), QString::fromStdString(playURL));
        //m_csLive->startPush(QString::fromStdString(pushURL));
        //m_csLive->startPlay(QString::fromStdString(playURL));
    }
    else
    {
        return false;
    }

    return true;
}

bool Application::resolveLiveRoomProtol(const Json::Value& root)
{
    // todo ������������

    std::string action;
    if (root.isMember("action"))
    {
        action = root["action"].asString();
    }

    if (action == "createRoom" || action == "enterRoom")
    {
        if (NULL == m_liveDemo)
        {
            m_liveDemo = new LiveDemo();
        }

        std::string serverDomain;
        int sdkAppID = 0;
        std::string accountType;
		std::string userID;
		std::string userSig;
		std::string userName;
		std::string userAvatar;
		std::string roomID;
		std::string roomInfo;
		std::string title;
		std::string logo;        
		std::string strTemplate = "1v4";
		std::string userTag = QStringLiteral("����Ա").toStdString();
		bool userList = true;
		bool IMList = true;
		bool whiteboard = false;
		bool screenShare = false;
		int picture_id = -1;
		bool mixRecord = false;

		getConfigInfo(root, serverDomain, sdkAppID, accountType, userID, userSig, userName, userAvatar, roomID, roomInfo, strTemplate,userTag, userList, IMList, whiteboard, screenShare, picture_id, mixRecord, title, logo);
		
		std::transform(strTemplate.begin(), strTemplate.end(), strTemplate.begin(), ::tolower);

		LRAuthData authData;
		authData.accountType = accountType;
		authData.sdkAppID = sdkAppID;
		authData.userAvatar = userAvatar;
		authData.userName = QString::fromUtf8(userName.c_str()).toStdString();
		authData.userID = userID;
		authData.userSig = userSig;

		m_liveDemo->setTitle(title.c_str());
        m_liveDemo->setLogo(logo.c_str());

		m_liveDemo->initUI(strTemplate.c_str(), QString::fromUtf8(userTag.c_str()), userList, IMList, whiteboard, screenShare, m_screenRecord);

		DataReport::instance().setEnterDemo(DataReport::instance().txf_gettickcount());
		DataReport::instance().setRecord(true);

		if (action == "createRoom")
		{
			DataReport::instance().setUserInfo(authData.sdkAppID, authData.userID, authData.userName, true);
			m_liveDemo->createRoom(authData, serverDomain.c_str(), m_proxyIP, m_proxyPort, roomID.c_str(), QString::fromUtf8(roomInfo.c_str()), mixRecord, picture_id);
		}
		else
		{
			DataReport::instance().setUserInfo(authData.sdkAppID, authData.userID, authData.userName, false);
			DataReport::instance().setRoomInfo(roomID);
			m_liveDemo->enterRoom(authData, serverDomain.c_str(), m_proxyIP, m_proxyPort, roomID.c_str(), QString::fromUtf8(roomInfo.c_str()), mixRecord, picture_id);
		}

		m_liveDemo->show();
    }
    else if (action == "leaveRoom")
    {
        if (NULL != m_liveDemo)
        {
            m_liveDemo->leaveRoom();
			m_liveDemo->hide();
        }
    }
    else
    {
        return false;
    }

    return true;
}

bool Application::resolveRTCRoomProtol(const Json::Value& root)
{
    // todo ������������

    std::string action;
    if (root.isMember("action"))
    {
        action = root["action"].asString();
    }

    if (action == "createRoom" || action == "enterRoom")
    {
        if (NULL == m_RTCDemo)
        {
            m_RTCDemo = new RTCDemo();
        }

		std::string serverDomain;
		int sdkAppID = 0;
		std::string accountType;
		std::string userID;
		std::string userSig;
		std::string userName;
		std::string userAvatar;
		std::string roomID;
		std::string roomInfo;
		std::string title;
		std::string logo;
		std::string strTemplate = "1v1";
		std::string userTag = QStringLiteral("����Ա").toStdString();
		bool userList = true;
		bool IMList = true;
		bool whiteboard = false;
		bool screenShare = false;
		int picture_id = -1;
		bool mixRecord = false;

		getConfigInfo(root, serverDomain, sdkAppID, accountType, userID, userSig, userName, userAvatar, roomID, roomInfo, strTemplate, userTag, userList, IMList, whiteboard, screenShare, picture_id, mixRecord, title, logo);
	
		std::transform(strTemplate.begin(), strTemplate.end(), strTemplate.begin(), ::tolower);
		RTCAuthData authData;
		authData.accountType = accountType;
		authData.sdkAppID = sdkAppID;
		authData.userAvatar = userAvatar;
		authData.userName = QString::fromUtf8(userName.c_str()).toStdString();
		authData.userID = userID;
		authData.userSig = userSig;
		m_RTCDemo->initUI(strTemplate.c_str(), QString::fromUtf8(userTag.c_str()), userList, IMList, whiteboard, screenShare, m_screenRecord);
		
		DataReport::instance().setEnterDemo(DataReport::instance().txf_gettickcount());

		if (action == "createRoom")
		{
			DataReport::instance().setUserInfo(authData.sdkAppID, authData.userID, authData.userName, true);
			m_RTCDemo->createRoom(authData, serverDomain.c_str(), m_proxyIP, m_proxyPort, roomID.c_str(), QString::fromUtf8(roomInfo.c_str()), mixRecord, picture_id);
		}
		else
		{
			DataReport::instance().setRoomInfo(roomID);
			DataReport::instance().setUserInfo(authData.sdkAppID, authData.userID, authData.userName, false);
			m_RTCDemo->enterRoom(authData, serverDomain.c_str(), m_proxyIP, m_proxyPort, roomID.c_str(), QString::fromUtf8(roomInfo.c_str()), mixRecord, picture_id);
		}
			
		DataReport::instance().setRecord(mixRecord);
		m_RTCDemo->setTitle(title.c_str());
		m_RTCDemo->setLogo(logo.c_str(), strTemplate != "1v1");

		m_RTCDemo->show();
    }
    else if (action == "leaveRoom")
    {
        if (NULL != m_RTCDemo)
        {
            m_RTCDemo->leaveRoom();
			m_RTCDemo->hide();
        }
    }
    else
    {
        return false;
    }

    return true;
}

std::wstring Application::getCallbackName(const std::wstring& absPath)
{
    std::wstring callbackValue(L"");

    std::wstring prefix(L"callback=");
    size_t beginIndex = absPath.find(prefix, 0);
    if (std::wstring::npos != beginIndex)
    {
        beginIndex += prefix.size();
        size_t endIndex = absPath.find(L"&", beginIndex);
        if (endIndex > beginIndex)
        {
            callbackValue = absPath.substr(beginIndex, endIndex - beginIndex);
        }
    }

    return callbackValue;
}

void Application::getConfigInfo(const Json::Value& root, std::string & serverDomain, int & sdkAppID, std::string & accountType, std::string & userID, std::string & userSig, std::string & userName, std::string & userAvatar, std::string & roomID, std::string & roomInfo, std::string& strTemplate, std::string& userTag, bool& userList, bool& IMList, bool& whiteboard, bool& screenShare, int & pictureID, bool & mixRecord, std::string & title, std::string & logo)
{
	if (root.isMember("serverDomain"))
	{
		serverDomain = root["serverDomain"].asString();
		if (serverDomain.size() > 0 && '/' == serverDomain[serverDomain.size() - 1])
		{
			serverDomain[serverDomain.size() - 1] = '\0';
		}
	}

	if (root.isMember("sdkAppID"))
	{
		sdkAppID = root["sdkAppID"].asInt();
	}

	if (root.isMember("accountType"))
	{
		accountType = root["accountType"].asString();
	}

	if (root.isMember("userID"))
	{
		userID = root["userID"].asString();
	}

	if (root.isMember("userSig"))
	{
		userSig = root["userSig"].asString();
	}

	if (root.isMember("userName"))
	{
		userName = root["userName"].asString();
	}

	if (root.isMember("userAvatar"))
	{
		userAvatar = root["userAvatar"].asString();
	}

	if (root.isMember("roomID"))
	{
		roomID = root["roomID"].asString();
	}

	if (root.isMember("roomInfo"))
	{
		roomInfo = root["roomInfo"].asString();
	}

	if (root.isMember("template"))
	{
		strTemplate = root["template"].asString();
	}

	if (root.isMember("userTag"))
	{
		userTag = root["userTag"].asString();
	}

	if (root.isMember("userList"))
	{
		userList = root["userList"].asBool();
	}

	if (root.isMember("IMList"))
	{
		IMList = root["IMList"].asBool();
	}

	if (root.isMember("whiteboard"))
	{
		whiteboard = root["whiteboard"].asBool();
	}

	if (root.isMember("screenShare"))
	{
		screenShare = root["screenShare"].asBool();
	}	

	if (root.isMember("pictureID"))
	{
		pictureID = root["pictureID"].asInt();
	}

	if (root.isMember("mixRecord"))
	{
		mixRecord = root["mixRecord"].asBool();
	}

	if (root.isMember("title"))
	{
		title = root["title"].asString();
	}

	if (root.isMember("logo"))
	{
		logo = root["logo"].asString();
	}
}

void Application::getSnapShotPath(std::wstring& fullpath)
{
    if (m_tempPath.empty())
    {
        wchar_t TempFilePath[MAX_PATH] = { 0 };
        DWORD dwRet = GetTempPath(MAX_PATH, TempFilePath);
        if (!dwRet) {
            return;
        }
        m_tempPath.assign(TempFilePath, dwRet);
        m_tempPath.append(L"LiteAvWebexe");
        if (_waccess(m_tempPath.c_str(), 0) == -1)
            int a = _wmkdir(m_tempPath.c_str());
        m_tempPath.append(L"\\");
    }
    time_t timep;
    time(&timep);
    wchar_t tmp[128] = { 0 };
    wcsftime(tmp, sizeof(tmp), L"snap_file_%H_%M_%S.jpg", localtime(&timep));
    fullpath.append(m_tempPath);
    fullpath.append(tmp);
}

void Application::runRecord(std::string recordUrl, std::string recordPath)
{
	//�����������ʱ����¼�ƣ�������room.exe�˳�ʱû����ȷ�ر�record,��Ҫ�ȹ�����������
    TXCloudRecordCmd::instance().cleanProcess();

    if (recordUrl.empty() && recordPath.empty())
    {
        DialogMessage::exec(QStringLiteral("����������-¼������д�������ٿ���¼��!"), DialogMessage::OK);
        return;
    }

	RecordData recordData;

	//strcpy(recordData.recordExe, "TXCloudRoom.exe");
	strcpy(recordData.recordUrl, recordUrl.c_str());
	strcpy(recordData.recordPath, recordPath.c_str());
	recordData.recordType = m_screenRecord;
	recordData.sliceTime = 60;
	recordData.winID = (int)GetDesktopWindow();

	TXCloudRecordCmd::instance().runAndRecord(recordData);
}
