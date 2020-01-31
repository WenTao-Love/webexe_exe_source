/********************************************************************************
** Form generated from reading UI file 'CSLiveSetting.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSLIVESETTING_H
#define UI_CSLIVESETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CSLiveSetting
{
public:
    QPushButton *btn_close;
    QLabel *title;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_input;
    QLineEdit *edit_play_url;
    QLabel *label_3;
    QLineEdit *edit_push_url;
    QLabel *label_2;
    QLineEdit *edit_title;
    QLabel *label;

    void setupUi(QDialog *CSLiveSetting)
    {
        if (CSLiveSetting->objectName().isEmpty())
            CSLiveSetting->setObjectName(QStringLiteral("CSLiveSetting"));
        CSLiveSetting->resize(433, 333);
        CSLiveSetting->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        btn_close = new QPushButton(CSLiveSetting);
        btn_close->setObjectName(QStringLiteral("btn_close"));
        btn_close->setGeometry(QRect(400, 10, 11, 11));
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
        title = new QLabel(CSLiveSetting);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(110, 30, 227, 36));
        title->setMinimumSize(QSize(227, 36));
        title->setMaximumSize(QSize(227, 36));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(20);
        title->setFont(font);
        title->setStyleSheet(QLatin1String("#title{\n"
"	image: url(:/Portal(Qt)/logo-cs-live.png)\n"
"}"));
        layoutWidget = new QWidget(CSLiveSetting);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 250, 264, 78));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 24, 0, 24);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btn_ok = new QPushButton(layoutWidget);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));
        btn_ok->setMinimumSize(QSize(76, 30));
        btn_ok->setMaximumSize(QSize(76, 30));
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

        horizontalLayout_2->addWidget(btn_ok);

        btn_cancel = new QPushButton(layoutWidget);
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

        widget_input = new QWidget(CSLiveSetting);
        widget_input->setObjectName(QStringLiteral("widget_input"));
        widget_input->setGeometry(QRect(20, 80, 391, 161));
        widget_input->setMinimumSize(QSize(0, 80));
        widget_input->setMaximumSize(QSize(16777215, 16777215));
        widget_input->setStyleSheet(QLatin1String("#widget_input{\n"
"	border: 1px solid #dddddd;\n"
"}"));
        edit_play_url = new QLineEdit(widget_input);
        edit_play_url->setObjectName(QStringLiteral("edit_play_url"));
        edit_play_url->setGeometry(QRect(70, 120, 306, 30));
        edit_play_url->setMinimumSize(QSize(0, 30));
        edit_play_url->setStyleSheet(QLatin1String("QLineEdit{\n"
"	font: 9pt \"Microsoft YaHei\";\n"
"    color: #888888;\n"
"	border: 1px solid #ffffff;\n"
"	border-bottom-color: #f2f2f2;\n"
"	padding-left: 10px;\n"
"}"));
        label_3 = new QLabel(widget_input);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 20, 52, 31));
        label_3->setStyleSheet(QLatin1String("	color: #000000;\n"
"	font: 10pt \"Microsoft YaHei\";"));
        edit_push_url = new QLineEdit(widget_input);
        edit_push_url->setObjectName(QStringLiteral("edit_push_url"));
        edit_push_url->setGeometry(QRect(70, 70, 306, 30));
        edit_push_url->setMinimumSize(QSize(0, 30));
        edit_push_url->setStyleSheet(QLatin1String("QLineEdit{\n"
"	font: 9pt \"Microsoft YaHei\";\n"
"    color: #888888;\n"
"	border: 1px solid #ffffff;\n"
"	border-bottom-color: #f2f2f2;\n"
"	padding-left: 10px;\n"
"}"));
        label_2 = new QLabel(widget_input);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 120, 52, 31));
        label_2->setStyleSheet(QLatin1String("	color: #000000;\n"
"	font: 10pt \"Microsoft YaHei\";"));
        edit_title = new QLineEdit(widget_input);
        edit_title->setObjectName(QStringLiteral("edit_title"));
        edit_title->setGeometry(QRect(70, 20, 306, 30));
        edit_title->setMinimumSize(QSize(0, 30));
        edit_title->setStyleSheet(QLatin1String("QLineEdit{\n"
"	font: 9pt \"Microsoft YaHei\";\n"
"    color: #888888;\n"
"	border: 1px solid #ffffff;\n"
"	border-bottom-color: #f2f2f2;\n"
"	padding-left: 10px;\n"
"}"));
        label = new QLabel(widget_input);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 70, 52, 31));
        label->setStyleSheet(QLatin1String("	color: #000000;\n"
"	font: 10pt \"Microsoft YaHei\";"));

        retranslateUi(CSLiveSetting);

        btn_ok->setDefault(true);


        QMetaObject::connectSlotsByName(CSLiveSetting);
    } // setupUi

    void retranslateUi(QDialog *CSLiveSetting)
    {
        CSLiveSetting->setWindowTitle(QApplication::translate("CSLiveSetting", "CSLiveSetting", nullptr));
        btn_close->setText(QString());
        title->setText(QString());
        btn_ok->setText(QApplication::translate("CSLiveSetting", "\347\241\256\345\256\232", nullptr));
        btn_cancel->setText(QApplication::translate("CSLiveSetting", "\345\217\226\346\266\210", nullptr));
        label_3->setText(QApplication::translate("CSLiveSetting", "\346\240\207\351\242\230", nullptr));
        label_2->setText(QApplication::translate("CSLiveSetting", "\346\222\255\346\224\276\345\234\260\345\235\200", nullptr));
        label->setText(QApplication::translate("CSLiveSetting", "\346\216\250\346\265\201\345\234\260\345\235\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CSLiveSetting: public Ui_CSLiveSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSLIVESETTING_H
