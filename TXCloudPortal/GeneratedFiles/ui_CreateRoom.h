/********************************************************************************
** Form generated from reading UI file 'CreateRoom.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEROOM_H
#define UI_CREATEROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateRoom
{
public:
    QVBoxLayout *verticalLayout_5;
    QWidget *widgetMain;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_close;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *title;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_input;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *tb_court_name;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_operate;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *CreateRoom)
    {
        if (CreateRoom->objectName().isEmpty())
            CreateRoom->setObjectName(QStringLiteral("CreateRoom"));
        CreateRoom->resize(430, 275);
        verticalLayout_5 = new QVBoxLayout(CreateRoom);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(5, 5, 5, 5);
        widgetMain = new QWidget(CreateRoom);
        widgetMain->setObjectName(QStringLiteral("widgetMain"));
        widgetMain->setMinimumSize(QSize(420, 265));
        widgetMain->setMaximumSize(QSize(420, 265));
        widgetMain->setStyleSheet(QLatin1String("#widgetMain{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout_4 = new QVBoxLayout(widgetMain);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(26, 10, 26, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, -1, -1, 15);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 11, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_close = new QPushButton(widgetMain);
        btn_close->setObjectName(QStringLiteral("btn_close"));
        btn_close->setMinimumSize(QSize(11, 11));
        btn_close->setMaximumSize(QSize(11, 11));
        btn_close->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-image: url(:/Portal(Qt)/close-normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-image: url(:/Portal(Qt)/close-press.png);\n"
"}"));
        btn_close->setAutoDefault(false);

        horizontalLayout->addWidget(btn_close);


        verticalLayout_7->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
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

        horizontalLayout_3->addWidget(title);


        verticalLayout_7->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_7);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 10, 0, 10);
        widget_input = new QWidget(widgetMain);
        widget_input->setObjectName(QStringLiteral("widget_input"));
        widget_input->setMinimumSize(QSize(0, 80));
        widget_input->setMaximumSize(QSize(16777215, 80));
        widget_input->setStyleSheet(QLatin1String("#widget_input{\n"
"	border: 1px solid #dddddd;\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(widget_input);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(1, 1, 1, 1);
        label = new QLabel(widget_input);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("	color: #000000;\n"
"	font: 10pt \"Microsoft YaHei\";"));

        horizontalLayout_4->addWidget(label);

        tb_court_name = new QLineEdit(widget_input);
        tb_court_name->setObjectName(QStringLiteral("tb_court_name"));
        tb_court_name->setMinimumSize(QSize(0, 39));
        tb_court_name->setStyleSheet(QLatin1String("QLineEdit{\n"
"	font: 9pt \"Microsoft YaHei\";\n"
"    color: #888888;\n"
"	border: 1px solid #ffffff;\n"
"	border-bottom-color: #f2f2f2;\n"
"	padding-left: 10px;\n"
"}"));
        tb_court_name->setMaxLength(20);

        horizontalLayout_4->addWidget(tb_court_name);


        verticalLayout_3->addWidget(widget_input);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 24, -1, 24);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btn_operate = new QPushButton(widgetMain);
        btn_operate->setObjectName(QStringLiteral("btn_operate"));
        btn_operate->setMinimumSize(QSize(76, 30));
        btn_operate->setMaximumSize(QSize(76, 30));
        btn_operate->setStyleSheet(QLatin1String("QPushButton {\n"
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

        horizontalLayout_2->addWidget(btn_operate);

        btn_cancel = new QPushButton(widgetMain);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
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
        btn_cancel->setAutoDefault(false);

        horizontalLayout_2->addWidget(btn_cancel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_5->addWidget(widgetMain);

        QWidget::setTabOrder(tb_court_name, btn_operate);
        QWidget::setTabOrder(btn_operate, btn_cancel);
        QWidget::setTabOrder(btn_cancel, btn_close);

        retranslateUi(CreateRoom);

        btn_operate->setDefault(true);


        QMetaObject::connectSlotsByName(CreateRoom);
    } // setupUi

    void retranslateUi(QDialog *CreateRoom)
    {
        CreateRoom->setWindowTitle(QApplication::translate("CreateRoom", "CreateRoom", nullptr));
        btn_close->setText(QString());
        title->setText(QString());
        label->setText(QApplication::translate("CreateRoom", "\346\210\277\351\227\264\345\220\215\347\247\260", nullptr));
        btn_operate->setText(QApplication::translate("CreateRoom", "\345\210\233\345\273\272", nullptr));
        btn_cancel->setText(QApplication::translate("CreateRoom", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateRoom: public Ui_CreateRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEROOM_H
