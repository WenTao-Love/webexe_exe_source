/********************************************************************************
** Form generated from reading UI file 'DialogPushPlay.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPUSHPLAY_H
#define UI_DIALOGPUSHPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogPushPlay
{
public:
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_main;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_time;
    QCheckBox *checkbox_mute;
    QPushButton *btn_beauty_manage;
    QPushButton *btn_min;
    QPushButton *btn_close;
    QWidget *widget_video_play;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_video_push;
    QWidget *widget_video_player_add1;
    QWidget *widget_video_player_add2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *DialogPushPlay)
    {
        if (DialogPushPlay->objectName().isEmpty())
            DialogPushPlay->setObjectName(QStringLiteral("DialogPushPlay"));
        DialogPushPlay->resize(400, 672);
        DialogPushPlay->setMaximumSize(QSize(400, 672));
        DialogPushPlay->setSizeGripEnabled(true);
        horizontalLayout_5 = new QHBoxLayout(DialogPushPlay);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_main = new QWidget(DialogPushPlay);
        widget_main->setObjectName(QStringLiteral("widget_main"));
        widget_main->setMinimumSize(QSize(360, 0));
        widget_main->setMaximumSize(QSize(402, 672));
        widget_main->setStyleSheet(QLatin1String(".QWidget#widget_main{\n"
"  border-style: solid;\n"
"  border-width: 0px;\n"
"  border-color: rgb(91, 155, 213);\n"
"  background-color: rgb(25,27,25);\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(widget_main);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(widget_main);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 35));
        widget->setMaximumSize(QSize(16777215, 35));
        widget->setStyleSheet(QLatin1String("QWidget#widget{\n"
"	background-color: rgb(25,25,25);\n"
"	border-width: 1px;\n"
"    border-color: rgb(0,0,0);\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_title = new QLabel(widget);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));

        horizontalLayout->addWidget(label_title);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        label_time = new QLabel(widget);
        label_time->setObjectName(QStringLiteral("label_time"));
        label_time->setMaximumSize(QSize(150, 24));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        label_time->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_time->setFont(font);
        label_time->setMargin(4);

        horizontalLayout->addWidget(label_time);

        checkbox_mute = new QCheckBox(widget);
        checkbox_mute->setObjectName(QStringLiteral("checkbox_mute"));
        checkbox_mute->setMinimumSize(QSize(52, 24));
        QPalette palette1;
        QBrush brush2(QColor(153, 153, 153, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        checkbox_mute->setPalette(palette1);

        horizontalLayout->addWidget(checkbox_mute);

        btn_beauty_manage = new QPushButton(widget);
        btn_beauty_manage->setObjectName(QStringLiteral("btn_beauty_manage"));
        btn_beauty_manage->setMinimumSize(QSize(30, 30));
        btn_beauty_manage->setMaximumSize(QSize(30, 30));
        btn_beauty_manage->setStyleSheet(QStringLiteral("border-image:url(:/PushPlay/beautiful.png)"));

        horizontalLayout->addWidget(btn_beauty_manage);

        btn_min = new QPushButton(widget);
        btn_min->setObjectName(QStringLiteral("btn_min"));
        btn_min->setMinimumSize(QSize(30, 30));
        btn_min->setMaximumSize(QSize(30, 30));
        btn_min->setStyleSheet(QLatin1String("QPushButton{\n"
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

        horizontalLayout->addWidget(btn_min);

        btn_close = new QPushButton(widget);
        btn_close->setObjectName(QStringLiteral("btn_close"));
        btn_close->setMinimumSize(QSize(30, 30));
        btn_close->setMaximumSize(QSize(30, 30));
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


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(widget);

        widget_video_play = new QWidget(widget_main);
        widget_video_play->setObjectName(QStringLiteral("widget_video_play"));
        widget_video_play->setMinimumSize(QSize(360, 460));
        widget_video_play->setMaximumSize(QSize(16777215, 16777215));
        widget_video_play->setStyleSheet(QStringLiteral("  background-color: rgb(0,0,0);"));

        verticalLayout->addWidget(widget_video_play);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        widget_video_push = new QWidget(widget_main);
        widget_video_push->setObjectName(QStringLiteral("widget_video_push"));
        widget_video_push->setMinimumSize(QSize(120, 120));
        widget_video_push->setMaximumSize(QSize(120, 120));
        widget_video_push->setStyleSheet(QStringLiteral("  background-color: rgb(0,0,0);"));

        horizontalLayout_3->addWidget(widget_video_push);

        widget_video_player_add1 = new QWidget(widget_main);
        widget_video_player_add1->setObjectName(QStringLiteral("widget_video_player_add1"));
        widget_video_player_add1->setMinimumSize(QSize(120, 120));
        widget_video_player_add1->setMaximumSize(QSize(120, 120));
        widget_video_player_add1->setStyleSheet(QStringLiteral("  background-color: rgb(0,0,0);"));

        horizontalLayout_3->addWidget(widget_video_player_add1);

        widget_video_player_add2 = new QWidget(widget_main);
        widget_video_player_add2->setObjectName(QStringLiteral("widget_video_player_add2"));
        widget_video_player_add2->setMinimumSize(QSize(120, 120));
        widget_video_player_add2->setMaximumSize(QSize(120, 120));
        widget_video_player_add2->setStyleSheet(QStringLiteral("  background-color: rgb(0,0,0);"));

        horizontalLayout_3->addWidget(widget_video_player_add2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_5->addWidget(widget_main);


        retranslateUi(DialogPushPlay);

        QMetaObject::connectSlotsByName(DialogPushPlay);
    } // setupUi

    void retranslateUi(QDialog *DialogPushPlay)
    {
        DialogPushPlay->setWindowTitle(QApplication::translate("DialogPushPlay", "DialogPushPlay", nullptr));
        label_title->setText(QApplication::translate("DialogPushPlay", "\350\205\276\350\256\257\344\272\221\350\247\206\351\242\221\357\274\210C++\357\274\211", nullptr));
        label_time->setText(QApplication::translate("DialogPushPlay", "20:00", nullptr));
        checkbox_mute->setText(QApplication::translate("DialogPushPlay", "\351\235\231\351\237\263", nullptr));
        btn_beauty_manage->setText(QString());
        btn_min->setText(QApplication::translate("DialogPushPlay", "-", nullptr));
        btn_close->setText(QApplication::translate("DialogPushPlay", "\303\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogPushPlay: public Ui_DialogPushPlay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPUSHPLAY_H
