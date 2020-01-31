/********************************************************************************
** Form generated from reading UI file 'DialogShareVideo.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSHAREVIDEO_H
#define UI_DIALOGSHAREVIDEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogShareVideo
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widgetMain;
    QVBoxLayout *verticalLayout;
    QWidget *widget_title;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_max;
    QPushButton *btn_close;
    QWidget *widget_camera;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *hLayout_camera;

    void setupUi(QDialog *DialogShareVideo)
    {
        if (DialogShareVideo->objectName().isEmpty())
            DialogShareVideo->setObjectName(QStringLiteral("DialogShareVideo"));
        DialogShareVideo->resize(200, 651);
        DialogShareVideo->setStyleSheet(QLatin1String("border: 0px solid #C4C4C4;\n"
"	background-color: rgb(247,248,250);"));
        verticalLayout_2 = new QVBoxLayout(DialogShareVideo);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widgetMain = new QWidget(DialogShareVideo);
        widgetMain->setObjectName(QStringLiteral("widgetMain"));
        widgetMain->setMinimumSize(QSize(105, 148));
        widgetMain->setMaximumSize(QSize(16777215, 16777215));
        widgetMain->setStyleSheet(QLatin1String("border: 0px solid #C4C4C4;\n"
"	background-color: rgb(247,248,250);"));
        verticalLayout = new QVBoxLayout(widgetMain);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_title = new QWidget(widgetMain);
        widget_title->setObjectName(QStringLiteral("widget_title"));
        widget_title->setMinimumSize(QSize(0, 20));
        widget_title->setMaximumSize(QSize(16777215, 20));
        widget_title->setStyleSheet(QStringLiteral("background-color: #006eff;"));
        horizontalLayout_2 = new QHBoxLayout(widget_title);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 6, -1);
        label = new QLabel(widget_title);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 10pt \"Microsoft YaHei\";\n"
"color: #ffffff;"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_max = new QPushButton(widget_title);
        btn_max->setObjectName(QStringLiteral("btn_max"));
        btn_max->setMinimumSize(QSize(11, 11));
        btn_max->setMaximumSize(QSize(11, 11));
        btn_max->setStyleSheet(QLatin1String("QPushButton{\n"
"	border: none;\n"
"	image: url(:/RoomService/max-button.png);\n"
"	background-position: center;\n"
"}"));

        horizontalLayout->addWidget(btn_max);

        btn_close = new QPushButton(widget_title);
        btn_close->setObjectName(QStringLiteral("btn_close"));
        btn_close->setMinimumSize(QSize(11, 11));
        btn_close->setMaximumSize(QSize(11, 11));
        btn_close->setStyleSheet(QLatin1String("QPushButton{\n"
"	border: none;\n"
"	image: url(:/RoomService/close-button.png);\n"
"	background-position: center;\n"
"}"));

        horizontalLayout->addWidget(btn_close);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(widget_title);

        widget_camera = new QWidget(widgetMain);
        widget_camera->setObjectName(QStringLiteral("widget_camera"));
        widget_camera->setMinimumSize(QSize(0, 0));
        widget_camera->setMaximumSize(QSize(16777215, 16777215));
        widget_camera->setStyleSheet(QLatin1String("border: 0px solid #C4C4C4;\n"
"	background-color: rgb(247,248,250);"));
        verticalLayout_4 = new QVBoxLayout(widget_camera);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        hLayout_camera = new QVBoxLayout();
        hLayout_camera->setSpacing(0);
        hLayout_camera->setObjectName(QStringLiteral("hLayout_camera"));

        verticalLayout_4->addLayout(hLayout_camera);


        verticalLayout->addWidget(widget_camera);


        verticalLayout_2->addWidget(widgetMain);


        retranslateUi(DialogShareVideo);

        QMetaObject::connectSlotsByName(DialogShareVideo);
    } // setupUi

    void retranslateUi(QDialog *DialogShareVideo)
    {
        DialogShareVideo->setWindowTitle(QApplication::translate("DialogShareVideo", "Dialog", nullptr));
        label->setText(QApplication::translate("DialogShareVideo", "\350\247\206\351\242\221", nullptr));
        btn_max->setText(QString());
        btn_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogShareVideo: public Ui_DialogShareVideo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSHAREVIDEO_H
