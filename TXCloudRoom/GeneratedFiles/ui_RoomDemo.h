/********************************************************************************
** Form generated from reading UI file 'RoomDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMDEMO_H
#define UI_ROOMDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RoomDemo
{
public:
    QWidget *centralWidget;
    QWidget *widget_main;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_top;
    QHBoxLayout *horizontalLayout;
    QLabel *label_logo;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *btn_min;
    QPushButton *btn_max;
    QPushButton *btn_close;
    QWidget *widget_bottom;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_member;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_main_share;
    QWidget *widget_message;
    QVBoxLayout *verticalLayout;

    void setupUi(QMainWindow *RoomDemo)
    {
        if (RoomDemo->objectName().isEmpty())
            RoomDemo->setObjectName(QStringLiteral("RoomDemo"));
        RoomDemo->resize(1080, 670);
        centralWidget = new QWidget(RoomDemo);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget_main = new QWidget(centralWidget);
        widget_main->setObjectName(QStringLiteral("widget_main"));
        widget_main->setGeometry(QRect(0, 0, 1080, 670));
        widget_main->setMinimumSize(QSize(1080, 670));
        widget_main->setMaximumSize(QSize(1080, 670));
        widget_main->setStyleSheet(QLatin1String("#widget_main{\n"
"  border: none;\n"
"  background-color: #ffffff;\n"
"}   "));
        verticalLayout_2 = new QVBoxLayout(widget_main);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_top = new QWidget(widget_main);
        widget_top->setObjectName(QStringLiteral("widget_top"));
        widget_top->setMinimumSize(QSize(0, 40));
        widget_top->setMaximumSize(QSize(16777215, 40));
        widget_top->setStyleSheet(QLatin1String("#widget_top{\n"
"	background-color: #006eff;\n"
"}"));
        horizontalLayout = new QHBoxLayout(widget_top);
        horizontalLayout->setSpacing(9);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, 5, 10, 0);
        label_logo = new QLabel(widget_top);
        label_logo->setObjectName(QStringLiteral("label_logo"));
        label_logo->setMinimumSize(QSize(30, 30));
        label_logo->setMaximumSize(QSize(30, 30));

        horizontalLayout->addWidget(label_logo);

        label_title = new QLabel(widget_top);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setStyleSheet(QLatin1String("font: 16pt \"Microsoft YaHei\";\n"
"color: #ffffff;"));

        horizontalLayout->addWidget(label_title);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        btn_min = new QPushButton(widget_top);
        btn_min->setObjectName(QStringLiteral("btn_min"));
        btn_min->setMinimumSize(QSize(16, 16));
        btn_min->setMaximumSize(QSize(24, 24));
        btn_min->setStyleSheet(QLatin1String("QPushButton{\n"
"	font: 10pt \"Microsoft YaHei\";\n"
"	border: none;\n"
"	image: url(:/RoomService/min-button.png);\n"
"	background-position: center;\n"
"}\n"
"QPushButton:hover{\n"
"	image: url(:/RoomService/min-hover.png);\n"
"}\n"
"QPushButton:pressed{\n"
"	image: url(:/RoomService/min-hover.png);\n"
"}"));

        horizontalLayout->addWidget(btn_min);

        btn_max = new QPushButton(widget_top);
        btn_max->setObjectName(QStringLiteral("btn_max"));
        btn_max->setMinimumSize(QSize(16, 16));
        btn_max->setMaximumSize(QSize(24, 24));
        btn_max->setStyleSheet(QLatin1String("QPushButton{\n"
"	font: 10pt \"Microsoft YaHei\";\n"
"	border: none;\n"
"	image: url(:/RoomService/max-button.png);\n"
"	background-position: center;\n"
"}\n"
"QPushButton:hover{\n"
"	image: url(:/RoomService/max-hover.png);\n"
"}\n"
"QPushButton:pressed{\n"
"	image: url(:/RoomService/max-hover.png);\n"
"}"));

        horizontalLayout->addWidget(btn_max);

        btn_close = new QPushButton(widget_top);
        btn_close->setObjectName(QStringLiteral("btn_close"));
        btn_close->setMinimumSize(QSize(16, 16));
        btn_close->setMaximumSize(QSize(24, 24));
        btn_close->setStyleSheet(QLatin1String("QPushButton{\n"
"	font: 10pt \"Microsoft YaHei\";\n"
"	border: none;\n"
"	image: url(:/RoomService/close-button.png);\n"
"	background-position: center;\n"
"}\n"
"QPushButton:hover{\n"
"	image: url(:/RoomService/close-hover.png);\n"
"}\n"
"QPushButton:pressed{\n"
"	image: url(:/RoomService/close-hover.png);\n"
"}"));

        horizontalLayout->addWidget(btn_close);

        label_logo->raise();
        label_title->raise();
        btn_close->raise();
        btn_min->raise();
        btn_max->raise();

        verticalLayout_2->addWidget(widget_top);

        widget_bottom = new QWidget(widget_main);
        widget_bottom->setObjectName(QStringLiteral("widget_bottom"));
        horizontalLayout_2 = new QHBoxLayout(widget_bottom);
        horizontalLayout_2->setSpacing(30);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_member = new QWidget(widget_bottom);
        widget_member->setObjectName(QStringLiteral("widget_member"));
        widget_member->setMinimumSize(QSize(200, 630));
        widget_member->setMaximumSize(QSize(200, 16777215));
        widget_member->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
""));
        verticalLayout_3 = new QVBoxLayout(widget_member);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);

        horizontalLayout_2->addWidget(widget_member);

        widget_main_share = new QWidget(widget_bottom);
        widget_main_share->setObjectName(QStringLiteral("widget_main_share"));
        widget_main_share->setStyleSheet(QLatin1String("#widget_main_share\n"
"{	background-color: rgb(247,248,250);\n"
"}"));

        horizontalLayout_2->addWidget(widget_main_share);

        widget_message = new QWidget(widget_bottom);
        widget_message->setObjectName(QStringLiteral("widget_message"));
        widget_message->setMinimumSize(QSize(200, 630));
        widget_message->setMaximumSize(QSize(200, 16777215));
        widget_message->setAutoFillBackground(false);
        widget_message->setStyleSheet(QStringLiteral("background-color: #ffffff;"));
        verticalLayout = new QVBoxLayout(widget_message);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        horizontalLayout_2->addWidget(widget_message);


        verticalLayout_2->addWidget(widget_bottom);

        RoomDemo->setCentralWidget(centralWidget);

        retranslateUi(RoomDemo);

        QMetaObject::connectSlotsByName(RoomDemo);
    } // setupUi

    void retranslateUi(QMainWindow *RoomDemo)
    {
        RoomDemo->setWindowTitle(QApplication::translate("RoomDemo", "RoomDemo", nullptr));
        label_logo->setText(QString());
        label_title->setText(QApplication::translate("RoomDemo", "title", nullptr));
        btn_min->setText(QString());
        btn_max->setText(QString());
        btn_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RoomDemo: public Ui_RoomDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMDEMO_H
