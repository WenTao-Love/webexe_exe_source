/********************************************************************************
** Form generated from reading UI file 'MemberItemView.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERITEMVIEW_H
#define UI_MEMBERITEMVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MemberItemView
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label_icon;
    QLabel *label_nick;
    QSpacerItem *horizontalSpacer;
    QLabel *label_status;

    void setupUi(QWidget *MemberItemView)
    {
        if (MemberItemView->objectName().isEmpty())
            MemberItemView->setObjectName(QStringLiteral("MemberItemView"));
        MemberItemView->resize(200, 48);
        MemberItemView->setMinimumSize(QSize(200, 0));
        MemberItemView->setMaximumSize(QSize(200, 16777215));
        MemberItemView->setBaseSize(QSize(192, 42));
        MemberItemView->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(MemberItemView);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, -1, 20, -1);
        label_icon = new QLabel(MemberItemView);
        label_icon->setObjectName(QStringLiteral("label_icon"));
        label_icon->setMinimumSize(QSize(22, 22));
        label_icon->setMaximumSize(QSize(22, 22));
        label_icon->setStyleSheet(QStringLiteral("image :url(:/RoomService/teacher.png)"));

        horizontalLayout->addWidget(label_icon);

        label_nick = new QLabel(MemberItemView);
        label_nick->setObjectName(QStringLiteral("label_nick"));
        label_nick->setStyleSheet(QLatin1String("font: 10pt \"Microsoft YaHei\";\n"
"color: #ffffff;\n"
"background: none;"));

        horizontalLayout->addWidget(label_nick);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_status = new QLabel(MemberItemView);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setMinimumSize(QSize(17, 17));
        label_status->setMaximumSize(QSize(17, 17));
        label_status->setStyleSheet(QLatin1String("font: 10pt \"Microsoft YaHei\";\n"
"color: #888888;\n"
"background: none;"));

        horizontalLayout->addWidget(label_status);


        retranslateUi(MemberItemView);

        QMetaObject::connectSlotsByName(MemberItemView);
    } // setupUi

    void retranslateUi(QWidget *MemberItemView)
    {
        MemberItemView->setWindowTitle(QApplication::translate("MemberItemView", "MemberItemView", nullptr));
        label_icon->setText(QString());
        label_nick->setText(QApplication::translate("MemberItemView", "Nickname", nullptr));
        label_status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MemberItemView: public Ui_MemberItemView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERITEMVIEW_H
