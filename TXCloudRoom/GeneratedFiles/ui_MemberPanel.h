/********************************************************************************
** Form generated from reading UI file 'MemberPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERPANEL_H
#define UI_MEMBERPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MemberPanel
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_title;
    QListWidget *lw_member;

    void setupUi(QWidget *MemberPanel)
    {
        if (MemberPanel->objectName().isEmpty())
            MemberPanel->setObjectName(QStringLiteral("MemberPanel"));
        MemberPanel->resize(200, 630);
        MemberPanel->setMinimumSize(QSize(0, 630));
        MemberPanel->setMaximumSize(QSize(16777215, 16777215));
        MemberPanel->setStyleSheet(QLatin1String("#MemberPanel{\n"
"	background: #ffffff;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(MemberPanel);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, 20, -1, 20);
        label_title = new QLabel(MemberPanel);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setMinimumSize(QSize(0, 21));
        label_title->setMaximumSize(QSize(16777215, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_title->setFont(font);
        label_title->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: #333333;"));

        verticalLayout->addWidget(label_title);


        verticalLayout_2->addLayout(verticalLayout);

        lw_member = new QListWidget(MemberPanel);
        lw_member->setObjectName(QStringLiteral("lw_member"));
        lw_member->setMinimumSize(QSize(0, 570));
        lw_member->setMaximumSize(QSize(16777215, 16777215));
        lw_member->setStyleSheet(QLatin1String("#lw_member{\n"
"	border: none;\n"
"	background: #ffffff;\n"
"}"));
        lw_member->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_2->addWidget(lw_member);


        retranslateUi(MemberPanel);

        QMetaObject::connectSlotsByName(MemberPanel);
    } // setupUi

    void retranslateUi(QWidget *MemberPanel)
    {
        MemberPanel->setWindowTitle(QApplication::translate("MemberPanel", "MemberPanel", nullptr));
        label_title->setText(QApplication::translate("MemberPanel", "\346\210\220\345\221\230\345\210\227\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemberPanel: public Ui_MemberPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERPANEL_H
