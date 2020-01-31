/********************************************************************************
** Form generated from reading UI file 'LiveRoomList.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIVEROOMLIST_H
#define UI_LIVEROOMLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LiveRoomList
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widgetMain;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_close;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *title;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_room_list;
    QListWidget *lw_room_list;
    QWidget *widge_no_room;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_conf;
    QLabel *label_no_room;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_create;
    QPushButton *btn_join;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *LiveRoomList)
    {
        if (LiveRoomList->objectName().isEmpty())
            LiveRoomList->setObjectName(QStringLiteral("LiveRoomList"));
        LiveRoomList->resize(430, 448);
        LiveRoomList->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(LiveRoomList);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        widgetMain = new QWidget(LiveRoomList);
        widgetMain->setObjectName(QStringLiteral("widgetMain"));
        widgetMain->setMinimumSize(QSize(420, 438));
        widgetMain->setMaximumSize(QSize(420, 438));
        widgetMain->setStyleSheet(QLatin1String("#widgetMain{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout = new QVBoxLayout(widgetMain);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(26, 10, 26, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, -1, -1, 22);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btn_close = new QPushButton(widgetMain);
        btn_close->setObjectName(QStringLiteral("btn_close"));
        btn_close->setMinimumSize(QSize(11, 10));
        btn_close->setMaximumSize(QSize(11, 11));
        btn_close->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-image: url(:/Portal(Qt)/close-normal.png)\n"
"}\n"
"QPushButton:pressed {\n"
"	border-image: url(:/Portal(Qt)/close-press.png);\n"
"}"));

        horizontalLayout->addWidget(btn_close);


        verticalLayout_7->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, -1, -1, -1);
        title = new QLabel(widgetMain);
        title->setObjectName(QStringLiteral("title"));
        title->setMinimumSize(QSize(227, 36));
        title->setMaximumSize(QSize(227, 36));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(20);
        title->setFont(font);
        title->setStyleSheet(QLatin1String("#title{\n"
"	image: url(:/Portal(Qt)/logo-edu.png)\n"
"}"));

        horizontalLayout_4->addWidget(title);


        verticalLayout_7->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(verticalLayout_7);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 10, 0, 10);
        widget_room_list = new QWidget(widgetMain);
        widget_room_list->setObjectName(QStringLiteral("widget_room_list"));
        widget_room_list->setMinimumSize(QSize(368, 248));
        widget_room_list->setMaximumSize(QSize(368, 248));
        widget_room_list->setStyleSheet(QLatin1String("#widget_room_list{\n"
"	border: 1px solid #dddddd;\n"
"}"));
        lw_room_list = new QListWidget(widget_room_list);
        lw_room_list->setObjectName(QStringLiteral("lw_room_list"));
        lw_room_list->setGeometry(QRect(0, 0, 368, 248));
        lw_room_list->setMinimumSize(QSize(368, 248));
        lw_room_list->setMaximumSize(QSize(368, 248));
        lw_room_list->setStyleSheet(QLatin1String("#lw_room_list{\n"
"	border: none;\n"
"	margin: 14px 2px 14px 2px;\n"
"}"));
        lw_room_list->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        widge_no_room = new QWidget(widget_room_list);
        widge_no_room->setObjectName(QStringLiteral("widge_no_room"));
        widge_no_room->setGeometry(QRect(100, 80, 161, 81));
        verticalLayout_6 = new QVBoxLayout(widge_no_room);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_conf = new QLabel(widge_no_room);
        label_conf->setObjectName(QStringLiteral("label_conf"));
        label_conf->setMinimumSize(QSize(40, 40));
        label_conf->setMaximumSize(QSize(40, 40));
        label_conf->setStyleSheet(QStringLiteral("image:url(:/Portal(Qt)/conf.png)"));

        horizontalLayout_3->addWidget(label_conf);


        verticalLayout_6->addLayout(horizontalLayout_3);

        label_no_room = new QLabel(widge_no_room);
        label_no_room->setObjectName(QStringLiteral("label_no_room"));
        label_no_room->setStyleSheet(QStringLiteral("color: rgb(156, 156, 156);"));

        verticalLayout_6->addWidget(label_no_room);


        verticalLayout_3->addWidget(widget_room_list);


        verticalLayout->addLayout(verticalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 24, -1, 24);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btn_create = new QPushButton(widgetMain);
        btn_create->setObjectName(QStringLiteral("btn_create"));
        btn_create->setMinimumSize(QSize(76, 30));
        btn_create->setMaximumSize(QSize(76, 30));
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft YaHei"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        btn_create->setFont(font1);
        btn_create->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: none;\n"
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

        horizontalLayout_2->addWidget(btn_create);

        btn_join = new QPushButton(widgetMain);
        btn_join->setObjectName(QStringLiteral("btn_join"));
        btn_join->setMinimumSize(QSize(76, 30));
        btn_join->setMaximumSize(QSize(76, 30));
        btn_join->setFont(font1);
        btn_join->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: 1px solid #dddddd;\n"
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

        horizontalLayout_2->addWidget(btn_join);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(widgetMain);

        QWidget::setTabOrder(lw_room_list, btn_create);
        QWidget::setTabOrder(btn_create, btn_join);
        QWidget::setTabOrder(btn_join, btn_close);

        retranslateUi(LiveRoomList);

        QMetaObject::connectSlotsByName(LiveRoomList);
    } // setupUi

    void retranslateUi(QDialog *LiveRoomList)
    {
        LiveRoomList->setWindowTitle(QApplication::translate("LiveRoomList", "LiveRoomList", nullptr));
        btn_close->setText(QString());
        title->setText(QString());
        label_conf->setText(QString());
        label_no_room->setText(QApplication::translate("LiveRoomList", "\346\232\202\346\227\266\346\262\241\346\234\211\350\257\276\345\240\202,\350\257\267\345\210\233\345\273\272\346\210\277\351\227\264", nullptr));
        btn_create->setText(QApplication::translate("LiveRoomList", "\345\210\233\345\273\272\346\210\277\351\227\264", nullptr));
        btn_join->setText(QApplication::translate("LiveRoomList", "\345\212\240\345\205\245\346\210\277\351\227\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LiveRoomList: public Ui_LiveRoomList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIVEROOMLIST_H
