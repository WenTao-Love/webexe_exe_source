/********************************************************************************
** Form generated from reading UI file 'PPTHistoryItemView.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PPTHISTORYITEMVIEW_H
#define UI_PPTHISTORYITEMVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PPTHistoryItemView
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label_name;
    QSpacerItem *horizontalSpacer;
    QLabel *label_datetime;
    QPushButton *btn_del;

    void setupUi(QWidget *PPTHistoryItemView)
    {
        if (PPTHistoryItemView->objectName().isEmpty())
            PPTHistoryItemView->setObjectName(QStringLiteral("PPTHistoryItemView"));
        PPTHistoryItemView->resize(300, 59);
        PPTHistoryItemView->setMinimumSize(QSize(300, 0));
        PPTHistoryItemView->setMaximumSize(QSize(300, 16777215));
        PPTHistoryItemView->setBaseSize(QSize(192, 42));
        PPTHistoryItemView->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(PPTHistoryItemView);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, -1, 5, -1);
        label_name = new QLabel(PPTHistoryItemView);
        label_name->setObjectName(QStringLiteral("label_name"));
        label_name->setStyleSheet(QLatin1String("font: 10pt \"Microsoft YaHei\";\n"
"color: #000000;\n"
"background: none;"));

        horizontalLayout->addWidget(label_name);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_datetime = new QLabel(PPTHistoryItemView);
        label_datetime->setObjectName(QStringLiteral("label_datetime"));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_datetime->setFont(font);
        label_datetime->setStyleSheet(QLatin1String("font: 9pt \"Microsoft YaHei\";\n"
"color: #888888;\n"
"background: none;"));

        horizontalLayout->addWidget(label_datetime);

        btn_del = new QPushButton(PPTHistoryItemView);
        btn_del->setObjectName(QStringLiteral("btn_del"));
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft YaHei"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        btn_del->setFont(font1);
        btn_del->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: none;\n"
"	border-radius: 15px;\n"
"	background:  none;\n"
"	color: #000000;\n"
"	font: 75 9pt \"Microsoft YaHei\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	border: none;\n"
"	color: #ff4000;\n"
"	background:  none;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border: none;\n"
"	color: #ff4000;\n"
"	background: none;\n"
"}"));

        horizontalLayout->addWidget(btn_del);


        retranslateUi(PPTHistoryItemView);

        QMetaObject::connectSlotsByName(PPTHistoryItemView);
    } // setupUi

    void retranslateUi(QWidget *PPTHistoryItemView)
    {
        PPTHistoryItemView->setWindowTitle(QApplication::translate("PPTHistoryItemView", "PPTHistoryItemView", nullptr));
        label_name->setText(QApplication::translate("PPTHistoryItemView", "Nickname", nullptr));
        label_datetime->setText(QApplication::translate("PPTHistoryItemView", "datetime", nullptr));
        btn_del->setText(QApplication::translate("PPTHistoryItemView", "   \344\270\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PPTHistoryItemView: public Ui_PPTHistoryItemView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PPTHISTORYITEMVIEW_H
