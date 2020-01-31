/********************************************************************************
** Form generated from reading UI file 'PPTHistory.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PPTHISTORY_H
#define UI_PPTHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PPTHistory
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_title;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_close;
    QSpacerItem *verticalSpacer_3;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *PPTHistory)
    {
        if (PPTHistory->objectName().isEmpty())
            PPTHistory->setObjectName(QStringLiteral("PPTHistory"));
        PPTHistory->resize(320, 543);
        PPTHistory->setStyleSheet(QStringLiteral("background: #ffffff;"));
        verticalLayout = new QVBoxLayout(PPTHistory);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(30, 20, 20, 20);
        label_title = new QLabel(PPTHistory);
        label_title->setObjectName(QStringLiteral("label_title"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_title->sizePolicy().hasHeightForWidth());
        label_title->setSizePolicy(sizePolicy);
        label_title->setMinimumSize(QSize(0, 20));
        label_title->setMaximumSize(QSize(16777215, 20));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei"));
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_title->setFont(font);
        label_title->setStyleSheet(QLatin1String("\n"
"font: bold 16pt \"Microsoft YaHei\";\n"
"color: #333333;"));
        label_title->setWordWrap(true);

        horizontalLayout->addWidget(label_title);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, -1, -1);
        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        btn_close = new QPushButton(PPTHistory);
        btn_close->setObjectName(QStringLiteral("btn_close"));
        btn_close->setMinimumSize(QSize(11, 11));
        btn_close->setMaximumSize(QSize(11, 11));
        btn_close->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-image: url(:/RoomService/close-normal.png);\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-image: url(:/RoomService/close-press.png);\n"
"}"));

        verticalLayout_2->addWidget(btn_close);

        verticalSpacer_3 = new QSpacerItem(10, 3, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        listWidget = new QListWidget(PPTHistory);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setMinimumSize(QSize(0, 410));
        listWidget->setStyleSheet(QLatin1String("#listWidget{\n"
"	border: none;\n"
"}"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 20, -1, 20);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btn_ok = new QPushButton(PPTHistory);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_ok->sizePolicy().hasHeightForWidth());
        btn_ok->setSizePolicy(sizePolicy1);
        btn_ok->setMinimumSize(QSize(88, 33));
        btn_ok->setMaximumSize(QSize(64, 33));
        btn_ok->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: none;\n"
"	border-radius: 15px;\n"
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
        btn_ok->setFlat(false);

        horizontalLayout_2->addWidget(btn_ok);

        btn_cancel = new QPushButton(PPTHistory);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        sizePolicy1.setHeightForWidth(btn_cancel->sizePolicy().hasHeightForWidth());
        btn_cancel->setSizePolicy(sizePolicy1);
        btn_cancel->setMinimumSize(QSize(88, 33));
        btn_cancel->setMaximumSize(QSize(88, 33));
        btn_cancel->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: 1px solid #dddddd;\n"
"	border-radius: 15px;\n"
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
        btn_cancel->setFlat(false);

        horizontalLayout_2->addWidget(btn_cancel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(PPTHistory);

        QMetaObject::connectSlotsByName(PPTHistory);
    } // setupUi

    void retranslateUi(QDialog *PPTHistory)
    {
        PPTHistory->setWindowTitle(QApplication::translate("PPTHistory", "BeautyManage", nullptr));
        label_title->setText(QApplication::translate("PPTHistory", "PPT\345\216\206\345\217\262\350\256\260\345\275\225", nullptr));
        btn_close->setText(QString());
        btn_ok->setText(QApplication::translate("PPTHistory", "\347\241\256\345\256\232", nullptr));
        btn_cancel->setText(QApplication::translate("PPTHistory", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PPTHistory: public Ui_PPTHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PPTHISTORY_H
