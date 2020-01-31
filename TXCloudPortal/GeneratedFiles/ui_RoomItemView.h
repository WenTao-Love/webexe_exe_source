/********************************************************************************
** Form generated from reading UI file 'RoomItemView.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMITEMVIEW_H
#define UI_ROOMITEMVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RoomItemView
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_room_name;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_room_id;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;

    void setupUi(QWidget *RoomItemView)
    {
        if (RoomItemView->objectName().isEmpty())
            RoomItemView->setObjectName(QStringLiteral("RoomItemView"));
        RoomItemView->resize(358, 84);
        RoomItemView->setMinimumSize(QSize(358, 84));
        RoomItemView->setMaximumSize(QSize(358, 84));
        RoomItemView->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(RoomItemView);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 3);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(RoomItemView);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(50, 0));
        label->setMaximumSize(QSize(50, 16777215));
        label->setStyleSheet(QLatin1String("color: #000000;\n"
"font: 12pt \"Microsoft YaHei\";"));

        horizontalLayout->addWidget(label);

        label_room_name = new QLabel(RoomItemView);
        label_room_name->setObjectName(QStringLiteral("label_room_name"));
        label_room_name->setStyleSheet(QLatin1String("color: #000000;\n"
"font: 12pt \"Microsoft YaHei\";"));

        horizontalLayout->addWidget(label_room_name);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(RoomItemView);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(50, 0));
        label_3->setStyleSheet(QLatin1String("color: #000000;\n"
"font: 12pt \"Microsoft YaHei\";"));

        horizontalLayout_2->addWidget(label_3);

        label_room_id = new QLabel(RoomItemView);
        label_room_id->setObjectName(QStringLiteral("label_room_id"));
        label_room_id->setStyleSheet(QLatin1String("color: #000000;\n"
"font: 12pt \"Microsoft YaHei\";"));

        horizontalLayout_2->addWidget(label_room_id);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        label_2 = new QLabel(RoomItemView);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 1));
        label_2->setMaximumSize(QSize(16777215, 1));
        label_2->setStyleSheet(QLatin1String("background: #dddddd;\n"
"margin-left: 8px;\n"
"margin-right: 8px;"));

        verticalLayout->addWidget(label_2);


        retranslateUi(RoomItemView);

        QMetaObject::connectSlotsByName(RoomItemView);
    } // setupUi

    void retranslateUi(QWidget *RoomItemView)
    {
        RoomItemView->setWindowTitle(QApplication::translate("RoomItemView", "RoomItemView", nullptr));
        label->setText(QApplication::translate("RoomItemView", "\346\210\277\351\227\264:", nullptr));
        label_room_name->setText(QApplication::translate("RoomItemView", "\350\257\276\347\250\213", nullptr));
        label_3->setText(QApplication::translate("RoomItemView", "ID:", nullptr));
        label_room_id->setText(QApplication::translate("RoomItemView", "ID", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RoomItemView: public Ui_RoomItemView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMITEMVIEW_H
