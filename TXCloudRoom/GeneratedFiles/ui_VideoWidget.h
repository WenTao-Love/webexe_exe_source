/********************************************************************************
** Form generated from reading UI file 'VideoWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOWIDGET_H
#define UI_VIDEOWIDGET_H

#include <GDIWidget.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoWidget
{
public:
    QVBoxLayout *verticalLayout;
    GDIWidget *widget_display;
    QLabel *label_mute;
    QLabel *label_bg;
    QWidget *widget_wnd;
    QWidget *widget_id;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_user;

    void setupUi(QWidget *VideoWidget)
    {
        if (VideoWidget->objectName().isEmpty())
            VideoWidget->setObjectName(QStringLiteral("VideoWidget"));
        VideoWidget->resize(105, 130);
        VideoWidget->setMinimumSize(QSize(105, 125));
        VideoWidget->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(VideoWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_display = new GDIWidget(VideoWidget);
        widget_display->setObjectName(QStringLiteral("widget_display"));
        widget_display->setMinimumSize(QSize(60, 60));
        widget_display->setMaximumSize(QSize(16777215, 16777215));
        widget_display->setFocusPolicy(Qt::StrongFocus);
        label_mute = new QLabel(widget_display);
        label_mute->setObjectName(QStringLiteral("label_mute"));
        label_mute->setGeometry(QRect(157, 0, 30, 30));
        label_mute->setMinimumSize(QSize(30, 30));
        label_mute->setMaximumSize(QSize(30, 30));
        label_mute->setStyleSheet(QLatin1String("background-image: url(:/RoomService/mute.png);\n"
"background-repeat: no-repeat;\n"
"background-position: center;"));
        label_bg = new QLabel(widget_display);
        label_bg->setObjectName(QStringLiteral("label_bg"));
        label_bg->setGeometry(QRect(0, 0, 105, 105));
        label_bg->setMinimumSize(QSize(60, 60));
        label_bg->setMaximumSize(QSize(16777215, 16777215));
        label_bg->setStyleSheet(QStringLiteral(""));
        label_bg->setPixmap(QPixmap(QString::fromUtf8(":/RoomService/cameraOffBG.png")));
        label_bg->setScaledContents(true);
        widget_wnd = new QWidget(widget_display);
        widget_wnd->setObjectName(QStringLiteral("widget_wnd"));
        widget_wnd->setGeometry(QRect(0, 0, 105, 105));
        widget_wnd->setMinimumSize(QSize(60, 60));
        widget_wnd->setMaximumSize(QSize(16777215, 16777215));
        widget_wnd->setStyleSheet(QStringLiteral(""));
        label_bg->raise();
        label_mute->raise();
        widget_wnd->raise();

        verticalLayout->addWidget(widget_display);

        widget_id = new QWidget(VideoWidget);
        widget_id->setObjectName(QStringLiteral("widget_id"));
        widget_id->setMinimumSize(QSize(0, 25));
        widget_id->setMaximumSize(QSize(16777215, 25));
        widget_id->setStyleSheet(QLatin1String("#widget_id{\n"
"	border-witdh: 0px solid #dddddd;\n"
"	background-color: rgb(247,248,250);\n"
"}"));
        horizontalLayout_19 = new QHBoxLayout(widget_id);
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        label_user = new QLabel(widget_id);
        label_user->setObjectName(QStringLiteral("label_user"));
        label_user->setMinimumSize(QSize(80, 22));
        label_user->setMaximumSize(QSize(16777215, 22));
        label_user->setStyleSheet(QString::fromUtf8("color: rgb(136,136,136);\n"
"border-width: 0px;\n"
"background-color: rgb(247,248,250);\n"
"border-color: rgb(221,221,221);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_19->addWidget(label_user);


        verticalLayout->addWidget(widget_id);


        retranslateUi(VideoWidget);

        QMetaObject::connectSlotsByName(VideoWidget);
    } // setupUi

    void retranslateUi(QWidget *VideoWidget)
    {
        VideoWidget->setWindowTitle(QApplication::translate("VideoWidget", "VideoWidget", nullptr));
        label_mute->setText(QString());
        label_bg->setText(QString());
        label_user->setText(QApplication::translate("VideoWidget", "\347\224\250\346\210\267\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VideoWidget: public Ui_VideoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOWIDGET_H
