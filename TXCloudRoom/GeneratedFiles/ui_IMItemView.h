/********************************************************************************
** Form generated from reading UI file 'IMItemView.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMITEMVIEW_H
#define UI_IMITEMVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IMItemView
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label_msg;

    void setupUi(QWidget *IMItemView)
    {
        if (IMItemView->objectName().isEmpty())
            IMItemView->setObjectName(QStringLiteral("IMItemView"));
        IMItemView->resize(200, 41);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(IMItemView->sizePolicy().hasHeightForWidth());
        IMItemView->setSizePolicy(sizePolicy);
        IMItemView->setMinimumSize(QSize(200, 0));
        IMItemView->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(IMItemView);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(15, 5, 15, 5);
        label_msg = new QLabel(IMItemView);
        label_msg->setObjectName(QStringLiteral("label_msg"));
        label_msg->setMinimumSize(QSize(170, 0));
        label_msg->setMaximumSize(QSize(16777215, 16777215));
        label_msg->setStyleSheet(QLatin1String("font: 10pt \"Microsoft YaHei\";\n"
"color: #333333;"));
        label_msg->setWordWrap(true);
        label_msg->setMargin(0);
        label_msg->setOpenExternalLinks(false);

        horizontalLayout->addWidget(label_msg);


        retranslateUi(IMItemView);

        QMetaObject::connectSlotsByName(IMItemView);
    } // setupUi

    void retranslateUi(QWidget *IMItemView)
    {
        IMItemView->setWindowTitle(QApplication::translate("IMItemView", "IMItemView", nullptr));
        label_msg->setText(QApplication::translate("IMItemView", "\346\266\210\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IMItemView: public Ui_IMItemView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMITEMVIEW_H
