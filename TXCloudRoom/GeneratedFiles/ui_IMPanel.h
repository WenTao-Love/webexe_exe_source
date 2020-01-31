/********************************************************************************
** Form generated from reading UI file 'IMPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPANEL_H
#define UI_IMPANEL_H

#include <CustomTextEdit.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IMPanel
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_title;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBoxTime;
    QListWidget *lw_msg_list;
    QVBoxLayout *verticalLayout;
    CustomTextEdit *tb_msg;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_send;
    QWidget *widgetLine2;

    void setupUi(QWidget *IMPanel)
    {
        if (IMPanel->objectName().isEmpty())
            IMPanel->setObjectName(QStringLiteral("IMPanel"));
        IMPanel->resize(200, 630);
        IMPanel->setMinimumSize(QSize(0, 630));
        IMPanel->setMaximumSize(QSize(16777215, 16777215));
        IMPanel->setStyleSheet(QLatin1String("#IMPanel{\n"
"	background: #ffffff;\n"
"}"));
        gridLayout = new QGridLayout(IMPanel);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 20, -1, 20);
        label_title = new QLabel(IMPanel);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setMinimumSize(QSize(0, 20));
        label_title->setMaximumSize(QSize(180, 25));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_title->setFont(font);
        label_title->setStyleSheet(QLatin1String("font: 12pt \"Microsoft YaHei\";\n"
"color: #333333;"));

        verticalLayout_2->addWidget(label_title);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(20, 0, 20, -1);
        groupBoxTime = new QGroupBox(IMPanel);
        groupBoxTime->setObjectName(QStringLiteral("groupBoxTime"));
        groupBoxTime->setMaximumSize(QSize(16777215, 16777215));
        groupBoxTime->setStyleSheet(QLatin1String("QGroupBox{\n"
"	border: none;\n"
"	border-top: 1px solid #dddddd;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QGroupBox::title{\n"
"	subcontrol-origin: margin;\n"
"	subcontrol-position: top center;\n"
"	color: #dddddd;\n"
"}"));

        verticalLayout_4->addWidget(groupBoxTime);


        gridLayout->addLayout(verticalLayout_4, 1, 0, 1, 1);

        lw_msg_list = new QListWidget(IMPanel);
        lw_msg_list->setObjectName(QStringLiteral("lw_msg_list"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lw_msg_list->sizePolicy().hasHeightForWidth());
        lw_msg_list->setSizePolicy(sizePolicy);
        lw_msg_list->setMinimumSize(QSize(0, 390));
        lw_msg_list->setMaximumSize(QSize(16777215, 16777215));
        lw_msg_list->setStyleSheet(QLatin1String("#lw_msg_list{\n"
"	border: none;\n"
"}"));
        lw_msg_list->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout->addWidget(lw_msg_list, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, 10, 20, 10);
        tb_msg = new CustomTextEdit(IMPanel);
        tb_msg->setObjectName(QStringLiteral("tb_msg"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tb_msg->sizePolicy().hasHeightForWidth());
        tb_msg->setSizePolicy(sizePolicy1);
        tb_msg->setMinimumSize(QSize(0, 74));
        tb_msg->setMaximumSize(QSize(16777215, 100));
        tb_msg->setStyleSheet(QLatin1String("#tb_msg{\n"
"	border: none;\n"
"	font: 9pt \"Microsoft YaHei\";\n"
"	color: #333333;\n"
"}"));

        verticalLayout->addWidget(tb_msg);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 6);
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btn_send = new QPushButton(IMPanel);
        btn_send->setObjectName(QStringLiteral("btn_send"));
        btn_send->setMinimumSize(QSize(70, 25));
        btn_send->setMaximumSize(QSize(70, 25));
        btn_send->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: none;\n"
"	border-radius:12px;\n"
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
"}"));

        horizontalLayout_4->addWidget(btn_send);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout, 4, 0, 1, 1);

        widgetLine2 = new QWidget(IMPanel);
        widgetLine2->setObjectName(QStringLiteral("widgetLine2"));
        widgetLine2->setMinimumSize(QSize(0, 1));
        widgetLine2->setMaximumSize(QSize(16777215, 1));
        widgetLine2->setStyleSheet(QStringLiteral("background: #dddddd;"));

        gridLayout->addWidget(widgetLine2, 3, 0, 1, 1);

        widgetLine2->raise();
        lw_msg_list->raise();

        retranslateUi(IMPanel);

        QMetaObject::connectSlotsByName(IMPanel);
    } // setupUi

    void retranslateUi(QWidget *IMPanel)
    {
        IMPanel->setWindowTitle(QApplication::translate("IMPanel", "IMPanel", nullptr));
        label_title->setText(QApplication::translate("IMPanel", "\346\266\210\346\201\257", nullptr));
        groupBoxTime->setTitle(QApplication::translate("IMPanel", "11:20:20", nullptr));
        tb_msg->setPlaceholderText(QApplication::translate("IMPanel", "\345\234\250\346\255\244\350\276\223\345\205\245\346\266\210\346\201\257\357\274\214\346\214\211\345\233\236\350\275\246\351\224\256\345\217\221\351\200\201", nullptr));
        btn_send->setText(QApplication::translate("IMPanel", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IMPanel: public Ui_IMPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPANEL_H
