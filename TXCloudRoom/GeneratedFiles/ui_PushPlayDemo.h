/********************************************************************************
** Form generated from reading UI file 'PushPlayDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUSHPLAYDEMO_H
#define UI_PUSHPLAYDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PushPlayDemo
{
public:
    QWidget *centralWidget;
    QWidget *widget_main;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *btn_close;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_4;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QOpenGLWidget *widget_video_push;
    QVBoxLayout *verticalLayout_24;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_push;
    QPushButton *btn_push;
    QPushButton *btnShotPusher;
    QPushButton *btn_push_url;
    QCheckBox *chb_push_mirror;
    QCheckBox *chb_push_beauty;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QOpenGLWidget *widget_video_play;
    QVBoxLayout *verticalLayout_26;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_play;
    QPushButton *btn_play;
    QPushButton *btnShotPlayer;
    QPushButton *btn_play_log;
    QWidget *widget_8;
    QComboBox *cmb_rotation;
    QLabel *label_8;
    QWidget *widget_9;
    QComboBox *cmb_render;
    QLabel *label_9;
    QWidget *widget_10;
    QComboBox *cmb_delay_min;
    QLabel *label_12;
    QWidget *widget_11;
    QComboBox *cmb_delay_max;
    QLabel *label_13;
    QWidget *widget_13;
    QComboBox *cmb_FPS;
    QLabel *label_6;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QCheckBox *cbOpenSystemVoice;
    QGroupBox *groupBox_3;
    QLabel *label_up_speed;
    QLabel *label_23;
    QLabel *label_up_video_queue;
    QLabel *label_24;
    QLabel *label_26;
    QLabel *label_up_audio_bitrate;
    QLabel *label_up_video_bitrate;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_up_audio_queue;
    QLabel *label_up_fps;
    QLabel *label_up_gop;
    QWidget *widget_12;
    QComboBox *cmb_resolution;
    QLabel *label_5;
    QWidget *widget_7;
    QComboBox *cmb_bitrate;
    QLabel *label_4;
    QWidget *widget_6;
    QComboBox *cmb_windows;
    QLabel *label_11;
    QComboBox *cmb_cameras;
    QLabel *label_10;
    QLineEdit *lineEdit_bottom;
    QLineEdit *lineEdit_right;
    QLineEdit *lineEdit_left;
    QLineEdit *lineEdit_top;

    void setupUi(QMainWindow *PushPlayDemo)
    {
        if (PushPlayDemo->objectName().isEmpty())
            PushPlayDemo->setObjectName(QStringLiteral("PushPlayDemo"));
        PushPlayDemo->resize(1101, 671);
        PushPlayDemo->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(PushPlayDemo);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        widget_main = new QWidget(centralWidget);
        widget_main->setObjectName(QStringLiteral("widget_main"));
        widget_main->setGeometry(QRect(0, 0, 1101, 671));
        widget_main->setStyleSheet(QLatin1String(".QWidget#widget_main{\n"
"  border-style: solid;\n"
"  border-width: 0px;\n"
"  border-color: rgb(91, 155, 213);\n"
"  background-color: rgb(25,27,25);\n"
"}\n"
""));
        widget = new QWidget(widget_main);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(1, 0, 1101, 30));
        widget->setStyleSheet(QLatin1String("QWidget#widget{\n"
"	background-color: rgb(25,25,25);\n"
"	border-width: 1px;\n"
"    border-color: rgb(0,0,0);\n"
"}"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 5, -1, 5);
        label_14 = new QLabel(widget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));

        horizontalLayout->addWidget(label_14);

        horizontalSpacer_6 = new QSpacerItem(999, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        btn_close = new QPushButton(widget);
        btn_close->setObjectName(QStringLiteral("btn_close"));
        btn_close->setMinimumSize(QSize(20, 20));
        btn_close->setMaximumSize(QSize(20, 20));
        btn_close->setStyleSheet(QLatin1String("QPushButton{\n"
"	font: 20pt \"Courier New\";\n"
"    color: rgb(153,153,153);\n"
"	background-color: rgba(255,255, 255, 0);\n"
"}\n"
"QPushButton:hover{\n"
"	color: rgb(153,153,153);\n"
"}\n"
"QPushButton:pressed{\n"
"	color: rgb(153,153,153);\n"
"}"));

        horizontalLayout->addWidget(btn_close);

        btn_close->raise();
        label_14->raise();
        widget_2 = new QWidget(widget_main);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(4, 37, 1091, 621));
        widget_2->setStyleSheet(QStringLiteral(""));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setEnabled(true);
        widget_4->setStyleSheet(QStringLiteral(""));
        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(30, 0, 490, 440));
        widget_3->setStyleSheet(QLatin1String("  background-color: rgb(36,35,36);\n"
" border-style: solid;\n"
" border-width: 0px;\n"
" border-color: rgb(91, 155, 213);"));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, 0, 1, -1);
        label = new QLabel(widget_3);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 20));
        label->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        widget_video_push = new QOpenGLWidget(widget_3);
        widget_video_push->setObjectName(QStringLiteral("widget_video_push"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_video_push->sizePolicy().hasHeightForWidth());
        widget_video_push->setSizePolicy(sizePolicy);
        widget_video_push->setMinimumSize(QSize(480, 360));
        widget_video_push->setMaximumSize(QSize(520, 390));
        verticalLayout_24 = new QVBoxLayout(widget_video_push);
        verticalLayout_24->setSpacing(0);
        verticalLayout_24->setContentsMargins(11, 11, 11, 11);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        verticalLayout_24->setContentsMargins(0, 0, 0, 0);

        verticalLayout->addWidget(widget_video_push);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineEdit_push = new QLineEdit(widget_3);
        lineEdit_push->setObjectName(QStringLiteral("lineEdit_push"));
        lineEdit_push->setMinimumSize(QSize(0, 30));
        lineEdit_push->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(77,75,77);"));

        horizontalLayout_3->addWidget(lineEdit_push);

        btn_push = new QPushButton(widget_3);
        btn_push->setObjectName(QStringLiteral("btn_push"));
        btn_push->setMinimumSize(QSize(30, 30));
        btn_push->setStyleSheet(QStringLiteral("background-image:url(:/PushPlayTest/start.png);"));

        horizontalLayout_3->addWidget(btn_push);

        btnShotPusher = new QPushButton(widget_3);
        btnShotPusher->setObjectName(QStringLiteral("btnShotPusher"));
        btnShotPusher->setMinimumSize(QSize(30, 30));
        btnShotPusher->setAutoFillBackground(false);
        btnShotPusher->setStyleSheet(QStringLiteral("border-image:url(:/PushPlayTest/snapshot.png);"));

        horizontalLayout_3->addWidget(btnShotPusher);

        btn_push_url = new QPushButton(widget_3);
        btn_push_url->setObjectName(QStringLiteral("btn_push_url"));
        btn_push_url->setMinimumSize(QSize(30, 30));
        btn_push_url->setStyleSheet(QStringLiteral("background-image:url(:/PushPlayTest/new.png);"));

        horizontalLayout_3->addWidget(btn_push_url);

        chb_push_mirror = new QCheckBox(widget_3);
        chb_push_mirror->setObjectName(QStringLiteral("chb_push_mirror"));
        sizePolicy.setHeightForWidth(chb_push_mirror->sizePolicy().hasHeightForWidth());
        chb_push_mirror->setSizePolicy(sizePolicy);
        chb_push_mirror->setMinimumSize(QSize(30, 30));
        chb_push_mirror->setMaximumSize(QSize(30, 30));
        chb_push_mirror->setStyleSheet(QLatin1String("QCheckBox{\n"
"    border-width: 0px;\n"
"}\n"
"QCheckBox::indicator { width: 30px; height: 30px; } \n"
"QCheckBox::indicator:unchecked{\n"
"	background-image: url(:/PushPlayTest/mirror_off.png);\n"
"}\n"
"QCheckBox::indicator:checked{\n"
"	image: url(:/PushPlayTest/mirror_on.png);\n"
"}"));

        horizontalLayout_3->addWidget(chb_push_mirror);

        chb_push_beauty = new QCheckBox(widget_3);
        chb_push_beauty->setObjectName(QStringLiteral("chb_push_beauty"));
        sizePolicy.setHeightForWidth(chb_push_beauty->sizePolicy().hasHeightForWidth());
        chb_push_beauty->setSizePolicy(sizePolicy);
        chb_push_beauty->setMinimumSize(QSize(30, 30));
        chb_push_beauty->setMaximumSize(QSize(30, 30));
        chb_push_beauty->setStyleSheet(QLatin1String("QCheckBox{\n"
"    border-width: 0px;\n"
"}\n"
"QCheckBox::indicator { width: 30px; height: 30px; } \n"
"QCheckBox::indicator:unchecked{\n"
"	background-image: url(:/PushPlayTest/beautiful-dis.png);\n"
"}\n"
"QCheckBox::indicator:checked{\n"
"	image: url(:/PushPlayTest/beautiful.png);\n"
"}"));

        horizontalLayout_3->addWidget(chb_push_beauty);


        verticalLayout->addLayout(horizontalLayout_3);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(580, 0, 490, 440));
        widget_5->setStyleSheet(QLatin1String("  background-color: rgb(36,35,36);\n"
" border-style: solid;\n"
" border-width: 0px;\n"
" border-color: rgb(91, 155, 213);"));
        verticalLayout_2 = new QVBoxLayout(widget_5);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(1, 0, 1, -1);
        label_2 = new QLabel(widget_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 20));
        label_2->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        widget_video_play = new QOpenGLWidget(widget_5);
        widget_video_play->setObjectName(QStringLiteral("widget_video_play"));
        sizePolicy.setHeightForWidth(widget_video_play->sizePolicy().hasHeightForWidth());
        widget_video_play->setSizePolicy(sizePolicy);
        widget_video_play->setMinimumSize(QSize(480, 360));
        widget_video_play->setMaximumSize(QSize(520, 390));
        verticalLayout_26 = new QVBoxLayout(widget_video_play);
        verticalLayout_26->setSpacing(0);
        verticalLayout_26->setContentsMargins(11, 11, 11, 11);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        verticalLayout_26->setContentsMargins(0, 0, 0, 0);

        verticalLayout_2->addWidget(widget_video_play);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lineEdit_play = new QLineEdit(widget_5);
        lineEdit_play->setObjectName(QStringLiteral("lineEdit_play"));
        lineEdit_play->setMinimumSize(QSize(0, 30));
        lineEdit_play->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(77,75,77);"));

        horizontalLayout_4->addWidget(lineEdit_play);

        btn_play = new QPushButton(widget_5);
        btn_play->setObjectName(QStringLiteral("btn_play"));
        btn_play->setMinimumSize(QSize(30, 30));
        btn_play->setStyleSheet(QStringLiteral("background-image:url(:/PushPlayTest/start.png);"));

        horizontalLayout_4->addWidget(btn_play);

        btnShotPlayer = new QPushButton(widget_5);
        btnShotPlayer->setObjectName(QStringLiteral("btnShotPlayer"));
        btnShotPlayer->setMinimumSize(QSize(30, 30));
        btnShotPlayer->setStyleSheet(QStringLiteral("border-image:url(:/PushPlayTest/snapshot.png);"));

        horizontalLayout_4->addWidget(btnShotPlayer);

        btn_play_log = new QPushButton(widget_5);
        btn_play_log->setObjectName(QStringLiteral("btn_play_log"));
        btn_play_log->setMinimumSize(QSize(30, 30));
        btn_play_log->setStyleSheet(QLatin1String("QPushButton{\n"
"background-image:url(:/PushPlayTest/log.png);\n"
"}\n"
"QPushButton:pressed{\n"
"background-image:url(:/PushPlayTest/log2.png);\n"
"}"));

        horizontalLayout_4->addWidget(btn_play_log);


        verticalLayout_2->addLayout(horizontalLayout_4);

        widget_8 = new QWidget(widget_4);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setGeometry(QRect(750, 450, 191, 40));
        widget_8->setStyleSheet(QStringLiteral("border-width: 0px;"));
        cmb_rotation = new QComboBox(widget_8);
        cmb_rotation->setObjectName(QStringLiteral("cmb_rotation"));
        cmb_rotation->setGeometry(QRect(60, 20, 100, 20));
        cmb_rotation->setMinimumSize(QSize(100, 0));
        cmb_rotation->setStyleSheet(QLatin1String("\n"
" border-style: solid;\n"
" border-width: 1px;\n"
" border-color: rgb(0,0,0);"));
        label_8 = new QLabel(widget_8);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 20, 50, 20));
        label_8->setMinimumSize(QSize(50, 20));
        label_8->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        widget_9 = new QWidget(widget_4);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setGeometry(QRect(910, 450, 191, 40));
        widget_9->setStyleSheet(QStringLiteral("border-width: 0px;"));
        cmb_render = new QComboBox(widget_9);
        cmb_render->setObjectName(QStringLiteral("cmb_render"));
        cmb_render->setGeometry(QRect(60, 20, 100, 20));
        cmb_render->setMinimumSize(QSize(100, 0));
        cmb_render->setStyleSheet(QLatin1String("\n"
" border-style: solid;\n"
" border-width: 1px;\n"
" border-color: rgb(0,0,0);"));
        label_9 = new QLabel(widget_9);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 20, 50, 20));
        label_9->setMinimumSize(QSize(50, 20));
        label_9->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        widget_10 = new QWidget(widget_4);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setGeometry(QRect(750, 490, 191, 40));
        widget_10->setStyleSheet(QStringLiteral("border-width: 0px;"));
        cmb_delay_min = new QComboBox(widget_10);
        cmb_delay_min->setObjectName(QStringLiteral("cmb_delay_min"));
        cmb_delay_min->setEnabled(true);
        cmb_delay_min->setGeometry(QRect(60, 20, 100, 20));
        cmb_delay_min->setMinimumSize(QSize(100, 0));
        cmb_delay_min->setStyleSheet(QLatin1String("\n"
" border-style: solid;\n"
" border-width: 1px;\n"
" border-color: rgb(0,0,0);"));
        label_12 = new QLabel(widget_10);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 20, 50, 20));
        label_12->setMinimumSize(QSize(50, 20));
        label_12->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        widget_11 = new QWidget(widget_4);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        widget_11->setGeometry(QRect(910, 490, 191, 40));
        widget_11->setStyleSheet(QStringLiteral("border-width: 0px;"));
        cmb_delay_max = new QComboBox(widget_11);
        cmb_delay_max->setObjectName(QStringLiteral("cmb_delay_max"));
        cmb_delay_max->setEnabled(true);
        cmb_delay_max->setGeometry(QRect(60, 20, 100, 20));
        cmb_delay_max->setMinimumSize(QSize(100, 0));
        cmb_delay_max->setStyleSheet(QLatin1String("\n"
" border-style: solid;\n"
" border-width: 1px;\n"
" border-color: rgb(0,0,0);"));
        label_13 = new QLabel(widget_11);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 20, 50, 20));
        label_13->setMinimumSize(QSize(50, 20));
        label_13->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        widget_13 = new QWidget(widget_4);
        widget_13->setObjectName(QStringLiteral("widget_13"));
        widget_13->setGeometry(QRect(600, 490, 191, 40));
        widget_13->setStyleSheet(QStringLiteral("border-width: 0px;"));
        cmb_FPS = new QComboBox(widget_13);
        cmb_FPS->setObjectName(QStringLiteral("cmb_FPS"));
        cmb_FPS->setGeometry(QRect(50, 20, 100, 20));
        cmb_FPS->setMinimumSize(QSize(100, 0));
        cmb_FPS->setStyleSheet(QLatin1String("\n"
" border-style: solid;\n"
" border-width: 1px;\n"
" border-color: rgb(0,0,0);"));
        label_6 = new QLabel(widget_13);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 20, 41, 20));
        label_6->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        groupBox = new QGroupBox(widget_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 440, 421, 111));
        QPalette palette;
        QBrush brush(QColor(153, 153, 153, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        groupBox->setPalette(palette);
        groupBox->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        groupBox_2 = new QGroupBox(widget_4);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(450, 440, 631, 111));
        groupBox_2->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        cbOpenSystemVoice = new QCheckBox(groupBox_2);
        cbOpenSystemVoice->setObjectName(QStringLiteral("cbOpenSystemVoice"));
        cbOpenSystemVoice->setGeometry(QRect(30, 70, 121, 20));
        cbOpenSystemVoice->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        groupBox_3 = new QGroupBox(widget_4);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 560, 1061, 61));
        groupBox_3->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        label_up_speed = new QLabel(groupBox_3);
        label_up_speed->setObjectName(QStringLiteral("label_up_speed"));
        label_up_speed->setGeometry(QRect(68, 20, 80, 24));
        label_up_speed->setMinimumSize(QSize(80, 24));
        label_up_speed->setMaximumSize(QSize(80, 24));
        label_up_speed->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        label_23 = new QLabel(groupBox_3);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(934, 20, 30, 24));
        label_23->setMinimumSize(QSize(30, 24));
        label_23->setMaximumSize(QSize(30, 24));
        label_23->setStyleSheet(QStringLiteral("color: rgb(153,153,153);\\nborder-width: 0px;"));
        label_up_video_queue = new QLabel(groupBox_3);
        label_up_video_queue->setObjectName(QStringLiteral("label_up_video_queue"));
        label_up_video_queue->setGeometry(QRect(555, 20, 80, 24));
        label_up_video_queue->setMinimumSize(QSize(80, 24));
        label_up_video_queue->setMaximumSize(QSize(80, 24));
        label_up_video_queue->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        label_24 = new QLabel(groupBox_3);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(641, 20, 70, 24));
        label_24->setMinimumSize(QSize(70, 24));
        label_24->setMaximumSize(QSize(70, 24));
        label_24->setStyleSheet(QStringLiteral("color: rgb(153,153,153);\\nborder-width: 0px;"));
        label_26 = new QLabel(groupBox_3);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(803, 20, 39, 24));
        label_26->setMinimumSize(QSize(39, 24));
        label_26->setMaximumSize(QSize(30, 24));
        label_26->setStyleSheet(QStringLiteral("color: rgb(153,153,153);\\nborder-width: 0px;"));
        label_up_audio_bitrate = new QLabel(groupBox_3);
        label_up_audio_bitrate->setObjectName(QStringLiteral("label_up_audio_bitrate"));
        label_up_audio_bitrate->setGeometry(QRect(393, 20, 80, 24));
        label_up_audio_bitrate->setMinimumSize(QSize(80, 24));
        label_up_audio_bitrate->setMaximumSize(QSize(80, 24));
        label_up_audio_bitrate->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        label_up_video_bitrate = new QLabel(groupBox_3);
        label_up_video_bitrate->setObjectName(QStringLiteral("label_up_video_bitrate"));
        label_up_video_bitrate->setGeometry(QRect(240, 20, 80, 24));
        label_up_video_bitrate->setMinimumSize(QSize(80, 24));
        label_up_video_bitrate->setMaximumSize(QSize(80, 24));
        label_up_video_bitrate->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        label_27 = new QLabel(groupBox_3);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(326, 20, 61, 24));
        label_27->setMaximumSize(QSize(80, 24));
        label_27->setStyleSheet(QStringLiteral("color: rgb(153,153,153);\\nborder-width: 0px;"));
        label_28 = new QLabel(groupBox_3);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(154, 20, 80, 24));
        label_28->setMinimumSize(QSize(80, 24));
        label_28->setMaximumSize(QSize(80, 24));
        label_28->setStyleSheet(QStringLiteral("color: rgb(153,153,153);\\nborder-width: 0px;"));
        label_29 = new QLabel(groupBox_3);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(12, 20, 50, 24));
        label_29->setMinimumSize(QSize(50, 24));
        label_29->setMaximumSize(QSize(50, 24));
        label_29->setStyleSheet(QStringLiteral("color: rgb(153,153,153);\\nborder-width: 0px;"));
        label_30 = new QLabel(groupBox_3);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(479, 20, 70, 24));
        label_30->setMinimumSize(QSize(70, 24));
        label_30->setMaximumSize(QSize(70, 24));
        label_30->setStyleSheet(QStringLiteral("color: rgb(153,153,153);\\nborder-width: 0px;"));
        label_up_audio_queue = new QLabel(groupBox_3);
        label_up_audio_queue->setObjectName(QStringLiteral("label_up_audio_queue"));
        label_up_audio_queue->setGeometry(QRect(717, 20, 80, 24));
        label_up_audio_queue->setMinimumSize(QSize(80, 24));
        label_up_audio_queue->setMaximumSize(QSize(80, 24));
        label_up_audio_queue->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        label_up_fps = new QLabel(groupBox_3);
        label_up_fps->setObjectName(QStringLiteral("label_up_fps"));
        label_up_fps->setGeometry(QRect(848, 20, 80, 24));
        label_up_fps->setMinimumSize(QSize(80, 24));
        label_up_fps->setMaximumSize(QSize(80, 24));
        label_up_fps->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        label_up_gop = new QLabel(groupBox_3);
        label_up_gop->setObjectName(QStringLiteral("label_up_gop"));
        label_up_gop->setGeometry(QRect(970, 20, 80, 24));
        label_up_gop->setMinimumSize(QSize(80, 24));
        label_up_gop->setMaximumSize(QSize(80, 24));
        label_up_gop->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        widget_12 = new QWidget(widget_4);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        widget_12->setGeometry(QRect(600, 460, 191, 40));
        widget_12->setStyleSheet(QStringLiteral("border-width: 0px;"));
        cmb_resolution = new QComboBox(widget_12);
        cmb_resolution->setObjectName(QStringLiteral("cmb_resolution"));
        cmb_resolution->setGeometry(QRect(50, 10, 100, 20));
        cmb_resolution->setMinimumSize(QSize(100, 0));
        cmb_resolution->setStyleSheet(QLatin1String("\n"
" border-style: solid;\n"
" border-width: 1px;\n"
" border-color: rgb(0,0,0);"));
        label_5 = new QLabel(widget_12);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 10, 40, 20));
        label_5->setMinimumSize(QSize(40, 20));
        label_5->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        widget_7 = new QWidget(widget_4);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setGeometry(QRect(460, 450, 191, 40));
        widget_7->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;;"));
        cmb_bitrate = new QComboBox(widget_7);
        cmb_bitrate->setObjectName(QStringLiteral("cmb_bitrate"));
        cmb_bitrate->setGeometry(QRect(40, 20, 100, 20));
        cmb_bitrate->setMinimumSize(QSize(100, 0));
        cmb_bitrate->setStyleSheet(QLatin1String("\n"
" border-style: solid;\n"
" border-width: 1px;\n"
" border-color: rgb(0,0,0);"));
        label_4 = new QLabel(widget_7);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 20, 41, 20));
        label_4->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        widget_6 = new QWidget(widget_4);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(30, 460, 401, 91));
        widget_6->setStyleSheet(QStringLiteral("border-width: 0px;"));
        cmb_windows = new QComboBox(widget_6);
        cmb_windows->setObjectName(QStringLiteral("cmb_windows"));
        cmb_windows->setGeometry(QRect(60, 50, 201, 20));
        cmb_windows->setMinimumSize(QSize(100, 0));
        cmb_windows->setStyleSheet(QLatin1String("\n"
" border-style: solid;\n"
" border-width: 1px;\n"
" border-color: rgb(0,0,0);"));
        label_11 = new QLabel(widget_6);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 50, 40, 20));
        label_11->setMinimumSize(QSize(40, 20));
        label_11->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        cmb_cameras = new QComboBox(widget_6);
        cmb_cameras->setObjectName(QStringLiteral("cmb_cameras"));
        cmb_cameras->setGeometry(QRect(60, 10, 201, 20));
        cmb_cameras->setMinimumSize(QSize(100, 0));
        cmb_cameras->setStyleSheet(QLatin1String("\n"
" border-style: solid;\n"
" border-width: 1px;\n"
" border-color: rgb(0,0,0);"));
        label_10 = new QLabel(widget_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 10, 40, 20));
        label_10->setMinimumSize(QSize(40, 20));
        label_10->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        lineEdit_bottom = new QLineEdit(widget_6);
        lineEdit_bottom->setObjectName(QStringLiteral("lineEdit_bottom"));
        lineEdit_bottom->setGeometry(QRect(320, 64, 41, 21));
        lineEdit_right = new QLineEdit(widget_6);
        lineEdit_right->setObjectName(QStringLiteral("lineEdit_right"));
        lineEdit_right->setGeometry(QRect(360, 34, 41, 21));
        lineEdit_left = new QLineEdit(widget_6);
        lineEdit_left->setObjectName(QStringLiteral("lineEdit_left"));
        lineEdit_left->setGeometry(QRect(280, 34, 41, 21));
        lineEdit_top = new QLineEdit(widget_6);
        lineEdit_top->setObjectName(QStringLiteral("lineEdit_top"));
        lineEdit_top->setGeometry(QRect(320, 0, 41, 20));
        groupBox_3->raise();
        groupBox_2->raise();
        groupBox->raise();
        widget_3->raise();
        widget_5->raise();
        widget_8->raise();
        widget_9->raise();
        widget_10->raise();
        widget_11->raise();
        widget_13->raise();
        widget_12->raise();
        widget_7->raise();
        widget_6->raise();

        horizontalLayout_2->addWidget(widget_4);

        PushPlayDemo->setCentralWidget(centralWidget);

        retranslateUi(PushPlayDemo);

        QMetaObject::connectSlotsByName(PushPlayDemo);
    } // setupUi

    void retranslateUi(QMainWindow *PushPlayDemo)
    {
        PushPlayDemo->setWindowTitle(QApplication::translate("PushPlayDemo", "PushPlayDemo", nullptr));
        label_14->setText(QApplication::translate("PushPlayDemo", "\350\205\276\350\256\257\344\272\221\350\247\206\351\242\221\357\274\210C++\357\274\211", nullptr));
        btn_close->setText(QApplication::translate("PushPlayDemo", "\303\227", nullptr));
        label->setText(QApplication::translate("PushPlayDemo", "\346\216\250\346\265\201\345\212\237\350\203\275", nullptr));
        btn_push->setText(QString());
        btnShotPusher->setText(QString());
        btn_push_url->setText(QString());
        chb_push_mirror->setText(QString());
        chb_push_beauty->setText(QString());
        label_2->setText(QApplication::translate("PushPlayDemo", "\346\222\255\346\224\276\345\212\237\350\203\275", nullptr));
        btn_play->setText(QString());
        btnShotPlayer->setText(QString());
        btn_play_log->setText(QString());
        label_8->setText(QApplication::translate("PushPlayDemo", "\347\224\273\351\235\242\346\227\213\350\275\254", nullptr));
        label_9->setText(QApplication::translate("PushPlayDemo", "\345\241\253\345\205\205\346\250\241\345\274\217", nullptr));
        label_12->setText(QApplication::translate("PushPlayDemo", "\346\234\200\345\260\217\347\240\201\347\216\207", nullptr));
        label_13->setText(QApplication::translate("PushPlayDemo", "\346\234\200\345\244\247\347\240\201\347\216\207", nullptr));
        label_6->setText(QApplication::translate("PushPlayDemo", "\345\270\247\347\216\207", nullptr));
        groupBox->setTitle(QApplication::translate("PushPlayDemo", "\346\216\250\346\265\201\346\272\220", nullptr));
        groupBox_2->setTitle(QApplication::translate("PushPlayDemo", "\345\217\202\346\225\260", nullptr));
        cbOpenSystemVoice->setText(QApplication::translate("PushPlayDemo", "\346\211\223\345\274\200\347\263\273\347\273\237\345\243\260\351\237\263\346\267\267\351\237\263", nullptr));
        groupBox_3->setTitle(QApplication::translate("PushPlayDemo", "\346\265\201\345\256\236\346\227\266\347\212\266\346\200\201", nullptr));
        label_up_speed->setText(QString());
        label_23->setText(QApplication::translate("PushPlayDemo", "GOP:", nullptr));
        label_up_video_queue->setText(QString());
        label_24->setText(QApplication::translate("PushPlayDemo", "\351\237\263\351\242\221\347\274\223\345\255\230:", nullptr));
        label_26->setText(QApplication::translate("PushPlayDemo", "\345\270\247\347\216\207:", nullptr));
        label_up_audio_bitrate->setText(QString());
        label_up_video_bitrate->setText(QString());
        label_27->setText(QApplication::translate("PushPlayDemo", "\351\237\263\351\242\221\347\240\201\347\216\207:", nullptr));
        label_28->setText(QApplication::translate("PushPlayDemo", "\350\247\206\351\242\221\347\240\201\347\216\207:", nullptr));
        label_29->setText(QApplication::translate("PushPlayDemo", "\346\200\273\347\240\201\347\216\207:", nullptr));
        label_30->setText(QApplication::translate("PushPlayDemo", "\350\247\206\351\242\221\347\274\223\345\255\230:", nullptr));
        label_up_audio_queue->setText(QString());
        label_up_fps->setText(QString());
        label_up_gop->setText(QString());
        label_5->setText(QApplication::translate("PushPlayDemo", "\345\210\206\350\276\250\347\216\207", nullptr));
        label_4->setText(QApplication::translate("PushPlayDemo", "\346\270\205\346\231\260\345\272\246", nullptr));
        label_11->setText(QApplication::translate("PushPlayDemo", "\345\275\225\345\261\217\345\271\225", nullptr));
        label_10->setText(QApplication::translate("PushPlayDemo", "\346\221\204\345\203\217\345\244\264", nullptr));
        lineEdit_bottom->setText(QApplication::translate("PushPlayDemo", "0", nullptr));
        lineEdit_right->setText(QApplication::translate("PushPlayDemo", "0", nullptr));
        lineEdit_left->setText(QApplication::translate("PushPlayDemo", "0", nullptr));
        lineEdit_top->setText(QApplication::translate("PushPlayDemo", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PushPlayDemo: public Ui_PushPlayDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUSHPLAYDEMO_H
