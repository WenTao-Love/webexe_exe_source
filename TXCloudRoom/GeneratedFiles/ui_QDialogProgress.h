/********************************************************************************
** Form generated from reading UI file 'QDialogProgress.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDIALOGPROGRESS_H
#define UI_QDIALOGPROGRESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QProgressIndicator.h"

QT_BEGIN_NAMESPACE

class Ui_QDialogProgress
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetMain;
    QVBoxLayout *verticalLayout_3;
    QWidget *widgetTop;
    QHBoxLayout *horizontalLayout;
    QProgressIndicator *widgetProgress;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelProgress;
    QLabel *labelMsg;

    void setupUi(QDialog *QDialogProgress)
    {
        if (QDialogProgress->objectName().isEmpty())
            QDialogProgress->setObjectName(QStringLiteral("QDialogProgress"));
        QDialogProgress->setWindowModality(Qt::NonModal);
        QDialogProgress->resize(151, 196);
        QDialogProgress->setWindowOpacity(0.5);
        QDialogProgress->setStyleSheet(QStringLiteral(""));
        QDialogProgress->setModal(false);
        verticalLayout = new QVBoxLayout(QDialogProgress);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        widgetMain = new QWidget(QDialogProgress);
        widgetMain->setObjectName(QStringLiteral("widgetMain"));
        widgetMain->setStyleSheet(QLatin1String("#widgetMain{\n"
"	border-radius: 25px;\n"
"	background-color: rgba(0, 0, 0, 160);\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(widgetMain);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 30, -1, -1);
        widgetTop = new QWidget(widgetMain);
        widgetTop->setObjectName(QStringLiteral("widgetTop"));
        horizontalLayout = new QHBoxLayout(widgetTop);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(3, 0, 0, 0);
        widgetProgress = new QProgressIndicator(widgetTop);
        widgetProgress->setObjectName(QStringLiteral("widgetProgress"));
        widgetProgress->setMinimumSize(QSize(120, 120));
        widgetProgress->setMaximumSize(QSize(120, 120));
        verticalLayout_2 = new QVBoxLayout(widgetProgress);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelProgress = new QLabel(widgetProgress);
        labelProgress->setObjectName(QStringLiteral("labelProgress"));
        labelProgress->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 10pt \"Microsoft YaHei\";"));
        labelProgress->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelProgress);


        horizontalLayout->addWidget(widgetProgress);


        verticalLayout_3->addWidget(widgetTop);

        labelMsg = new QLabel(widgetMain);
        labelMsg->setObjectName(QStringLiteral("labelMsg"));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        labelMsg->setFont(font);
        labelMsg->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 12pt \"Microsoft YaHei\";"));
        labelMsg->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(labelMsg);


        verticalLayout->addWidget(widgetMain);


        retranslateUi(QDialogProgress);

        QMetaObject::connectSlotsByName(QDialogProgress);
    } // setupUi

    void retranslateUi(QDialog *QDialogProgress)
    {
        QDialogProgress->setWindowTitle(QApplication::translate("QDialogProgress", "QDialogProgress", nullptr));
        labelProgress->setText(QApplication::translate("QDialogProgress", "100%", nullptr));
        labelMsg->setText(QApplication::translate("QDialogProgress", "Loading", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QDialogProgress: public Ui_QDialogProgress {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDIALOGPROGRESS_H
