/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpenFile;
    QAction *actionOpenFrame;
    QAction *actionPlay_Stop;
    QAction *actionOpen;
    QAction *actionSearch;
    QAction *actionExtract;
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSlider *horizontalSlider;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(939, 600);
        actionOpenFile = new QAction(MainWindow);
        actionOpenFile->setObjectName(QStringLiteral("actionOpenFile"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/add163.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenFile->setIcon(icon);
        actionOpenFrame = new QAction(MainWindow);
        actionOpenFrame->setObjectName(QStringLiteral("actionOpenFrame"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/openframe"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenFrame->setIcon(icon1);
        actionPlay_Stop = new QAction(MainWindow);
        actionPlay_Stop->setObjectName(QStringLiteral("actionPlay_Stop"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/play"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay_Stop->setIcon(icon2);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/video"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon3);
        actionSearch = new QAction(MainWindow);
        actionSearch->setObjectName(QStringLiteral("actionSearch"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/search"), QSize(), QIcon::Normal, QIcon::Off);
        actionSearch->setIcon(icon4);
        actionExtract = new QAction(MainWindow);
        actionExtract->setObjectName(QStringLiteral("actionExtract"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/images/pin43.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExtract->setIcon(icon5);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, -1, 941, 491));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 490, 941, 41));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSlider = new QSlider(verticalLayoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMinimumSize(QSize(939, 0));
        horizontalSlider->setCursor(QCursor(Qt::ArrowCursor));
        horizontalSlider->setAutoFillBackground(false);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        toolBar->addAction(actionOpenFile);
        toolBar->addAction(actionOpenFrame);
        toolBar->addSeparator();
        toolBar->addAction(actionPlay_Stop);
        toolBar->addAction(actionExtract);
        toolBar->addAction(actionSearch);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "vsearcher", 0));
        actionOpenFile->setText(QApplication::translate("MainWindow", "Open a Video", 0));
#ifndef QT_NO_TOOLTIP
        actionOpenFile->setToolTip(QApplication::translate("MainWindow", "Open a Video", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionOpenFile->setStatusTip(QApplication::translate("MainWindow", "Open a Video", 0));
#endif // QT_NO_STATUSTIP
        actionOpenFile->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionOpenFrame->setText(QApplication::translate("MainWindow", "openFrame", 0));
#ifndef QT_NO_TOOLTIP
        actionOpenFrame->setToolTip(QApplication::translate("MainWindow", "Open a Frame", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionOpenFrame->setStatusTip(QApplication::translate("MainWindow", "Open a Frame", 0));
#endif // QT_NO_STATUSTIP
        actionPlay_Stop->setText(QApplication::translate("MainWindow", "Play/Stop", 0));
#ifndef QT_NO_TOOLTIP
        actionPlay_Stop->setToolTip(QApplication::translate("MainWindow", "Play/Stop", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionPlay_Stop->setStatusTip(QApplication::translate("MainWindow", "Play/Stop", 0));
#endif // QT_NO_STATUSTIP
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionSearch->setText(QApplication::translate("MainWindow", "Search", 0));
#ifndef QT_NO_TOOLTIP
        actionSearch->setToolTip(QApplication::translate("MainWindow", "Search", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSearch->setStatusTip(QApplication::translate("MainWindow", "Search", 0));
#endif // QT_NO_STATUSTIP
        actionExtract->setText(QApplication::translate("MainWindow", "Extract", 0));
#ifndef QT_NO_TOOLTIP
        actionExtract->setToolTip(QApplication::translate("MainWindow", "Extract Video Features", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionExtract->setStatusTip(QApplication::translate("MainWindow", "Extract Video Features", 0));
#endif // QT_NO_STATUSTIP
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
#ifndef QT_NO_TOOLTIP
        toolBar->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        toolBar->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
