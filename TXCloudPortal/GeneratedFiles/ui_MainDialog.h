/********************************************************************************
** Form generated from reading UI file 'MainDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDIALOG_H
#define UI_MAINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainDialog
{
public:
    QWidget *widget_main;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *btn_close;
    QWidget *widget_2;
    QPushButton *btn_video;
    QPushButton *btn_multiroom;
    QLabel *label_msg;
    QLabel *label_msg_3;
    QPushButton *btn_screen;
    QPushButton *btn_liveroom;
    QLabel *label_msg_4;
    QPushButton *btn_custom;
    QLabel *label_msg_5;
    QLabel *label_msg_2;
    QPushButton *btn_cslive;

    void setupUi(QDialog *MainDialog)
    {
        if (MainDialog->objectName().isEmpty())
            MainDialog->setObjectName(QStringLiteral("MainDialog"));
        MainDialog->resize(1101, 661);
        widget_main = new QWidget(MainDialog);
        widget_main->setObjectName(QStringLiteral("widget_main"));
        widget_main->setGeometry(QRect(0, 0, 1101, 661));
        widget_main->setMinimumSize(QSize(500, 220));
        widget_main->setMaximumSize(QSize(16777215, 16777215));
        widget_main->setStyleSheet(QLatin1String(".QWidget#widget_main{\n"
" border-style: solid;\n"
" border-width: 0px;\n"
" background-color: rgb(36,35,36);\n"
"}\n"
""));
        widget = new QWidget(widget_main);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 1101, 30));
        widget->setMinimumSize(QSize(0, 30));
        widget->setMaximumSize(QSize(16777215, 30));
        widget->setStyleSheet(QLatin1String("QWidget#widget{\n"
" border-style: solid;\n"
" border-width: 0px;\n"
" background-color: rgb(27,25,27);\n"
"}"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, 5, 12, 5);
        label_14 = new QLabel(widget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));

        horizontalLayout->addWidget(label_14);

        horizontalSpacer = new QSpacerItem(385, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_4 = new QVBoxLayout(widget_3);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 10);
        btn_close = new QPushButton(widget_3);
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

        verticalLayout_4->addWidget(btn_close);


        horizontalLayout->addWidget(widget_3);

        widget_2 = new QWidget(widget_main);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 30, 1101, 631));
        widget_2->setMinimumSize(QSize(500, 0));
        btn_video = new QPushButton(widget_2);
        btn_video->setObjectName(QStringLiteral("btn_video"));
        btn_video->setGeometry(QRect(100, 60, 200, 171));
        btn_video->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-image: url(:/Portal(Qt)/pushplay.png)\n"
""));
        btn_multiroom = new QPushButton(widget_2);
        btn_multiroom->setObjectName(QStringLiteral("btn_multiroom"));
        btn_multiroom->setGeometry(QRect(640, 350, 200, 171));
        btn_multiroom->setStyleSheet(QLatin1String("  border-radius: 4px;\n"
"background-image: url(:/Portal(Qt)/court.png) "));
        label_msg = new QLabel(widget_2);
        label_msg->setObjectName(QStringLiteral("label_msg"));
        label_msg->setGeometry(QRect(100, 270, 200, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_msg->setFont(font);
        label_msg->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        label_msg->setAlignment(Qt::AlignCenter);
        label_msg_3 = new QLabel(widget_2);
        label_msg_3->setObjectName(QStringLiteral("label_msg_3"));
        label_msg_3->setGeometry(QRect(270, 560, 200, 20));
        label_msg_3->setFont(font);
        label_msg_3->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        label_msg_3->setAlignment(Qt::AlignCenter);
        btn_screen = new QPushButton(widget_2);
        btn_screen->setObjectName(QStringLiteral("btn_screen"));
        btn_screen->setGeometry(QRect(1075, 613, 0, 0));
        btn_liveroom = new QPushButton(widget_2);
        btn_liveroom->setObjectName(QStringLiteral("btn_liveroom"));
        btn_liveroom->setGeometry(QRect(800, 60, 200, 171));
        btn_liveroom->setStyleSheet(QLatin1String(" border-radius: 4px;\n"
"background-image: url(:/Portal(Qt)/edu.png) "));
        label_msg_4 = new QLabel(widget_2);
        label_msg_4->setObjectName(QStringLiteral("label_msg_4"));
        label_msg_4->setGeometry(QRect(800, 270, 200, 21));
        label_msg_4->setFont(font);
        label_msg_4->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        label_msg_4->setAlignment(Qt::AlignCenter);
        btn_custom = new QPushButton(widget_2);
        btn_custom->setObjectName(QStringLiteral("btn_custom"));
        btn_custom->setGeometry(QRect(270, 350, 200, 171));
        btn_custom->setStyleSheet(QLatin1String(" border-radius: 4px;\n"
"background-image: url(:/Portal(Qt)/cs.png) "));
        label_msg_5 = new QLabel(widget_2);
        label_msg_5->setObjectName(QStringLiteral("label_msg_5"));
        label_msg_5->setGeometry(QRect(640, 560, 200, 20));
        label_msg_5->setFont(font);
        label_msg_5->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        label_msg_5->setAlignment(Qt::AlignCenter);
        label_msg_2 = new QLabel(widget_2);
        label_msg_2->setObjectName(QStringLiteral("label_msg_2"));
        label_msg_2->setGeometry(QRect(450, 270, 200, 20));
        label_msg_2->setFont(font);
        label_msg_2->setStyleSheet(QLatin1String("color: rgb(153,153,153);\n"
"border-width: 0px;"));
        label_msg_2->setAlignment(Qt::AlignCenter);
        btn_cslive = new QPushButton(widget_2);
        btn_cslive->setObjectName(QStringLiteral("btn_cslive"));
        btn_cslive->setGeometry(QRect(450, 60, 200, 171));
        btn_cslive->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-image: url(:/Portal(Qt)/customservice.png)\n"
""));

        retranslateUi(MainDialog);

        QMetaObject::connectSlotsByName(MainDialog);
    } // setupUi

    void retranslateUi(QDialog *MainDialog)
    {
        MainDialog->setWindowTitle(QApplication::translate("MainDialog", "MainDialog", nullptr));
        label_14->setText(QApplication::translate("MainDialog", "\350\205\276\350\256\257\344\272\221\350\247\206\351\242\221\357\274\210C++\357\274\211", nullptr));
        btn_close->setText(QApplication::translate("MainDialog", "\303\227", nullptr));
        btn_video->setText(QString());
        btn_multiroom->setText(QString());
        label_msg->setText(QApplication::translate("MainDialog", "\346\216\250\346\265\201+\346\213\211\346\265\201", nullptr));
        label_msg_3->setText(QApplication::translate("MainDialog", "\345\217\214\344\272\272\351\237\263\350\247\206\351\242\221", nullptr));
        btn_screen->setText(QString());
        btn_liveroom->setText(QString());
        label_msg_4->setText(QApplication::translate("MainDialog", "\344\272\222\345\212\250\350\257\276\345\240\202", nullptr));
        btn_custom->setText(QString());
        label_msg_5->setText(QApplication::translate("MainDialog", "\345\244\232\344\272\272\351\237\263\350\247\206\351\242\221", nullptr));
        label_msg_2->setText(QApplication::translate("MainDialog", "\345\256\242\346\234\215\351\200\232\350\257\235", nullptr));
        btn_cslive->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainDialog: public Ui_MainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDIALOG_H
