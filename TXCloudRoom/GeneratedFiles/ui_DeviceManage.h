/********************************************************************************
** Form generated from reading UI file 'DeviceManage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICEMANAGE_H
#define UI_DEVICEMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeviceManage
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_title;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_close;
    QSpacerItem *verticalSpacer_3;
    QTabWidget *tabWidget;
    QWidget *tab_device;
    QLabel *label_22;
    QLabel *label_6;
    QLabel *label_16;
    QSlider *slider_white;
    QLabel *label_9;
    QSlider *slider_beauty;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_23;
    QLabel *label_24;
    QGroupBox *groupBox;
    QRadioButton *radio_blur;
    QRadioButton *radio_smooth;
    QRadioButton *radio_nature;
    QLabel *label_25;
    QWidget *tab_record;
    QSpinBox *spinBox;
    QLabel *label_27;
    QLabel *label_10;
    QLabel *label_28;
    QLineEdit *edit_local_path;
    QLineEdit *edit_server_url;
    QPushButton *btn_local_path;
    QLabel *label_30;
    QGroupBox *groupBox_2;
    QRadioButton *radio_both;
    QRadioButton *radio_local;
    QRadioButton *radio_server;
    QLabel *label_record_tip;
    QLabel *label_path;
    QLabel *label_slicetime;
    QLabel *label_url;
    QWidget *tab_device_3;
    QLabel *label_21;
    QLabel *label_14;
    QLabel *label_18;
    QLabel *label_12;
    QLabel *label_20;
    QCheckBox *chb_mic;
    QLabel *label_17;
    QWidget *widget_render;
    QComboBox *cmb_camera;
    QComboBox *cmb_mic;
    QSlider *slider_volume;
    QCheckBox *chb_camera;
    QLabel *label_15;
    QLabel *label_19;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *DeviceManage)
    {
        if (DeviceManage->objectName().isEmpty())
            DeviceManage->setObjectName(QStringLiteral("DeviceManage"));
        DeviceManage->resize(375, 635);
        DeviceManage->setStyleSheet(QLatin1String("background: #ffffff;\n"
""));
        verticalLayout = new QVBoxLayout(DeviceManage);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(30, 20, 20, 20);
        label_title = new QLabel(DeviceManage);
        label_title->setObjectName(QStringLiteral("label_title"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_title->sizePolicy().hasHeightForWidth());
        label_title->setSizePolicy(sizePolicy);
        label_title->setMinimumSize(QSize(0, 20));
        label_title->setMaximumSize(QSize(16777215, 20));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei"));
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_title->setFont(font);
        label_title->setStyleSheet(QLatin1String("\n"
"font: bold 16pt \"Microsoft YaHei\";\n"
"color: #333333;"));
        label_title->setWordWrap(true);

        horizontalLayout->addWidget(label_title);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, -1, -1);
        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        btn_close = new QPushButton(DeviceManage);
        btn_close->setObjectName(QStringLiteral("btn_close"));
        btn_close->setMinimumSize(QSize(11, 11));
        btn_close->setMaximumSize(QSize(11, 11));
        btn_close->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-image: url(:/RoomService/close-normal.png);\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-image: url(:/RoomService/close-press.png);\n"
"}"));

        verticalLayout_2->addWidget(btn_close);

        verticalSpacer_3 = new QSpacerItem(10, 3, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(DeviceManage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(280, 500));
        tabWidget->setMaximumSize(QSize(600, 563));
        tabWidget->setStyleSheet(QLatin1String("#tabWidget{\n"
"	background-color: #ffffff;\n"
"} \n"
"\n"
"QTabWidget::pane { /* The tab widget frame */\n"
"	top: 0px;\n"
"	border-top: 1px solid #dddddd;\n"
"	margin-left: 0px;\n"
"	margin-right: 0px;\n"
"	margin-bottom:0px;\n"
"}\n"
"/* Style the tab using the tab sub-control. Note that\n"
"    it reads QTabBar _not_ QTabWidget */\n"
"QTabBar::tab {\n"
"	margin-top: 0px;\n"
"	margin-left: 0px;\n"
"    padding-left:0px;\n"
"	padding-right:0px;\n"
"	height:40px;\n"
"	width: 125px;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"	font: bold 11pt \"Microsoft YaHei\";\n"
"	color: #006eff;\n"
"    background: rgb(229,240,255);\n"
"	border-bottom: 2px solid #006eff;\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 0px; /* make non-selected tabs look smaller */\n"
"	font: 11pt \"Microsoft YaHei\";\n"
"	color: #444444;\n"
"    background: rgb(240,240,240);\n"
"	border-bottom: 2px solid rgb(240,240,240);\n"
"}\n"
"\n"
"QTabBar::tab:disabled {\n"
"    margin-top: 0px; /* make non-selected tabs look smaller */\n"
""
                        "	font: 11pt \"Microsoft YaHei\";\n"
"	color: #666666;\n"
"    background: rgb(245,245,245);\n"
"	border-bottom: 2px solid rgb(245,245,245);\n"
"}\n"
""));
        tab_device = new QWidget();
        tab_device->setObjectName(QStringLiteral("tab_device"));
        label_22 = new QLabel(tab_device);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(235, 130, 21, 20));
        label_22->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(tab_device);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 160, 61, 21));
        label_6->setStyleSheet(QLatin1String("	color: #000000;\n"
"	font: 10pt \"Microsoft YaHei\";"));
        label_16 = new QLabel(tab_device);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(120, 130, 21, 16));
        slider_white = new QSlider(tab_device);
        slider_white->setObjectName(QStringLiteral("slider_white"));
        slider_white->setGeometry(QRect(110, 160, 241, 20));
        slider_white->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"border: 1px solid #999999;\n"
"height: 3px;\n"
"border-radius: 9px;\n"
"margin: 0px;  \n"
"left : 9px;\n"
"right: 9px;         \n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"width: 16px;\n"
"background-image: url(:/RoomService/slider.png);\n"
"margin: -7px -7px -7px -7px;  \n"
"}\n"
"\n"
"QSlider::add-page:qlineargradient {\n"
"background: lightgrey;\n"
"border-top-right-radius: 9px;\n"
"border-bottom-right-radius: 9px;\n"
"border-top-left-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
"}\n"
"\n"
"QSlider::sub-page:qlineargradient {\n"
"background: #006eff;\n"
"border-top-right-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"border-top-left-radius: 9px;\n"
"border-bottom-left-radius: 9px;\n"
"}"));
        slider_white->setOrientation(Qt::Horizontal);
        label_9 = new QLabel(tab_device);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(235, 190, 21, 20));
        label_9->setAlignment(Qt::AlignCenter);
        slider_beauty = new QSlider(tab_device);
        slider_beauty->setObjectName(QStringLiteral("slider_beauty"));
        slider_beauty->setGeometry(QRect(110, 100, 241, 20));
        slider_beauty->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"border: 1px solid #999999;\n"
"height: 3px;\n"
"border-radius: 9px;\n"
"margin: 0px;  \n"
"left : 9px;\n"
"right: 9px;         \n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"width: 16px;\n"
"background-image: url(:/RoomService/slider.png);\n"
"margin: -7px -7px -7px -7px;  \n"
"}\n"
"\n"
"QSlider::add-page:qlineargradient {\n"
"background: lightgrey;\n"
"border-top-right-radius: 9px;\n"
"border-bottom-right-radius: 9px;\n"
"border-top-left-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
"}\n"
"\n"
"QSlider::sub-page:qlineargradient {\n"
"background: #006eff;\n"
"border-top-right-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"border-top-left-radius: 9px;\n"
"border-bottom-left-radius: 9px;\n"
"}"));
        slider_beauty->setOrientation(Qt::Horizontal);
        label_8 = new QLabel(tab_device);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(320, 190, 21, 16));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(tab_device);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(120, 190, 21, 16));
        label_23 = new QLabel(tab_device);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(321, 130, 20, 20));
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_24 = new QLabel(tab_device);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(30, 100, 61, 21));
        label_24->setStyleSheet(QLatin1String("	color: #000000;\n"
"	font: 10pt \"Microsoft YaHei\";"));
        groupBox = new QGroupBox(tab_device);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(100, 0, 271, 80));
        groupBox->setStyleSheet(QStringLiteral("border:none"));
        radio_blur = new QRadioButton(groupBox);
        radio_blur->setObjectName(QStringLiteral("radio_blur"));
        radio_blur->setGeometry(QRect(170, 30, 68, 35));
        radio_blur->setStyleSheet(QLatin1String("QRadioButton{  \n"
"    spacing: 5px;  \n"
"}  \n"
"  \n"
"QRadioButton::indicator{  \n"
"    width: 68px;  \n"
"    height: 35px;  ;  \n"
"}  \n"
"  \n"
"QRadioButton::indicator:unchecked{  \n"
"    image:url(:/RoomService/tab_blur_unselected.png);\n"
"}  \n"
"  \n"
"QRadioButton::indicator:checked{  \n"
"    image:url(:/RoomService/tab_blur.png);\n"
"} "));
        radio_smooth = new QRadioButton(groupBox);
        radio_smooth->setObjectName(QStringLiteral("radio_smooth"));
        radio_smooth->setGeometry(QRect(10, 30, 68, 35));
        radio_smooth->setStyleSheet(QLatin1String("QRadioButton{  \n"
"    spacing: 5px;  \n"
"}  \n"
"  \n"
"QRadioButton::indicator{  \n"
"    width: 68px;  \n"
"    height: 35px;  \n"
"}  \n"
"  \n"
"QRadioButton::indicator:unchecked{  \n"
"    image:url(:/RoomService/tab_smooth_unselected.png);\n"
"}  \n"
"  \n"
"QRadioButton::indicator:checked{  \n"
"    image:url(:/RoomService/tab_smooth.png);\n"
"}  \n"
""));
        radio_nature = new QRadioButton(groupBox);
        radio_nature->setObjectName(QStringLiteral("radio_nature"));
        radio_nature->setGeometry(QRect(90, 30, 68, 35));
        radio_nature->setStyleSheet(QLatin1String("QRadioButton{  \n"
"    spacing: 5px;  \n"
"}  \n"
"  \n"
"QRadioButton::indicator{  \n"
"    width: 68px;  \n"
"    height: 35px;  \n"
"}  \n"
"  \n"
"QRadioButton::indicator:unchecked{  \n"
"    image:url(:/RoomService/tab_nature_unselected.png);\n"
"}  \n"
"  \n"
"QRadioButton::indicator:checked{  \n"
"    image:url(:/RoomService/tab_nature.png);\n"
"}"));
        label_25 = new QLabel(tab_device);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(30, 30, 71, 21));
        label_25->setStyleSheet(QLatin1String("	color: #000000;\n"
"	font: 10pt \"Microsoft YaHei\";"));
        tabWidget->addTab(tab_device, QString());
        tab_record = new QWidget();
        tab_record->setObjectName(QStringLiteral("tab_record"));
        spinBox = new QSpinBox(tab_record);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(110, 160, 231, 22));
        label_27 = new QLabel(tab_record);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(30, 110, 52, 19));
        label_27->setStyleSheet(QLatin1String("	color: #000000;\n"
"	font: 10pt \"Microsoft YaHei\";"));
        label_10 = new QLabel(tab_record);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 160, 52, 19));
        label_10->setStyleSheet(QLatin1String("	color: #000000;\n"
"	font: 10pt \"Microsoft YaHei\";"));
        label_28 = new QLabel(tab_record);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(30, 40, 52, 19));
        label_28->setStyleSheet(QLatin1String("	color: #000000;\n"
"	font: 10pt \"Microsoft YaHei\";"));
        edit_local_path = new QLineEdit(tab_record);
        edit_local_path->setObjectName(QStringLiteral("edit_local_path"));
        edit_local_path->setGeometry(QRect(110, 110, 181, 30));
        edit_local_path->setMinimumSize(QSize(0, 30));
        edit_local_path->setStyleSheet(QLatin1String("QLineEdit{\n"
"	font: 9pt \"Microsoft YaHei\";\n"
"    color: #000000;\n"
"	border: 1px solid #dddddd;\n"
"}"));
        edit_server_url = new QLineEdit(tab_record);
        edit_server_url->setObjectName(QStringLiteral("edit_server_url"));
        edit_server_url->setGeometry(QRect(110, 210, 231, 30));
        edit_server_url->setMinimumSize(QSize(0, 30));
        edit_server_url->setStyleSheet(QLatin1String("QLineEdit{\n"
"	font: 9pt \"Microsoft YaHei\";\n"
"    color: #000000;\n"
"	border: 1px solid #dddddd;\n"
"}"));
        btn_local_path = new QPushButton(tab_record);
        btn_local_path->setObjectName(QStringLiteral("btn_local_path"));
        btn_local_path->setGeometry(QRect(290, 110, 51, 30));
        btn_local_path->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: 1px solid #dddddd;\n"
"	background:  #ffffff;\n"
"	color: #000000;\n"
"	font: 9pt \"Microsoft YaHei\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	border: 1px solid #d2d2d2;\n"
"	background:  #f2f2f2;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border: 1px solid #d2d2d2;\n"
"	background:  #e5e5e5;\n"
"}\n"
"\n"
"QPushButton:disable {\n"
"	border: 1px solid #d5d5d5;\n"
"	color: #bbbbbb;\n"
"	background:  #f2f2f2;\n"
"}"));
        label_30 = new QLabel(tab_record);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(30, 210, 52, 19));
        label_30->setStyleSheet(QLatin1String("	color: #000000;\n"
"	font: 10pt \"Microsoft YaHei\";"));
        groupBox_2 = new QGroupBox(tab_record);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(100, 0, 261, 91));
        groupBox_2->setStyleSheet(QStringLiteral("border:none"));
        radio_both = new QRadioButton(groupBox_2);
        radio_both->setObjectName(QStringLiteral("radio_both"));
        radio_both->setGeometry(QRect(170, 30, 68, 35));
        radio_both->setStyleSheet(QLatin1String("QRadioButton{  \n"
"    spacing: 5px;  \n"
"}  \n"
"  \n"
"QRadioButton::indicator{  \n"
"    width: 68px;  \n"
"    height: 35px;  ;  \n"
"}  \n"
"  \n"
"QRadioButton::indicator:unchecked{  \n"
"    image:url(:/RoomService/tab_both_unselected.png);\n"
"}  \n"
"  \n"
"QRadioButton::indicator:checked{  \n"
"    image:url(:/RoomService/tab_both.png);\n"
"} "));
        radio_local = new QRadioButton(groupBox_2);
        radio_local->setObjectName(QStringLiteral("radio_local"));
        radio_local->setGeometry(QRect(10, 30, 68, 35));
        radio_local->setStyleSheet(QLatin1String("QRadioButton{  \n"
"    spacing: 5px;  \n"
"}  \n"
"  \n"
"QRadioButton::indicator{  \n"
"    width: 68px;  \n"
"    height: 35px;  \n"
"}  \n"
"  \n"
"QRadioButton::indicator:unchecked{  \n"
"    image:url(:/RoomService/tab_local_unselected.png);\n"
"}  \n"
"  \n"
"QRadioButton::indicator:checked{  \n"
"    image:url(:/RoomService/tab_local.png);\n"
"}  \n"
""));
        radio_server = new QRadioButton(groupBox_2);
        radio_server->setObjectName(QStringLiteral("radio_server"));
        radio_server->setGeometry(QRect(90, 30, 68, 35));
        radio_server->setStyleSheet(QLatin1String("QRadioButton{  \n"
"    spacing: 5px;  \n"
"}  \n"
"  \n"
"QRadioButton::indicator{  \n"
"    width: 68px;  \n"
"    height: 35px;  \n"
"}  \n"
"  \n"
"QRadioButton::indicator:unchecked{  \n"
"    image:url(:/RoomService/tab_server_unselected.png);\n"
"}  \n"
"  \n"
"QRadioButton::indicator:checked{  \n"
"    image:url(:/RoomService/tab_server.png);\n"
"}"));
        label_record_tip = new QLabel(groupBox_2);
        label_record_tip->setObjectName(QStringLiteral("label_record_tip"));
        label_record_tip->setGeometry(QRect(10, 70, 241, 20));
        label_record_tip->setStyleSheet(QLatin1String("	color: #999999;\n"
"	font: 10pt \"Microsoft YaHei\";"));
        label_path = new QLabel(tab_record);
        label_path->setObjectName(QStringLiteral("label_path"));
        label_path->setGeometry(QRect(90, 110, 16, 20));
        label_path->setStyleSheet(QStringLiteral(""));
        label_slicetime = new QLabel(tab_record);
        label_slicetime->setObjectName(QStringLiteral("label_slicetime"));
        label_slicetime->setGeometry(QRect(90, 160, 16, 20));
        label_slicetime->setStyleSheet(QStringLiteral(""));
        label_url = new QLabel(tab_record);
        label_url->setObjectName(QStringLiteral("label_url"));
        label_url->setGeometry(QRect(90, 210, 16, 20));
        label_url->setStyleSheet(QStringLiteral(""));
        tabWidget->addTab(tab_record, QString());
        tab_device_3 = new QWidget();
        tab_device_3->setObjectName(QStringLiteral("tab_device_3"));
        label_21 = new QLabel(tab_device_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(30, 390, 71, 21));
        label_21->setStyleSheet(QLatin1String("	color: #000000;\n"
"	font: 10pt \"Microsoft YaHei\";"));
        label_14 = new QLabel(tab_device_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 120, 71, 21));
        label_14->setStyleSheet(QLatin1String("	color: #000000;\n"
"	font: 10pt \"Microsoft YaHei\";"));
        label_18 = new QLabel(tab_device_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(30, 20, 71, 21));
        label_18->setStyleSheet(QLatin1String("	color: #000000;\n"
"	font: 10pt \"Microsoft YaHei\";"));
        label_12 = new QLabel(tab_device_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 340, 71, 21));
        label_12->setStyleSheet(QLatin1String("	color: #000000;\n"
"	font: 10pt \"Microsoft YaHei\";"));
        label_20 = new QLabel(tab_device_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(300, 420, 31, 16));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        chb_mic = new QCheckBox(tab_device_3);
        chb_mic->setObjectName(QStringLiteral("chb_mic"));
        chb_mic->setGeometry(QRect(110, 290, 51, 30));
        chb_mic->setStyleSheet(QLatin1String("QCheckBox{  \n"
"    spacing: 5px;  \n"
"}  \n"
"  \n"
"QCheckBox::indicator{  \n"
"    width: 45px;  \n"
"    height: 30px;  \n"
"}  \n"
"  \n"
"QCheckBox::indicator:unchecked{  \n"
"    image:url(:/RoomService/switch_off.png);\n"
"}  \n"
"  \n"
"QCheckBox::indicator:checked{  \n"
"    image:url(:/RoomService/switch_on.png);\n"
"}  \n"
"  \n"
"QCheckBox::indicator:checked:disabled{  \n"
"    image:url(:/RoomService/switch_off.png);\n"
"}  "));
        label_17 = new QLabel(tab_device_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(30, 70, 71, 21));
        label_17->setStyleSheet(QLatin1String("	color: #000000;\n"
"	font: 10pt \"Microsoft YaHei\";"));
        widget_render = new QWidget(tab_device_3);
        widget_render->setObjectName(QStringLiteral("widget_render"));
        widget_render->setGeometry(QRect(110, 120, 221, 150));
        widget_render->setStyleSheet(QLatin1String("background:  rgb(242,242,242);\n"
""));
        cmb_camera = new QComboBox(tab_device_3);
        cmb_camera->setObjectName(QStringLiteral("cmb_camera"));
        cmb_camera->setGeometry(QRect(110, 70, 221, 22));
        cmb_camera->setStyleSheet(QLatin1String(" border-style: solid;\n"
" border-width: 1px;\n"
" border-color: rgb(221,221,221);"));
        cmb_mic = new QComboBox(tab_device_3);
        cmb_mic->setObjectName(QStringLiteral("cmb_mic"));
        cmb_mic->setGeometry(QRect(110, 340, 221, 22));
        cmb_mic->setStyleSheet(QLatin1String(" border-style: solid;\n"
" border-width: 1px;\n"
" border-color: rgb(221,221,221);"));
        slider_volume = new QSlider(tab_device_3);
        slider_volume->setObjectName(QStringLiteral("slider_volume"));
        slider_volume->setGeometry(QRect(100, 390, 231, 20));
        slider_volume->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"border: 1px solid #999999;\n"
"height: 3px;\n"
"border-radius: 9px;\n"
"margin: 0px;  \n"
"left : 9px;\n"
"right: 9px;         \n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"width: 16px;\n"
"background-image: url(:/RoomService/slider.png);\n"
"margin: -7px -7px -7px -7px;  \n"
"}\n"
"\n"
"QSlider::add-page:qlineargradient {\n"
"background: lightgrey;\n"
"border-top-right-radius: 9px;\n"
"border-bottom-right-radius: 9px;\n"
"border-top-left-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
"}\n"
"\n"
"QSlider::sub-page:qlineargradient {\n"
"background: #006eff;\n"
"border-top-right-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"border-top-left-radius: 9px;\n"
"border-bottom-left-radius: 9px;\n"
"}"));
        slider_volume->setOrientation(Qt::Horizontal);
        chb_camera = new QCheckBox(tab_device_3);
        chb_camera->setObjectName(QStringLiteral("chb_camera"));
        chb_camera->setGeometry(QRect(110, 20, 51, 30));
        chb_camera->setStyleSheet(QLatin1String("QCheckBox{  \n"
"    spacing: 5px;  \n"
"}  \n"
"  \n"
"QCheckBox::indicator{  \n"
"    width: 45px;  \n"
"    height: 30px;  \n"
"}  \n"
"  \n"
"QCheckBox::indicator:unchecked{  \n"
"    image:url(:/RoomService/switch_off.png);\n"
"}  \n"
"  \n"
"QCheckBox::indicator:checked{  \n"
"    image:url(:/RoomService/switch_on.png);\n"
"}  \n"
"  \n"
"QCheckBox::indicator:checked:disabled{  \n"
"    image:url(:/RoomService/switch_off.png);\n"
"}    "));
        label_15 = new QLabel(tab_device_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(210, 420, 21, 20));
        label_15->setAlignment(Qt::AlignCenter);
        label_19 = new QLabel(tab_device_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(30, 290, 71, 21));
        label_19->setStyleSheet(QLatin1String("	color: #000000;\n"
"	font: 10pt \"Microsoft YaHei\";"));
        label_13 = new QLabel(tab_device_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(110, 420, 21, 16));
        tabWidget->addTab(tab_device_3, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 20, -1, 20);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btn_ok = new QPushButton(DeviceManage);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_ok->sizePolicy().hasHeightForWidth());
        btn_ok->setSizePolicy(sizePolicy1);
        btn_ok->setMinimumSize(QSize(88, 33));
        btn_ok->setMaximumSize(QSize(64, 33));
        btn_ok->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: none;\n"
"	border-radius: 15px;\n"
"	background:  #006eff;\n"
"	color: #ffffff;\n"
"	font: 10pt \"Microsoft YaHei\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background:  #0068f2;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background:  #0062e5;\n"
"}\n"
"\n"
"QPushButton:disable {\n"
"	border: 1px solid #d5d5d5;\n"
"	color: #bbbbbb;\n"
"	background:  #f2f2f2;\n"
"}"));
        btn_ok->setFlat(false);

        horizontalLayout_2->addWidget(btn_ok);

        btn_cancel = new QPushButton(DeviceManage);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        sizePolicy1.setHeightForWidth(btn_cancel->sizePolicy().hasHeightForWidth());
        btn_cancel->setSizePolicy(sizePolicy1);
        btn_cancel->setMinimumSize(QSize(88, 33));
        btn_cancel->setMaximumSize(QSize(88, 33));
        btn_cancel->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: 1px solid #dddddd;\n"
"	border-radius: 15px;\n"
"	background:  #ffffff;\n"
"	color: #000000;\n"
"	font: 10pt \"Microsoft YaHei\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	border: 1px solid #d2d2d2;\n"
"	background:  #f2f2f2;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border: 1px solid #d2d2d2;\n"
"	background:  #e5e5e5;\n"
"}\n"
"\n"
"QPushButton:disable {\n"
"	border: 1px solid #d5d5d5;\n"
"	color: #bbbbbb;\n"
"	background:  #f2f2f2;\n"
"}"));
        btn_cancel->setFlat(false);

        horizontalLayout_2->addWidget(btn_cancel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(DeviceManage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DeviceManage);
    } // setupUi

    void retranslateUi(QDialog *DeviceManage)
    {
        DeviceManage->setWindowTitle(QApplication::translate("DeviceManage", "DeviceManage", nullptr));
        label_title->setText(QApplication::translate("DeviceManage", "\350\256\276\347\275\256\344\270\255\345\277\203", nullptr));
        btn_close->setText(QString());
        label_22->setText(QApplication::translate("DeviceManage", "5", nullptr));
        label_6->setText(QApplication::translate("DeviceManage", "\347\276\216\347\231\275", nullptr));
        label_16->setText(QApplication::translate("DeviceManage", "0", nullptr));
        label_9->setText(QApplication::translate("DeviceManage", "5", nullptr));
        label_8->setText(QApplication::translate("DeviceManage", "9", nullptr));
        label_7->setText(QApplication::translate("DeviceManage", "0", nullptr));
        label_23->setText(QApplication::translate("DeviceManage", "9", nullptr));
        label_24->setText(QApplication::translate("DeviceManage", "\347\243\250\347\232\256", nullptr));
        groupBox->setTitle(QString());
        radio_blur->setText(QString());
        radio_smooth->setText(QString());
        radio_nature->setText(QApplication::translate("DeviceManage", "12", nullptr));
        label_25->setText(QApplication::translate("DeviceManage", "\347\276\216\351\242\234\351\243\216\346\240\274", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_device), QApplication::translate("DeviceManage", "\347\276\216\351\242\234\350\256\276\347\275\256", nullptr));
        label_27->setText(QApplication::translate("DeviceManage", "\344\277\235\345\255\230\350\267\257\345\276\204", nullptr));
        label_10->setText(QApplication::translate("DeviceManage", "\345\210\206\347\211\207\346\227\266\351\225\277", nullptr));
        label_28->setText(QApplication::translate("DeviceManage", "\345\275\225\345\210\266\346\226\271\345\274\217", nullptr));
        btn_local_path->setText(QApplication::translate("DeviceManage", "\346\265\217\350\247\210", nullptr));
        label_30->setText(QApplication::translate("DeviceManage", "\346\216\250\346\265\201\345\234\260\345\235\200", nullptr));
        groupBox_2->setTitle(QString());
        radio_both->setText(QString());
        radio_local->setText(QString());
        radio_server->setText(QApplication::translate("DeviceManage", "12", nullptr));
        label_record_tip->setText(QString());
        label_path->setText(QApplication::translate("DeviceManage", "*", nullptr));
        label_slicetime->setText(QApplication::translate("DeviceManage", "*", nullptr));
        label_url->setText(QApplication::translate("DeviceManage", "*", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_record), QApplication::translate("DeviceManage", "\345\275\225\345\210\266\350\256\276\347\275\256", nullptr));
        label_21->setText(QApplication::translate("DeviceManage", "\351\237\263\351\207\217", nullptr));
        label_14->setText(QApplication::translate("DeviceManage", "\351\242\204\350\247\210", nullptr));
        label_18->setText(QApplication::translate("DeviceManage", "\345\220\257\347\224\250\346\221\204\345\203\217\345\244\264", nullptr));
        label_12->setText(QApplication::translate("DeviceManage", "\351\200\211\346\213\251\351\272\246\345\205\213\351\243\216", nullptr));
        label_20->setText(QApplication::translate("DeviceManage", "100", nullptr));
        chb_mic->setText(QString());
        label_17->setText(QApplication::translate("DeviceManage", "\351\200\211\346\213\251\346\221\204\345\203\217\345\244\264", nullptr));
        chb_camera->setText(QString());
        label_15->setText(QApplication::translate("DeviceManage", "50", nullptr));
        label_19->setText(QApplication::translate("DeviceManage", "\345\220\257\347\224\250\351\272\246\345\205\213\351\243\216", nullptr));
        label_13->setText(QApplication::translate("DeviceManage", "0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_device_3), QApplication::translate("DeviceManage", "\347\241\254\344\273\266\350\256\276\347\275\256", nullptr));
        btn_ok->setText(QApplication::translate("DeviceManage", "\347\241\256\345\256\232", nullptr));
        btn_cancel->setText(QApplication::translate("DeviceManage", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeviceManage: public Ui_DeviceManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICEMANAGE_H
