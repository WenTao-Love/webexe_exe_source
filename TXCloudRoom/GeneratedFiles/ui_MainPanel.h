/********************************************************************************
** Form generated from reading UI file 'MainPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPANEL_H
#define UI_MAINPANEL_H

#include <GDIWidget.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPanel
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_camera;
    QHBoxLayout *horizontalLayout_7;
    QWidget *widget_camera;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    GDIWidget *dis_main;
    QLabel *label_mute_main;
    QWidget *widget_camera_tip;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_11;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label;
    QLabel *label_tip;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_local;
    QLabel *label_bg;
    QLabel *label_mute;
    QWidget *widget_wnd_local;
    QWidget *widget_wnd;
    QWidget *widget_camera1;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *hLayout_camera;
    QWidget *tab_board;
    QHBoxLayout *horizontalLayout_8;
    QWidget *widget_content;
    QGridLayout *gridLayout_2;
    QWidget *widget_camera2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *hLayout_board;
    QWidget *widget_board;
    QWidget *tab_screen;
    QHBoxLayout *horizontalLayout_6;
    QStackedWidget *stacked_screen;
    QWidget *page_screen_options;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_area_share;
    QPushButton *btn_full_share;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QWidget *page_screen_content;
    QWidget *widget_screen_share;

    void setupUi(QWidget *MainPanel)
    {
        if (MainPanel->objectName().isEmpty())
            MainPanel->setObjectName(QStringLiteral("MainPanel"));
        MainPanel->resize(620, 630);
        MainPanel->setStyleSheet(QStringLiteral("#MainPanel{ background-color:rgb(247,248,250);}"));
        verticalLayout = new QVBoxLayout(MainPanel);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(MainPanel);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(620, 590));
        tabWidget->setMaximumSize(QSize(16777215, 16777215));
        tabWidget->setStyleSheet(QLatin1String("#tabWidget{\n"
"	background-color: rgb(247,248,250);\n"
"} \n"
"\n"
"QTabWidget::right-corner {\n"
"    height: 30px;\n"
"    bottom: 10px;\n"
"	margin-left: 3px;\n"
"	margin-right: 3px;\n"
"}\n"
"\n"
"QTabWidget::pane { /* The tab widget frame */\n"
"	\n"
"	top: 0px;\n"
"	border-top: 1px solid #dbdbdb;\n"
"	margin-left: 0px;\n"
"	margin-right: 0px;\n"
"	margin-bottom:0px;\n"
"}\n"
"/* Style the tab using the tab sub-control. Note that\n"
"    it reads QTabBar _not_ QTabWidget */\n"
"QTabBar::tab {\n"
"	padding-top: 0px;\n"
"	margin-left: 2px;\n"
"    padding-left:0px;\n"
"	padding-right:0px;\n"
"	padding-bottom:0px;\n"
"	height:48px;\n"
"	width: 84px;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"	font: bold 12pt \"Microsoft YaHei\";\n"
"	color: #006eff;\n"
"    background: rgb(247,248,250);;\n"
"	border-bottom: 2px solid #006eff;\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"	font: 12pt \"Microsoft YaHei\";\n"
"	color: #333333;\n"
"    background: rgb(247,248,250);;\n"
"}\n"
""));
        tab_camera = new QWidget();
        tab_camera->setObjectName(QStringLiteral("tab_camera"));
        horizontalLayout_7 = new QHBoxLayout(tab_camera);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 15, 0, 15);
        widget_camera = new QWidget(tab_camera);
        widget_camera->setObjectName(QStringLiteral("widget_camera"));
        widget_camera->setMinimumSize(QSize(620, 540));
        verticalLayout_2 = new QVBoxLayout(widget_camera);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(0);
        dis_main = new GDIWidget(widget_camera);
        dis_main->setObjectName(QStringLiteral("dis_main"));
        dis_main->setMinimumSize(QSize(620, 390));
        dis_main->setFocusPolicy(Qt::StrongFocus);
        label_mute_main = new QLabel(dis_main);
        label_mute_main->setObjectName(QStringLiteral("label_mute_main"));
        label_mute_main->setGeometry(QRect(750, 0, 30, 30));
        label_mute_main->setMinimumSize(QSize(30, 30));
        label_mute_main->setMaximumSize(QSize(30, 30));
        label_mute_main->setStyleSheet(QLatin1String("background-image: url(:/RoomService/mute.png);\n"
"background-repeat: no-repeat;\n"
"background-position: center;"));
        widget_camera_tip = new QWidget(dis_main);
        widget_camera_tip->setObjectName(QStringLiteral("widget_camera_tip"));
        widget_camera_tip->setGeometry(QRect(0, 0, 620, 390));
        widget_camera_tip->setStyleSheet(QLatin1String("#widget_camera_tip\n"
"{\n"
"	background-color: rgb(247,248,250);;\n"
"}"));
        horizontalLayout = new QHBoxLayout(widget_camera_tip);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(10);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label = new QLabel(widget_camera_tip);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(40, 40));
        label->setMaximumSize(QSize(40, 40));
        label->setStyleSheet(QLatin1String("background-image: url(:/RoomService/cameraOff.png);\n"
"background-repeat: no-repeat;\n"
"background-position: center;\n"
"border-width: 0px;"));

        horizontalLayout_11->addWidget(label);


        verticalLayout_10->addLayout(horizontalLayout_11);

        label_tip = new QLabel(widget_camera_tip);
        label_tip->setObjectName(QStringLiteral("label_tip"));
        label_tip->setStyleSheet(QString::fromUtf8("color: rgb(136,136,136);\n"
"border-width: 0px;\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout_10->addWidget(label_tip);


        horizontalLayout_10->addLayout(verticalLayout_10);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);


        verticalLayout_11->addLayout(horizontalLayout_10);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_4);


        horizontalLayout->addLayout(verticalLayout_11);

        widget_local = new QWidget(dis_main);
        widget_local->setObjectName(QStringLiteral("widget_local"));
        widget_local->setGeometry(QRect(470, 240, 150, 0));
        label_bg = new QLabel(widget_local);
        label_bg->setObjectName(QStringLiteral("label_bg"));
        label_bg->setGeometry(QRect(0, 0, 150, 150));
        label_bg->setMinimumSize(QSize(150, 150));
        label_bg->setMaximumSize(QSize(150, 150));
        label_bg->setStyleSheet(QStringLiteral(""));
        label_bg->setPixmap(QPixmap(QString::fromUtf8(":/RoomService/cameraOffBG.png")));
        label_bg->setScaledContents(true);
        label_mute = new QLabel(widget_local);
        label_mute->setObjectName(QStringLiteral("label_mute"));
        label_mute->setGeometry(QRect(120, 0, 30, 30));
        label_mute->setMinimumSize(QSize(30, 30));
        label_mute->setMaximumSize(QSize(30, 30));
        label_mute->setStyleSheet(QLatin1String("background-image: url(:/RoomService/mute.png);\n"
"background-repeat: no-repeat;\n"
"background-position: center;"));
        widget_wnd_local = new QWidget(widget_local);
        widget_wnd_local->setObjectName(QStringLiteral("widget_wnd_local"));
        widget_wnd_local->setGeometry(QRect(0, 0, 150, 150));
        widget_wnd = new QWidget(dis_main);
        widget_wnd->setObjectName(QStringLiteral("widget_wnd"));
        widget_wnd->setGeometry(QRect(0, 0, 620, 390));
        widget_wnd->raise();
        widget_camera_tip->raise();
        label_mute_main->raise();
        widget_local->raise();

        gridLayout->addWidget(dis_main, 1, 0, 1, 1);

        widget_camera1 = new QWidget(widget_camera);
        widget_camera1->setObjectName(QStringLiteral("widget_camera1"));
        widget_camera1->setMinimumSize(QSize(620, 120));
        widget_camera1->setMaximumSize(QSize(16777215, 16777215));
        widget_camera1->setStyleSheet(QLatin1String("border: 0px solid #C4C4C4;\n"
"	background-color: rgb(247,248,250);"));
        horizontalLayout_3 = new QHBoxLayout(widget_camera1);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        hLayout_camera = new QHBoxLayout();
        hLayout_camera->setSpacing(15);
        hLayout_camera->setObjectName(QStringLiteral("hLayout_camera"));

        horizontalLayout_3->addLayout(hLayout_camera);


        gridLayout->addWidget(widget_camera1, 0, 0, 1, 1);

        gridLayout->setRowStretch(0, 3);
        gridLayout->setRowStretch(1, 11);

        verticalLayout_2->addLayout(gridLayout);


        horizontalLayout_7->addWidget(widget_camera);

        tabWidget->addTab(tab_camera, QString());
        tab_board = new QWidget();
        tab_board->setObjectName(QStringLiteral("tab_board"));
        horizontalLayout_8 = new QHBoxLayout(tab_board);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 15, 0, 15);
        widget_content = new QWidget(tab_board);
        widget_content->setObjectName(QStringLiteral("widget_content"));
        widget_content->setMinimumSize(QSize(620, 540));
        widget_content->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_2 = new QGridLayout(widget_content);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_camera2 = new QWidget(widget_content);
        widget_camera2->setObjectName(QStringLiteral("widget_camera2"));
        widget_camera2->setMinimumSize(QSize(620, 120));
        widget_camera2->setMaximumSize(QSize(16777215, 16777215));
        widget_camera2->setStyleSheet(QLatin1String("border: 0px solid #C4C4C4;\n"
"	background-color: rgb(247,248,250);"));
        horizontalLayout_5 = new QHBoxLayout(widget_camera2);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        hLayout_board = new QHBoxLayout();
        hLayout_board->setSpacing(15);
        hLayout_board->setObjectName(QStringLiteral("hLayout_board"));

        horizontalLayout_5->addLayout(hLayout_board);


        gridLayout_2->addWidget(widget_camera2, 0, 0, 1, 1);

        widget_board = new QWidget(widget_content);
        widget_board->setObjectName(QStringLiteral("widget_board"));
        widget_board->setMinimumSize(QSize(620, 390));
        widget_board->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(widget_board, 1, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 3);
        gridLayout_2->setRowStretch(1, 11);

        horizontalLayout_8->addWidget(widget_content);

        tabWidget->addTab(tab_board, QString());
        tab_screen = new QWidget();
        tab_screen->setObjectName(QStringLiteral("tab_screen"));
        horizontalLayout_6 = new QHBoxLayout(tab_screen);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 15, 0, 15);
        stacked_screen = new QStackedWidget(tab_screen);
        stacked_screen->setObjectName(QStringLiteral("stacked_screen"));
        stacked_screen->setStyleSheet(QStringLiteral("	background-color: rgb(247,248,250);"));
        page_screen_options = new QWidget();
        page_screen_options->setObjectName(QStringLiteral("page_screen_options"));
        page_screen_options->setStyleSheet(QLatin1String("#page_screen_options{\n"
"	background-color: rgb(247,248,250);\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(page_screen_options);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(486, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        btn_area_share = new QPushButton(page_screen_options);
        btn_area_share->setObjectName(QStringLiteral("btn_area_share"));
        btn_area_share->setMinimumSize(QSize(160, 30));
        btn_area_share->setMaximumSize(QSize(160, 30));
        btn_area_share->setStyleSheet(QLatin1String("QPushButton {\n"
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

        verticalLayout_4->addWidget(btn_area_share);

        btn_full_share = new QPushButton(page_screen_options);
        btn_full_share->setObjectName(QStringLiteral("btn_full_share"));
        btn_full_share->setMinimumSize(QSize(160, 30));
        btn_full_share->setMaximumSize(QSize(160, 30));
        btn_full_share->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: none;\n"
"	background:  #006eff;\n"
"	color: #ffffff;\n"
"	font: 9pt \"Microsoft YaHei\";\n"
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

        verticalLayout_4->addWidget(btn_full_share);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_4);

        horizontalSpacer_4 = new QSpacerItem(486, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        stacked_screen->addWidget(page_screen_options);
        page_screen_content = new QWidget();
        page_screen_content->setObjectName(QStringLiteral("page_screen_content"));
        page_screen_content->setStyleSheet(QLatin1String("#page_screen_content{\n"
"	background-color: rgb(247,248,250);\n"
"}"));
        widget_screen_share = new QWidget(page_screen_content);
        widget_screen_share->setObjectName(QStringLiteral("widget_screen_share"));
        widget_screen_share->setGeometry(QRect(0, 0, 300, 168));
        stacked_screen->addWidget(page_screen_content);

        horizontalLayout_6->addWidget(stacked_screen);

        tabWidget->addTab(tab_screen, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(MainPanel);

        tabWidget->setCurrentIndex(0);
        stacked_screen->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainPanel);
    } // setupUi

    void retranslateUi(QWidget *MainPanel)
    {
        MainPanel->setWindowTitle(QApplication::translate("MainPanel", "MainPanel", nullptr));
        label_mute_main->setText(QString());
        label->setText(QString());
        label_tip->setText(QApplication::translate("MainPanel", "\346\234\252\345\274\200\345\220\257\346\221\204\345\203\217\345\244\264\346\232\202\346\227\266\346\262\241\346\234\211\347\224\273\351\235\242", nullptr));
        label_bg->setText(QString());
        label_mute->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_camera), QApplication::translate("MainPanel", "\346\221\204\345\203\217\345\244\264", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_board), QApplication::translate("MainPanel", "\347\231\275\346\235\277", nullptr));
        btn_area_share->setText(QApplication::translate("MainPanel", "\345\272\224\347\224\250\345\210\206\344\272\253", nullptr));
        btn_full_share->setText(QApplication::translate("MainPanel", "\345\205\250\345\261\217\345\210\206\344\272\253", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_screen), QApplication::translate("MainPanel", "\345\261\217\345\271\225\345\210\206\344\272\253", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPanel: public Ui_MainPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPANEL_H
