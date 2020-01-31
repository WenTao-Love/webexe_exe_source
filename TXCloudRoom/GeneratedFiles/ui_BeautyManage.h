/********************************************************************************
** Form generated from reading UI file 'BeautyManage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEAUTYMANAGE_H
#define UI_BEAUTYMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BeautyManage
{
public:
    QLabel *label_15;
    QGroupBox *groupBox;
    QRadioButton *radio_smooth;
    QRadioButton *radio_nature;
    QRadioButton *radio_blur;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSlider *slider_beauty;
    QSlider *slider_white;
    QLabel *label_16;
    QLabel *label_title;
    QLabel *label_6;
    QLabel *label_14;
    QLabel *label_17;
    QLabel *label_9;
    QLabel *label_8;
    QPushButton *btn_close;
    QLabel *label_7;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *BeautyManage)
    {
        if (BeautyManage->objectName().isEmpty())
            BeautyManage->setObjectName(QStringLiteral("BeautyManage"));
        BeautyManage->resize(369, 424);
        BeautyManage->setStyleSheet(QStringLiteral("background: #ffffff;"));
        label_15 = new QLabel(BeautyManage);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(110, 250, 21, 16));
        groupBox = new QGroupBox(BeautyManage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 80, 321, 111));
        groupBox->setStyleSheet(QLatin1String("	color: #000000;\n"
"	font: 10pt \"Microsoft YaHei\";"));
        radio_smooth = new QRadioButton(groupBox);
        radio_smooth->setObjectName(QStringLiteral("radio_smooth"));
        radio_smooth->setGeometry(QRect(20, 70, 50, 30));
        radio_smooth->setStyleSheet(QLatin1String("QRadioButton{  \n"
"    spacing: 5px;  \n"
"}  \n"
"  \n"
"QRadioButton::indicator{  \n"
"    width: 45px;  \n"
"    height: 30px;  \n"
"}  \n"
"  \n"
"QRadioButton::indicator:unchecked{  \n"
"    image:url(:/RoomService/switch_off.png);\n"
"}  \n"
"  \n"
"QRadioButton::indicator:checked{  \n"
"    image:url(:/RoomService/switch_on.png);\n"
"}  \n"
"  \n"
"QRadioButton::indicator:checked:disabled{  \n"
"    image:url(:/RoomService/switch_off.png);\n"
"}    "));
        radio_nature = new QRadioButton(groupBox);
        radio_nature->setObjectName(QStringLiteral("radio_nature"));
        radio_nature->setGeometry(QRect(130, 70, 50, 30));
        radio_nature->setStyleSheet(QLatin1String("QRadioButton{  \n"
"    spacing: 5px;  \n"
"}  \n"
"  \n"
"QRadioButton::indicator{  \n"
"    width: 45px;  \n"
"    height: 30px;  \n"
"}  \n"
"  \n"
"QRadioButton::indicator:unchecked{  \n"
"    image:url(:/RoomService/switch_off.png);\n"
"}  \n"
"  \n"
"QRadioButton::indicator:checked{  \n"
"    image:url(:/RoomService/switch_on.png);\n"
"}  \n"
"  \n"
"QRadioButton::indicator:checked:disabled{  \n"
"    image:url(:/RoomService/switch_off.png);\n"
"}    "));
        radio_blur = new QRadioButton(groupBox);
        radio_blur->setObjectName(QStringLiteral("radio_blur"));
        radio_blur->setGeometry(QRect(230, 70, 50, 30));
        radio_blur->setStyleSheet(QLatin1String("QRadioButton{  \n"
"    spacing: 5px;  \n"
"}  \n"
"  \n"
"QRadioButton::indicator{  \n"
"    width: 45px;  \n"
"    height: 30px;  \n"
"}  \n"
"  \n"
"QRadioButton::indicator:unchecked{  \n"
"    image:url(:/RoomService/switch_off.png);\n"
"}  \n"
"  \n"
"QRadioButton::indicator:checked{  \n"
"    image:url(:/RoomService/switch_on.png);\n"
"}  \n"
"  \n"
"QRadioButton::indicator:checked:disabled{  \n"
"    image:url(:/RoomService/switch_off.png);\n"
"}    "));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 51, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 30, 54, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 30, 54, 20));
        slider_beauty = new QSlider(BeautyManage);
        slider_beauty->setObjectName(QStringLiteral("slider_beauty"));
        slider_beauty->setGeometry(QRect(100, 220, 231, 20));
        slider_beauty->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"border: 1px solid #999999;\n"
"height: 5px;\n"
"border-radius: 9px;\n"
"margin: 0px;  \n"
"left : 9px;\n"
"right: 9px;         \n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"width: 18px;\n"
"background-image: url(:/RoomService/slider.png);\n"
"margin: -7px -7px -7px -7px;  \n"
"}\n"
"\n"
"QSlider::add-page:qlineargradient {\n"
"background: lightgrey;\n"
"border-top-right-radius: 9px;\n"
"border-bottom-right-radius: 9px;\n"
"border-top-left-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
"}\n"
"\n"
"QSlider::sub-page:qlineargradient {\n"
"background: #006eff;\n"
"border-top-right-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"border-top-left-radius: 9px;\n"
"border-bottom-left-radius: 9px;\n"
"}"));
        slider_beauty->setOrientation(Qt::Horizontal);
        slider_white = new QSlider(BeautyManage);
        slider_white->setObjectName(QStringLiteral("slider_white"));
        slider_white->setGeometry(QRect(100, 280, 231, 20));
        slider_white->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"border: 1px solid #999999;\n"
"height: 5px;\n"
"border-radius: 9px;\n"
"margin: 0px;  \n"
"left : 9px;\n"
"right: 9px;         \n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"width: 18px;\n"
"background-image: url(:/RoomService/slider.png);\n"
"margin: -7px -7px -7px -7px;  \n"
"}\n"
"\n"
"QSlider::add-page:qlineargradient {\n"
"background: lightgrey;\n"
"border-top-right-radius: 9px;\n"
"border-bottom-right-radius: 9px;\n"
"border-top-left-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
"}\n"
"\n"
"QSlider::sub-page:qlineargradient {\n"
"background: #006eff;\n"
"border-top-right-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"border-top-left-radius: 9px;\n"
"border-bottom-left-radius: 9px;\n"
"}"));
        slider_white->setOrientation(Qt::Horizontal);
        label_16 = new QLabel(BeautyManage);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 220, 71, 21));
        label_16->setStyleSheet(QLatin1String("	color: #000000;\n"
"	font: 10pt \"Microsoft YaHei\";"));
        label_title = new QLabel(BeautyManage);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(10, 0, 251, 71));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_title->sizePolicy().hasHeightForWidth());
        label_title->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_title->setFont(font);
        label_title->setStyleSheet(QLatin1String("margin: 20px 0px 3px 0px;\n"
"font: bold 12pt \"Microsoft YaHei\";\n"
"color: #333333;"));
        label_6 = new QLabel(BeautyManage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 280, 71, 21));
        label_6->setStyleSheet(QLatin1String("	color: #000000;\n"
"	font: 10pt \"Microsoft YaHei\";"));
        label_14 = new QLabel(BeautyManage);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(301, 250, 20, 20));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_17 = new QLabel(BeautyManage);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(210, 250, 21, 20));
        label_17->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(BeautyManage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(210, 310, 21, 20));
        label_9->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(BeautyManage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(300, 310, 21, 16));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btn_close = new QPushButton(BeautyManage);
        btn_close->setObjectName(QStringLiteral("btn_close"));
        btn_close->setGeometry(QRect(340, 20, 11, 11));
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
        label_7 = new QLabel(BeautyManage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(110, 310, 21, 16));
        layoutWidget_2 = new QWidget(BeautyManage);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 360, 331, 35));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btn_ok = new QPushButton(layoutWidget_2);
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

        btn_cancel = new QPushButton(layoutWidget_2);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        sizePolicy1.setHeightForWidth(btn_cancel->sizePolicy().hasHeightForWidth());
        btn_cancel->setSizePolicy(sizePolicy1);
        btn_cancel->setMinimumSize(QSize(88, 33));
        btn_cancel->setMaximumSize(QSize(88, 33));
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
        btn_cancel->setFlat(false);

        horizontalLayout_2->addWidget(btn_cancel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        retranslateUi(BeautyManage);

        QMetaObject::connectSlotsByName(BeautyManage);
    } // setupUi

    void retranslateUi(QDialog *BeautyManage)
    {
        BeautyManage->setWindowTitle(QApplication::translate("BeautyManage", "BeautyManage", nullptr));
        label_15->setText(QApplication::translate("BeautyManage", "0", nullptr));
        groupBox->setTitle(QApplication::translate("BeautyManage", "\347\276\216\351\242\234\347\261\273\345\236\213", nullptr));
        radio_smooth->setText(QString());
        radio_nature->setText(QString());
        radio_blur->setText(QString());
        label->setText(QApplication::translate("BeautyManage", "\345\205\211\346\273\221", nullptr));
        label_2->setText(QApplication::translate("BeautyManage", "\350\207\252\347\204\266", nullptr));
        label_3->setText(QApplication::translate("BeautyManage", "\346\234\246\350\203\247", nullptr));
        label_16->setText(QApplication::translate("BeautyManage", "\347\276\216\351\242\234\347\272\247\345\210\253", nullptr));
        label_title->setText(QApplication::translate("BeautyManage", "\347\276\216\351\242\234\350\256\276\347\275\256", nullptr));
        label_6->setText(QApplication::translate("BeautyManage", "\347\276\216\347\231\275\347\272\247\345\210\253", nullptr));
        label_14->setText(QApplication::translate("BeautyManage", "9", nullptr));
        label_17->setText(QApplication::translate("BeautyManage", "5", nullptr));
        label_9->setText(QApplication::translate("BeautyManage", "5", nullptr));
        label_8->setText(QApplication::translate("BeautyManage", "9", nullptr));
        btn_close->setText(QString());
        label_7->setText(QApplication::translate("BeautyManage", "0", nullptr));
        btn_ok->setText(QApplication::translate("BeautyManage", "\347\241\256\345\256\232", nullptr));
        btn_cancel->setText(QApplication::translate("BeautyManage", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BeautyManage: public Ui_BeautyManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEAUTYMANAGE_H
