/********************************************************************************
** Form generated from reading UI file 'InvitePanel.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVITEPANEL_H
#define UI_INVITEPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InvitePanel
{
public:
    QWidget *title_bar;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_close;
    QLabel *label_title;
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *tb_room_id;
    QLineEdit *tb_join_url;
    QPushButton *btn_copy_id;
    QPushButton *btn_copy_url;
    QPushButton *btn_cancel;
    QPushButton *btn_ok;

    void setupUi(QWidget *InvitePanel)
    {
        if (InvitePanel->objectName().isEmpty())
            InvitePanel->setObjectName(QStringLiteral("InvitePanel"));
        InvitePanel->resize(450, 280);
        InvitePanel->setMinimumSize(QSize(450, 280));
        InvitePanel->setMaximumSize(QSize(450, 280));
        InvitePanel->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        title_bar = new QWidget(InvitePanel);
        title_bar->setObjectName(QStringLiteral("title_bar"));
        title_bar->setGeometry(QRect(0, 0, 450, 30));
        title_bar->setMinimumSize(QSize(450, 30));
        title_bar->setMaximumSize(QSize(450, 30));
        title_bar->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(38, 38, 38);"));
        horizontalLayout = new QHBoxLayout(title_bar);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(425, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_close = new QPushButton(title_bar);
        btn_close->setObjectName(QStringLiteral("btn_close"));
        btn_close->setMinimumSize(QSize(22, 22));
        btn_close->setMaximumSize(QSize(22, 22));
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

        label_title = new QLabel(InvitePanel);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(20, 40, 71, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_title->setFont(font);
        label_title->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        widget = new QWidget(InvitePanel);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 70, 401, 51));
        widget->setStyleSheet(QLatin1String("QWidget {\n"
"background-color: rgb(229, 240, 255);\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-color: rgb(151, 199, 255);\n"
"}"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 371, 16));
        label->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-width: 0px;\n"
"border-color: rgb(151, 199, 255, 0);"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 30, 371, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-width: 0px;\n"
"border-color: rgb(151, 199, 255, 0);"));
        label_3 = new QLabel(InvitePanel);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 140, 54, 12));
        label_4 = new QLabel(InvitePanel);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 190, 54, 12));
        tb_room_id = new QLineEdit(InvitePanel);
        tb_room_id->setObjectName(QStringLiteral("tb_room_id"));
        tb_room_id->setEnabled(true);
        tb_room_id->setGeometry(QRect(100, 130, 261, 31));
        tb_room_id->setFocusPolicy(Qt::NoFocus);
        tb_join_url = new QLineEdit(InvitePanel);
        tb_join_url->setObjectName(QStringLiteral("tb_join_url"));
        tb_join_url->setEnabled(true);
        tb_join_url->setGeometry(QRect(100, 180, 261, 31));
        tb_join_url->setFocusPolicy(Qt::NoFocus);
        btn_copy_id = new QPushButton(InvitePanel);
        btn_copy_id->setObjectName(QStringLiteral("btn_copy_id"));
        btn_copy_id->setGeometry(QRect(370, 130, 51, 30));
        btn_copy_id->setMinimumSize(QSize(0, 0));
        btn_copy_id->setMaximumSize(QSize(16777215, 16777215));
        btn_copy_id->setStyleSheet(QLatin1String("QPushButton {\n"
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
        btn_copy_url = new QPushButton(InvitePanel);
        btn_copy_url->setObjectName(QStringLiteral("btn_copy_url"));
        btn_copy_url->setGeometry(QRect(370, 180, 51, 30));
        btn_copy_url->setMinimumSize(QSize(0, 0));
        btn_copy_url->setMaximumSize(QSize(16777215, 16777215));
        btn_copy_url->setStyleSheet(QLatin1String("QPushButton {\n"
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
        btn_cancel = new QPushButton(InvitePanel);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        btn_cancel->setGeometry(QRect(250, 230, 76, 30));
        btn_cancel->setMinimumSize(QSize(76, 30));
        btn_cancel->setMaximumSize(QSize(76, 30));
        btn_cancel->setStyleSheet(QLatin1String("QPushButton {\n"
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
        btn_ok = new QPushButton(InvitePanel);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));
        btn_ok->setGeometry(QRect(140, 230, 76, 30));
        btn_ok->setMinimumSize(QSize(76, 30));
        btn_ok->setMaximumSize(QSize(76, 30));
        btn_ok->setStyleSheet(QLatin1String("QPushButton {\n"
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

        retranslateUi(InvitePanel);

        QMetaObject::connectSlotsByName(InvitePanel);
    } // setupUi

    void retranslateUi(QWidget *InvitePanel)
    {
        InvitePanel->setWindowTitle(QApplication::translate("InvitePanel", "InvitePanel", nullptr));
        btn_close->setText(QApplication::translate("InvitePanel", "\303\227", nullptr));
        label_title->setText(QApplication::translate("InvitePanel", "\351\202\200\350\257\267\346\210\220\345\221\230", nullptr));
        label->setText(QApplication::translate("InvitePanel", "\351\200\232\350\277\207ID\350\277\233\345\205\245\350\257\276\345\240\202\347\232\204\347\224\250\346\210\267\345\217\257\344\273\245\345\217\202\344\270\216\350\257\276\345\240\202\344\272\222\345\212\250\357\274\214\351\200\232\350\277\207\351\223\276\346\216\245\346\211\223\345\274\200\347\232\204\347\224\250\346\210\267\345\217\252\350\203\275", nullptr));
        label_2->setText(QApplication::translate("InvitePanel", "\350\247\202\347\234\213\357\274\214\344\270\215\350\203\275\344\272\222\345\212\250\343\200\202", nullptr));
        label_3->setText(QApplication::translate("InvitePanel", "\350\257\276\347\250\213ID", nullptr));
        label_4->setText(QApplication::translate("InvitePanel", "\350\247\202\347\234\213\351\223\276\346\216\245", nullptr));
        btn_copy_id->setText(QApplication::translate("InvitePanel", "\345\244\215\345\210\266", nullptr));
        btn_copy_url->setText(QApplication::translate("InvitePanel", "\345\244\215\345\210\266", nullptr));
        btn_cancel->setText(QApplication::translate("InvitePanel", "\345\217\226\346\266\210", nullptr));
        btn_ok->setText(QApplication::translate("InvitePanel", "\345\274\200\345\247\213\345\275\225\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InvitePanel: public Ui_InvitePanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVITEPANEL_H
