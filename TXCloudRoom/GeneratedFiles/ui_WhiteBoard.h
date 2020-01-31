/********************************************************************************
** Form generated from reading UI file 'WhiteBoard.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WHITEBOARD_H
#define UI_WHITEBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WhiteBoard
{
public:
    QMdiArea *centralWidget;
    QWidget *toolsWindow;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkColorPick;
    QRadioButton *rdoPen;
    QRadioButton *rdoLine;
    QRadioButton *rdoShape;
    QRadioButton *rdoEraser;
    QRadioButton *rdoSelect;
    QPushButton *btnClear;
    QWidget *pagesWindow;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnLastPage;
    QPushButton *btnPageNumber;
    QPushButton *btnNextPage;
    QSpinBox *spinPage;
    QPushButton *btnSwitchPage;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnUndo;
    QPushButton *btnRedo;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnUpload;
    QPushButton *btnHistory;
    QPushButton *btnAddPage;
    QPushButton *btnDeletePage;
    QWidget *colorWindow;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rdoColorBlue;
    QRadioButton *rdoColorGreen;
    QRadioButton *rdoColorOrange;
    QRadioButton *rdoColorRed;
    QRadioButton *rdoColorBlack;
    QRadioButton *rdoColorGrey;
    QWidget *sizeWindow;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *rdoSizeLevel1;
    QRadioButton *rdoSizeLevel2;
    QRadioButton *rdoSizeLevel3;
    QWidget *shapeWindow;
    QVBoxLayout *verticalLayout_2;
    QWidget *widgetShape;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *rdoShapeEmptyRect;
    QRadioButton *rdoShapeFullRect;
    QRadioButton *rdoShapeEmptyEllipse;
    QRadioButton *rdoShapeFullEllipse;
    QLabel *labelBorderSize;
    QWidget *widgetBorderSize;
    QHBoxLayout *horizontalLayout_5;
    QSlider *sliderShapeThin;
    QLabel *labelThinValue;
    QWidget *dialogWindow;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widgetDialog;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QVBoxLayout *verticalLayout_4;
    QPushButton *btnDialogClose;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnDialogOK;
    QPushButton *btnDialogCancel;
    QSpacerItem *horizontalSpacer_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *WhiteBoard)
    {
        if (WhiteBoard->objectName().isEmpty())
            WhiteBoard->setObjectName(QStringLiteral("WhiteBoard"));
        WhiteBoard->resize(1036, 933);
        WhiteBoard->setStyleSheet(QLatin1String("QWidget{\n"
"	background-color: #00000000;\n"
"}"));
        centralWidget = new QMdiArea(WhiteBoard);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        centralWidget->setBackground(brush);
        toolsWindow = new QWidget();
        toolsWindow->setObjectName(QStringLiteral("toolsWindow"));
        toolsWindow->setMinimumSize(QSize(36, 252));
        toolsWindow->setMaximumSize(QSize(16777215, 16777215));
        toolsWindow->setStyleSheet(QLatin1String("#toolsWindow{\n"
"	background-color: #55000000;\n"
"}"));
        verticalLayout = new QVBoxLayout(toolsWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        chkColorPick = new QCheckBox(toolsWindow);
        chkColorPick->setObjectName(QStringLiteral("chkColorPick"));
        chkColorPick->setMinimumSize(QSize(36, 36));
        chkColorPick->setMaximumSize(QSize(36, 36));
        chkColorPick->setStyleSheet(QLatin1String("QCheckBox{\n"
"	margin: 6px 4px 6px 4px;\n"
"}\n"
"\n"
"QCheckBox:unchecked{\n"
"	border-image: url(:/tools/tools/pick-normal.png);\n"
"}\n"
"\n"
"QCheckBox:checked{\n"
"	border-radius: 2px;\n"
"	background-color:#33000000;\n"
"	border-image: url(:/tools/tools/pick-press.png);\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"	background-color: #0075ff;\n"
"	margin:5px;\n"
"    width: 18px;\n"
"    height: 14px;\n"
"	image: none;\n"
"}"));

        verticalLayout->addWidget(chkColorPick);

        rdoPen = new QRadioButton(toolsWindow);
        rdoPen->setObjectName(QStringLiteral("rdoPen"));
        rdoPen->setMinimumSize(QSize(36, 36));
        rdoPen->setMaximumSize(QSize(36, 36));
        rdoPen->setStyleSheet(QLatin1String("QRadioButton{\n"
"	margin: 6px 4px 6px 4px;\n"
"}\n"
"\n"
"QRadioButton:unchecked{\n"
"	border-image: url(:/tools/tools/pick-normal.png);\n"
"}\n"
"\n"
"QRadioButton:checked{\n"
"	border-radius: 2px;\n"
"	background-color:#33000000;\n"
"	border-image: url(:/tools/tools/pick-press.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    width: 28px;\n"
"    height: 24px;\n"
"	image:none;\n"
"	border-image: url(:/tools/tools/pen-normal.png);\n"
"}\n"
"QRadioButton::indicator:checked {\n"
"    width: 28px;\n"
"    height: 24px;\n"
"	image:none;\n"
"	border-image: url(:/tools/tools/pen-hover.png);\n"
"}\n"
"QRadioButton::indicator:hover {\n"
"	border-image: url(:/tools/tools/pen-hover.png);\n"
"}"));
        rdoPen->setChecked(true);

        verticalLayout->addWidget(rdoPen);

        rdoLine = new QRadioButton(toolsWindow);
        rdoLine->setObjectName(QStringLiteral("rdoLine"));
        rdoLine->setMinimumSize(QSize(36, 36));
        rdoLine->setMaximumSize(QSize(36, 36));
        rdoLine->setStyleSheet(QLatin1String("QRadioButton{\n"
"	margin: 6px 4px 6px 4px;\n"
"}\n"
"\n"
"QRadioButton:unchecked{\n"
"	border-image: url(:/tools/tools/pick-normal.png);\n"
"}\n"
"\n"
"QRadioButton:checked{\n"
"	border-radius: 2px;\n"
"	background-color:#33000000;\n"
"	border-image: url(:/tools/tools/pick-press.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked{\n"
"    width: 28px;\n"
"    height: 24px;\n"
"	image: none;\n"
"	border-image: url(:/tools/tools/line-normal.png);\n"
"}\n"
"QRadioButton::indicator:checked{\n"
"    width: 28px;\n"
"    height: 24px;\n"
"	image: none;\n"
"	border-image: url(:/tools/tools/line-hover.png);\n"
"}\n"
"QRadioButton::indicator:hover {\n"
"	border-image: url(:/tools/tools/line-hover.png);\n"
"}"));

        verticalLayout->addWidget(rdoLine);

        rdoShape = new QRadioButton(toolsWindow);
        rdoShape->setObjectName(QStringLiteral("rdoShape"));
        rdoShape->setMinimumSize(QSize(36, 36));
        rdoShape->setMaximumSize(QSize(36, 36));
        rdoShape->setStyleSheet(QLatin1String("QRadioButton{\n"
"	margin: 6px 4px 6px 4px;\n"
"}\n"
"\n"
"QRadioButton:unchecked{\n"
"	border-image: url(:/tools/tools/pick-normal.png);\n"
"}\n"
"\n"
"QRadioButton:checked{\n"
"	border-radius: 2px;\n"
"	background-color:#33000000;\n"
"	border-image: url(:/tools/tools/pick-press.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    width: 28px;\n"
"    height: 24px;\n"
"	image: none;\n"
"	border-image: url(:/tools/tools/shape-normal.png);\n"
"}\n"
"QRadioButton::indicator:checked{\n"
"    width: 28px;\n"
"    height: 24px;\n"
"	image: none;\n"
"	border-image: url(:/tools/tools/shape-hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:hover {\n"
"	border-image: url(:/tools/tools/shape-hover.png);\n"
"}"));

        verticalLayout->addWidget(rdoShape);

        rdoEraser = new QRadioButton(toolsWindow);
        rdoEraser->setObjectName(QStringLiteral("rdoEraser"));
        rdoEraser->setMinimumSize(QSize(36, 36));
        rdoEraser->setMaximumSize(QSize(36, 36));
        rdoEraser->setStyleSheet(QLatin1String("QRadioButton{\n"
"	margin: 6px 4px 6px 4px;\n"
"}\n"
"\n"
"QRadioButton:unchecked{\n"
"	border-image: url(:/tools/tools/pick-normal.png);\n"
"}\n"
"\n"
"QRadioButton:checked{\n"
"	border-radius: 2px;\n"
"	background-color:#33000000;\n"
"	border-image: url(:/tools/tools/pick-press.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    width: 28px;\n"
"    height: 24px;\n"
"	image: none;\n"
"	border-image: url(:/tools/tools/eraser-normal.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    width: 28px;\n"
"    height: 24px;\n"
"	image: none;\n"
"	border-image: url(:/tools/tools/eraser-hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:hover {\n"
"	border-image: url(:/tools/tools/eraser-hover.png);\n"
"}"));

        verticalLayout->addWidget(rdoEraser);

        rdoSelect = new QRadioButton(toolsWindow);
        rdoSelect->setObjectName(QStringLiteral("rdoSelect"));
        rdoSelect->setMinimumSize(QSize(36, 36));
        rdoSelect->setMaximumSize(QSize(36, 36));
        rdoSelect->setStyleSheet(QLatin1String("QRadioButton{\n"
"	margin: 6px 4px 6px 4px;\n"
"}\n"
"\n"
"QRadioButton:unchecked{\n"
"	border-image: url(:/tools/tools/pick-normal.png);\n"
"}\n"
"\n"
"QRadioButton:checked{\n"
"	border-radius: 2px;\n"
"	background-color:#33000000;\n"
"	border-image: url(:/tools/tools/pick-press.png);\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator:unchecked {\n"
"    width: 28px;\n"
"    height: 24px;\n"
"	image: none;\n"
"	border-image: url(:/tools/tools/select-normal.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    width: 28px;\n"
"    height: 24px;\n"
"	image: none;\n"
"	border-image: url(:/tools/tools/select-hover.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:hover {\n"
"	border-image: url(:/tools/tools/select-hover.png);\n"
"}"));

        verticalLayout->addWidget(rdoSelect);

        btnClear = new QPushButton(toolsWindow);
        btnClear->setObjectName(QStringLiteral("btnClear"));
        btnClear->setMinimumSize(QSize(36, 36));
        btnClear->setMaximumSize(QSize(36, 36));
        btnClear->setStyleSheet(QLatin1String("QPushButton {\n"
"	margin: 6px 4px 6px 4px;\n"
"	border-image: url(:/tools/tools/clear-normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-image: url(:/tools/tools/clear-press.png);\n"
"}"));

        verticalLayout->addWidget(btnClear);

        centralWidget->addSubWindow(toolsWindow);
        pagesWindow = new QWidget();
        pagesWindow->setObjectName(QStringLiteral("pagesWindow"));
        pagesWindow->setMinimumSize(QSize(0, 0));
        pagesWindow->setMaximumSize(QSize(16777215, 16777215));
        pagesWindow->setStyleSheet(QLatin1String("#pagesWindow{	\n"
"background-color: #55000000;\n"
"}"));
        horizontalLayout = new QHBoxLayout(pagesWindow);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(14, 10, 19, 10);
        btnLastPage = new QPushButton(pagesWindow);
        btnLastPage->setObjectName(QStringLiteral("btnLastPage"));
        btnLastPage->setMinimumSize(QSize(22, 22));
        btnLastPage->setMaximumSize(QSize(22, 22));
        btnLastPage->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-image: url(:/pages/pages/left-normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-image: url(:/pages/pages/left-press.png);\n"
"}"));

        horizontalLayout->addWidget(btnLastPage);

        btnPageNumber = new QPushButton(pagesWindow);
        btnPageNumber->setObjectName(QStringLiteral("btnPageNumber"));
        btnPageNumber->setStyleSheet(QLatin1String("QPushButton {\n"
"	border: none;\n"
"	font: bold 14pt \"Microsoft YaHei\";\n"
"	color: #dedede;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	color: #dedede;\n"
"}"));

        horizontalLayout->addWidget(btnPageNumber);

        btnNextPage = new QPushButton(pagesWindow);
        btnNextPage->setObjectName(QStringLiteral("btnNextPage"));
        btnNextPage->setMinimumSize(QSize(22, 22));
        btnNextPage->setMaximumSize(QSize(22, 22));
        btnNextPage->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-image: url(:/pages/pages/right-normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-image: url(:/pages/pages/right-press.png);\n"
"}"));

        horizontalLayout->addWidget(btnNextPage);

        spinPage = new QSpinBox(pagesWindow);
        spinPage->setObjectName(QStringLiteral("spinPage"));
        spinPage->setMinimumSize(QSize(50, 0));
        spinPage->setMaximumSize(QSize(50, 16777215));
        spinPage->setStyleSheet(QLatin1String("font: 10pt \"Microsoft YaHei\";\n"
"color: rgb(222,222,222);\n"
"background-color:rgb(170,170,170);"));

        horizontalLayout->addWidget(spinPage);

        btnSwitchPage = new QPushButton(pagesWindow);
        btnSwitchPage->setObjectName(QStringLiteral("btnSwitchPage"));
        btnSwitchPage->setMinimumSize(QSize(25, 0));
        btnSwitchPage->setMaximumSize(QSize(25, 16777215));
        btnSwitchPage->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 10pt \"Microsoft YaHei\";\n"
"color: rgb(222,222,222);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	font: 10pt \"Microsoft YaHei\";\n"
"color: rgb(20,115,251);\n"
"}"));

        horizontalLayout->addWidget(btnSwitchPage);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        btnUndo = new QPushButton(pagesWindow);
        btnUndo->setObjectName(QStringLiteral("btnUndo"));
        btnUndo->setMinimumSize(QSize(22, 22));
        btnUndo->setMaximumSize(QSize(22, 22));
        btnUndo->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-image: url(:/pages/pages/undo-normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-image: url(:/pages/pages/undo-press.png);\n"
"}"));

        horizontalLayout->addWidget(btnUndo);

        btnRedo = new QPushButton(pagesWindow);
        btnRedo->setObjectName(QStringLiteral("btnRedo"));
        btnRedo->setMinimumSize(QSize(22, 22));
        btnRedo->setMaximumSize(QSize(22, 22));
        btnRedo->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-image: url(:/pages/pages/redo-normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-image: url(:/pages/pages/redo-press.png);\n"
"}"));

        horizontalLayout->addWidget(btnRedo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnUpload = new QPushButton(pagesWindow);
        btnUpload->setObjectName(QStringLiteral("btnUpload"));
        btnUpload->setMinimumSize(QSize(22, 22));
        btnUpload->setMaximumSize(QSize(22, 22));
        btnUpload->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-image: url(:/tools/tools/upload-normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-image: url(:/tools/tools/upload-press.png);\n"
"}"));

        horizontalLayout->addWidget(btnUpload);

        btnHistory = new QPushButton(pagesWindow);
        btnHistory->setObjectName(QStringLiteral("btnHistory"));
        btnHistory->setMinimumSize(QSize(22, 22));
        btnHistory->setMaximumSize(QSize(22, 22));
        btnHistory->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-image: url(:/pages/pages/history-normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-image: url(:/pages/pages/history-press.png);\n"
"}"));

        horizontalLayout->addWidget(btnHistory);

        btnAddPage = new QPushButton(pagesWindow);
        btnAddPage->setObjectName(QStringLiteral("btnAddPage"));
        btnAddPage->setMinimumSize(QSize(22, 22));
        btnAddPage->setMaximumSize(QSize(22, 22));
        btnAddPage->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-image: url(:/pages/pages/add-normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-image: url(:/pages/pages/add-press.png);\n"
"}"));

        horizontalLayout->addWidget(btnAddPage);

        btnDeletePage = new QPushButton(pagesWindow);
        btnDeletePage->setObjectName(QStringLiteral("btnDeletePage"));
        btnDeletePage->setMinimumSize(QSize(22, 22));
        btnDeletePage->setMaximumSize(QSize(22, 22));
        btnDeletePage->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-image: url(:/pages/pages/delete-normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-image: url(:/pages/pages/delete-press.png);\n"
"}"));

        horizontalLayout->addWidget(btnDeletePage);

        centralWidget->addSubWindow(pagesWindow);
        colorWindow = new QWidget();
        colorWindow->setObjectName(QStringLiteral("colorWindow"));
        colorWindow->setMinimumSize(QSize(190, 36));
        colorWindow->setMaximumSize(QSize(190, 36));
        colorWindow->setStyleSheet(QLatin1String("#colorWindow{\n"
"	background-color: #55000000;\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(colorWindow);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 10, 10, 10);
        rdoColorBlue = new QRadioButton(colorWindow);
        rdoColorBlue->setObjectName(QStringLiteral("rdoColorBlue"));
        rdoColorBlue->setMinimumSize(QSize(20, 16));
        rdoColorBlue->setMaximumSize(QSize(20, 16));
        rdoColorBlue->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"	background-color: #0075ff;\n"
"    width: 20px;\n"
"    height: 16px;\n"
"	image: none;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"	width: 16px;\n"
"    height: 12px;\n"
"	border: 2px solid #ffffff;\n"
"}"));
        rdoColorBlue->setChecked(true);

        horizontalLayout_2->addWidget(rdoColorBlue);

        rdoColorGreen = new QRadioButton(colorWindow);
        rdoColorGreen->setObjectName(QStringLiteral("rdoColorGreen"));
        rdoColorGreen->setMinimumSize(QSize(20, 16));
        rdoColorGreen->setMaximumSize(QSize(20, 16));
        rdoColorGreen->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"	background-color: #00cc00;\n"
"    width: 20px;\n"
"    height: 16px;\n"
"	image: none;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"	width: 16px;\n"
"    height: 12px;\n"
"	border: 2px solid #ffffff;\n"
"}"));

        horizontalLayout_2->addWidget(rdoColorGreen);

        rdoColorOrange = new QRadioButton(colorWindow);
        rdoColorOrange->setObjectName(QStringLiteral("rdoColorOrange"));
        rdoColorOrange->setMinimumSize(QSize(20, 16));
        rdoColorOrange->setMaximumSize(QSize(20, 16));
        rdoColorOrange->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"	background-color: #ff9903;\n"
"    width: 20px;\n"
"    height: 16px;\n"
"	image: none;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"	width: 16px;\n"
"    height: 12px;\n"
"	border: 2px solid #ffffff;\n"
"}"));

        horizontalLayout_2->addWidget(rdoColorOrange);

        rdoColorRed = new QRadioButton(colorWindow);
        rdoColorRed->setObjectName(QStringLiteral("rdoColorRed"));
        rdoColorRed->setMinimumSize(QSize(20, 16));
        rdoColorRed->setMaximumSize(QSize(20, 16));
        rdoColorRed->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"	background-color: #ff0100;\n"
"    width: 20px;\n"
"    height: 16px;\n"
"	image: none;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"	width: 16px;\n"
"    height: 12px;\n"
"	border: 2px solid #ffffff;\n"
"}"));

        horizontalLayout_2->addWidget(rdoColorRed);

        rdoColorBlack = new QRadioButton(colorWindow);
        rdoColorBlack->setObjectName(QStringLiteral("rdoColorBlack"));
        rdoColorBlack->setMinimumSize(QSize(20, 16));
        rdoColorBlack->setMaximumSize(QSize(20, 16));
        rdoColorBlack->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"	background-color: #000000;\n"
"    width: 20px;\n"
"    height: 16px;\n"
"	image: none;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"	width: 16px;\n"
"    height: 12px;\n"
"	border: 2px solid #ffffff;\n"
"}"));

        horizontalLayout_2->addWidget(rdoColorBlack);

        rdoColorGrey = new QRadioButton(colorWindow);
        rdoColorGrey->setObjectName(QStringLiteral("rdoColorGrey"));
        rdoColorGrey->setMinimumSize(QSize(20, 16));
        rdoColorGrey->setMaximumSize(QSize(20, 16));
        rdoColorGrey->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"	background-color: #cccccc;\n"
"    width: 20px;\n"
"    height: 16px;\n"
"	image: none;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"	width: 16px;\n"
"    height: 12px;\n"
"	border: 2px solid #ffffff;\n"
"}"));

        horizontalLayout_2->addWidget(rdoColorGrey);

        centralWidget->addSubWindow(colorWindow);
        sizeWindow = new QWidget();
        sizeWindow->setObjectName(QStringLiteral("sizeWindow"));
        sizeWindow->setMinimumSize(QSize(100, 36));
        sizeWindow->setMaximumSize(QSize(100, 36));
        sizeWindow->setStyleSheet(QLatin1String("#sizeWindow{\n"
"	background-color: #55000000;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(sizeWindow);
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, 10, 10, 10);
        rdoSizeLevel1 = new QRadioButton(sizeWindow);
        rdoSizeLevel1->setObjectName(QStringLiteral("rdoSizeLevel1"));
        rdoSizeLevel1->setMinimumSize(QSize(20, 16));
        rdoSizeLevel1->setMaximumSize(QSize(20, 16));
        rdoSizeLevel1->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"	background-color: #bbbbbb;\n"
"	margin: 6px 8px 6px 8px;\n"
"    width: 4px;\n"
"    height: 4px;\n"
"	border-radius: 2px;\n"
"	image: none;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"	background-color: #ffffff;\n"
"}"));
        rdoSizeLevel1->setChecked(true);

        horizontalLayout_3->addWidget(rdoSizeLevel1);

        rdoSizeLevel2 = new QRadioButton(sizeWindow);
        rdoSizeLevel2->setObjectName(QStringLiteral("rdoSizeLevel2"));
        rdoSizeLevel2->setMinimumSize(QSize(20, 16));
        rdoSizeLevel2->setMaximumSize(QSize(20, 16));
        rdoSizeLevel2->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"	background-color: #bbbbbb;\n"
"	margin: 4px 6px 4px 6px;\n"
"    width: 8px;\n"
"    height: 8px;\n"
"	border-radius: 4px;\n"
"	image: none;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"	background-color: #ffffff;\n"
"}"));
        rdoSizeLevel2->setChecked(false);

        horizontalLayout_3->addWidget(rdoSizeLevel2);

        rdoSizeLevel3 = new QRadioButton(sizeWindow);
        rdoSizeLevel3->setObjectName(QStringLiteral("rdoSizeLevel3"));
        rdoSizeLevel3->setMinimumSize(QSize(20, 16));
        rdoSizeLevel3->setMaximumSize(QSize(20, 16));
        rdoSizeLevel3->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"	background-color: #bbbbbb;\n"
"	margin: 2px 4px 2px 4px;\n"
"    width: 12px;\n"
"    height: 12px;\n"
"	border-radius: 6px;\n"
"	image: none;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"	background-color: #ffffff;\n"
"}"));

        horizontalLayout_3->addWidget(rdoSizeLevel3);

        centralWidget->addSubWindow(sizeWindow);
        shapeWindow = new QWidget();
        shapeWindow->setObjectName(QStringLiteral("shapeWindow"));
        shapeWindow->setMinimumSize(QSize(156, 80));
        shapeWindow->setMaximumSize(QSize(156, 80));
        shapeWindow->setStyleSheet(QLatin1String("#shapeWindow{\n"
"	background-color: #55000000;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(shapeWindow);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widgetShape = new QWidget(shapeWindow);
        widgetShape->setObjectName(QStringLiteral("widgetShape"));
        horizontalLayout_4 = new QHBoxLayout(widgetShape);
        horizontalLayout_4->setSpacing(18);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(10, 10, 10, 7);
        rdoShapeEmptyRect = new QRadioButton(widgetShape);
        rdoShapeEmptyRect->setObjectName(QStringLiteral("rdoShapeEmptyRect"));
        rdoShapeEmptyRect->setMinimumSize(QSize(20, 16));
        rdoShapeEmptyRect->setMaximumSize(QSize(20, 16));
        rdoShapeEmptyRect->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"    width: 20px;\n"
"    height: 16px;\n"
"	image: url(:/tools/tools/rect-normal.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"	image: url(:/tools/tools/rect-press.png);\n"
"}"));
        rdoShapeEmptyRect->setChecked(true);

        horizontalLayout_4->addWidget(rdoShapeEmptyRect);

        rdoShapeFullRect = new QRadioButton(widgetShape);
        rdoShapeFullRect->setObjectName(QStringLiteral("rdoShapeFullRect"));
        rdoShapeFullRect->setMinimumSize(QSize(20, 16));
        rdoShapeFullRect->setMaximumSize(QSize(20, 16));
        rdoShapeFullRect->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"    width: 20px;\n"
"    height: 16px;\n"
"	image: url(:/tools/tools/rect-fill-normal.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"	image: url(:/tools/tools/rect-fill-press.png);\n"
"}"));

        horizontalLayout_4->addWidget(rdoShapeFullRect);

        rdoShapeEmptyEllipse = new QRadioButton(widgetShape);
        rdoShapeEmptyEllipse->setObjectName(QStringLiteral("rdoShapeEmptyEllipse"));
        rdoShapeEmptyEllipse->setMinimumSize(QSize(22, 16));
        rdoShapeEmptyEllipse->setMaximumSize(QSize(22, 16));
        rdoShapeEmptyEllipse->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"    width: 22px;\n"
"    height: 16px;\n"
"	image: url(:/tools/tools/ellipse-normal.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"	image: url(:/tools/tools/ellipse-press.png);\n"
"}"));

        horizontalLayout_4->addWidget(rdoShapeEmptyEllipse);

        rdoShapeFullEllipse = new QRadioButton(widgetShape);
        rdoShapeFullEllipse->setObjectName(QStringLiteral("rdoShapeFullEllipse"));
        rdoShapeFullEllipse->setMinimumSize(QSize(20, 16));
        rdoShapeFullEllipse->setMaximumSize(QSize(20, 16));
        rdoShapeFullEllipse->setStyleSheet(QLatin1String("QRadioButton::indicator {\n"
"    width: 20px;\n"
"    height: 16px;\n"
"	image: url(:/tools/tools/ellipse-fill-normal.png);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"	image: url(:/tools/tools/ellipse-fill-press.png);\n"
"}"));

        horizontalLayout_4->addWidget(rdoShapeFullEllipse);


        verticalLayout_2->addWidget(widgetShape);

        labelBorderSize = new QLabel(shapeWindow);
        labelBorderSize->setObjectName(QStringLiteral("labelBorderSize"));
        labelBorderSize->setStyleSheet(QLatin1String("font: 10pt \"Microsoft YaHei\";\n"
"color: #ffffff;\n"
"margin: 2px 0px 2px 10px;"));

        verticalLayout_2->addWidget(labelBorderSize);

        widgetBorderSize = new QWidget(shapeWindow);
        widgetBorderSize->setObjectName(QStringLiteral("widgetBorderSize"));
        horizontalLayout_5 = new QHBoxLayout(widgetBorderSize);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(10, 0, 8, 10);
        sliderShapeThin = new QSlider(widgetBorderSize);
        sliderShapeThin->setObjectName(QStringLiteral("sliderShapeThin"));
        sliderShapeThin->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    height: 2px;\n"
"    border-radius:1px;\n"
"	background: transparent;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"	background-color: #ff006eff;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background-color: #66ffffff;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	width: 17px;\n"
"    height: 16px;\n"
"	margin: -8px 0px -8px 0px;\n"
"	border-radius:8px;\n"
"	background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5,   \n"
"    stop:0.45 #ff006eff, stop:0.55 #ffffff);\n"
"}"));
        sliderShapeThin->setMinimum(1);
        sliderShapeThin->setMaximum(10);
        sliderShapeThin->setValue(1);
        sliderShapeThin->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(sliderShapeThin);

        labelThinValue = new QLabel(widgetBorderSize);
        labelThinValue->setObjectName(QStringLiteral("labelThinValue"));
        labelThinValue->setMinimumSize(QSize(20, 0));
        labelThinValue->setMaximumSize(QSize(20, 16777215));
        labelThinValue->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 10pt \"Microsoft YaHei\";"));
        labelThinValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(labelThinValue);


        verticalLayout_2->addWidget(widgetBorderSize);

        centralWidget->addSubWindow(shapeWindow);
        dialogWindow = new QWidget();
        dialogWindow->setObjectName(QStringLiteral("dialogWindow"));
        dialogWindow->setStyleSheet(QLatin1String("#dialogWindow{\n"
"	background-color: #7f000000;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(dialogWindow);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        widgetDialog = new QWidget(dialogWindow);
        widgetDialog->setObjectName(QStringLiteral("widgetDialog"));
        widgetDialog->setMinimumSize(QSize(420, 148));
        widgetDialog->setMaximumSize(QSize(420, 148));
        widgetDialog->setStyleSheet(QLatin1String("#widgetDialog{\n"
"	background-color: #ffffff;\n"
"}"));
        verticalLayout_5 = new QVBoxLayout(widgetDialog);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(24, 24, 24, 24);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label = new QLabel(widgetDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QLatin1String("margin: 20px 0px 3px 0px;\n"
"font: bold 16pt \"Microsoft YaHei\";\n"
"color: #333333;"));

        horizontalLayout_7->addWidget(label);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        btnDialogClose = new QPushButton(widgetDialog);
        btnDialogClose->setObjectName(QStringLiteral("btnDialogClose"));
        btnDialogClose->setMinimumSize(QSize(11, 11));
        btnDialogClose->setMaximumSize(QSize(11, 11));
        btnDialogClose->setStyleSheet(QLatin1String("QPushButton {\n"
"	border-image: url(:/dialog/dialog/close-normal.png);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-image: url(:/dialog/dialog/close-press.png);\n"
"}"));

        verticalLayout_4->addWidget(btnDialogClose);

        verticalSpacer_2 = new QSpacerItem(11, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        horizontalLayout_7->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(10);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        btnDialogOK = new QPushButton(widgetDialog);
        btnDialogOK->setObjectName(QStringLiteral("btnDialogOK"));
        btnDialogOK->setMinimumSize(QSize(88, 30));
        btnDialogOK->setMaximumSize(QSize(88, 30));
        btnDialogOK->setStyleSheet(QLatin1String("QPushButton {\n"
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

        horizontalLayout_8->addWidget(btnDialogOK);

        btnDialogCancel = new QPushButton(widgetDialog);
        btnDialogCancel->setObjectName(QStringLiteral("btnDialogCancel"));
        btnDialogCancel->setMinimumSize(QSize(88, 33));
        btnDialogCancel->setMaximumSize(QSize(88, 33));
        btnDialogCancel->setStyleSheet(QLatin1String("QPushButton {\n"
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

        horizontalLayout_8->addWidget(btnDialogCancel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);


        verticalLayout_5->addLayout(horizontalLayout_8);


        horizontalLayout_6->addWidget(widgetDialog);


        verticalLayout_3->addLayout(horizontalLayout_6);

        centralWidget->addSubWindow(dialogWindow);
        WhiteBoard->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(WhiteBoard);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        WhiteBoard->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(WhiteBoard);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WhiteBoard->setStatusBar(statusBar);
        menuBar = new QMenuBar(WhiteBoard);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1036, 26));
        WhiteBoard->setMenuBar(menuBar);

        retranslateUi(WhiteBoard);

        QMetaObject::connectSlotsByName(WhiteBoard);
    } // setupUi

    void retranslateUi(QMainWindow *WhiteBoard)
    {
        WhiteBoard->setWindowTitle(QApplication::translate("WhiteBoard", "WhiteBoard", nullptr));
        toolsWindow->setWindowTitle(QApplication::translate("WhiteBoard", "ToolsWindow", nullptr));
#ifndef QT_NO_TOOLTIP
        chkColorPick->setToolTip(QApplication::translate("WhiteBoard", "\350\211\262\346\235\277", nullptr));
#endif // QT_NO_TOOLTIP
        chkColorPick->setText(QString());
#ifndef QT_NO_TOOLTIP
        rdoPen->setToolTip(QApplication::translate("WhiteBoard", "\347\224\273\347\254\224", nullptr));
#endif // QT_NO_TOOLTIP
        rdoPen->setText(QString());
#ifndef QT_NO_TOOLTIP
        rdoLine->setToolTip(QApplication::translate("WhiteBoard", "\347\233\264\347\272\277", nullptr));
#endif // QT_NO_TOOLTIP
        rdoLine->setText(QString());
#ifndef QT_NO_TOOLTIP
        rdoShape->setToolTip(QApplication::translate("WhiteBoard", "\345\233\276\345\275\242", nullptr));
#endif // QT_NO_TOOLTIP
        rdoShape->setText(QString());
#ifndef QT_NO_TOOLTIP
        rdoEraser->setToolTip(QApplication::translate("WhiteBoard", "\346\251\241\347\232\256\346\223\246", nullptr));
#endif // QT_NO_TOOLTIP
        rdoEraser->setText(QString());
#ifndef QT_NO_TOOLTIP
        rdoSelect->setToolTip(QApplication::translate("WhiteBoard", "\351\200\211\346\213\251", nullptr));
#endif // QT_NO_TOOLTIP
        rdoSelect->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnClear->setToolTip(QApplication::translate("WhiteBoard", "\346\270\205\351\231\244", nullptr));
#endif // QT_NO_TOOLTIP
        btnClear->setText(QString());
        pagesWindow->setWindowTitle(QApplication::translate("WhiteBoard", "PagesWindow", nullptr));
#ifndef QT_NO_TOOLTIP
        btnLastPage->setToolTip(QApplication::translate("WhiteBoard", "\344\270\212\344\270\200\351\241\265", nullptr));
#endif // QT_NO_TOOLTIP
        btnLastPage->setText(QString());
        btnPageNumber->setText(QApplication::translate("WhiteBoard", "1 / 1", nullptr));
#ifndef QT_NO_TOOLTIP
        btnNextPage->setToolTip(QApplication::translate("WhiteBoard", "\344\270\213\344\270\200\351\241\265", nullptr));
#endif // QT_NO_TOOLTIP
        btnNextPage->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnSwitchPage->setToolTip(QApplication::translate("WhiteBoard", "\350\267\263\351\241\265", nullptr));
#endif // QT_NO_TOOLTIP
        btnSwitchPage->setText(QApplication::translate("WhiteBoard", "go", nullptr));
#ifndef QT_NO_TOOLTIP
        btnUndo->setToolTip(QApplication::translate("WhiteBoard", "\346\222\244\351\224\200", nullptr));
#endif // QT_NO_TOOLTIP
        btnUndo->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnRedo->setToolTip(QApplication::translate("WhiteBoard", "\351\207\215\345\201\232", nullptr));
#endif // QT_NO_TOOLTIP
        btnRedo->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnUpload->setToolTip(QApplication::translate("WhiteBoard", "\344\270\212\344\274\240PPT", nullptr));
#endif // QT_NO_TOOLTIP
        btnUpload->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnHistory->setToolTip(QApplication::translate("WhiteBoard", "PPT\345\216\206\345\217\262", nullptr));
#endif // QT_NO_TOOLTIP
        btnHistory->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnAddPage->setToolTip(QApplication::translate("WhiteBoard", "\346\226\260\345\242\236\347\231\275\346\235\277\351\241\265", nullptr));
#endif // QT_NO_TOOLTIP
        btnAddPage->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnDeletePage->setToolTip(QApplication::translate("WhiteBoard", "\346\270\205\347\251\272", nullptr));
#endif // QT_NO_TOOLTIP
        btnDeletePage->setText(QString());
        colorWindow->setWindowTitle(QApplication::translate("WhiteBoard", "ColorWindow", nullptr));
        rdoColorBlue->setText(QString());
        rdoColorGreen->setText(QString());
        rdoColorOrange->setText(QString());
        rdoColorRed->setText(QString());
        rdoColorBlack->setText(QString());
        rdoColorGrey->setText(QString());
        sizeWindow->setWindowTitle(QApplication::translate("WhiteBoard", "SizeWindow", nullptr));
        rdoSizeLevel1->setText(QString());
        rdoSizeLevel2->setText(QString());
        rdoSizeLevel3->setText(QApplication::translate("WhiteBoard", "RadioButton", nullptr));
        shapeWindow->setWindowTitle(QApplication::translate("WhiteBoard", "ShapeWindow", nullptr));
        rdoShapeEmptyRect->setText(QString());
        rdoShapeFullRect->setText(QString());
        rdoShapeEmptyEllipse->setText(QString());
        rdoShapeFullEllipse->setText(QString());
        labelBorderSize->setText(QApplication::translate("WhiteBoard", "\346\217\217\350\276\271\345\216\232\345\272\246", nullptr));
        labelThinValue->setText(QApplication::translate("WhiteBoard", "1", nullptr));
        dialogWindow->setWindowTitle(QApplication::translate("WhiteBoard", "DialogWindow", nullptr));
        label->setText(QApplication::translate("WhiteBoard", "\347\241\256\345\256\232\345\210\240\351\231\244\345\275\223\345\211\215\347\231\275\346\235\277\351\241\265\345\220\227\357\274\237", nullptr));
        btnDialogClose->setText(QString());
        btnDialogOK->setText(QApplication::translate("WhiteBoard", "\347\241\256\345\256\232\345\210\240\351\231\244", nullptr));
        btnDialogCancel->setText(QApplication::translate("WhiteBoard", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WhiteBoard: public Ui_WhiteBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WHITEBOARD_H
