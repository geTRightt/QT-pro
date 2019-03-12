/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_O;
    QAction *actionSave_S;
    QAction *actionSave_as_A;
    QAction *actionQuit_Q;
    QAction *actionEncryptor_E;
    QAction *actionDecryptor_D;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *imageLabel;
    QMenuBar *menuBar;
    QMenu *menuFile_F;
    QMenu *menuCryptor_P;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(480, 272);
        actionOpen_O = new QAction(MainWindow);
        actionOpen_O->setObjectName(QString::fromUtf8("actionOpen_O"));
        actionSave_S = new QAction(MainWindow);
        actionSave_S->setObjectName(QString::fromUtf8("actionSave_S"));
        actionSave_as_A = new QAction(MainWindow);
        actionSave_as_A->setObjectName(QString::fromUtf8("actionSave_as_A"));
        actionQuit_Q = new QAction(MainWindow);
        actionQuit_Q->setObjectName(QString::fromUtf8("actionQuit_Q"));
        actionEncryptor_E = new QAction(MainWindow);
        actionEncryptor_E->setObjectName(QString::fromUtf8("actionEncryptor_E"));
        actionDecryptor_D = new QAction(MainWindow);
        actionDecryptor_D->setObjectName(QString::fromUtf8("actionDecryptor_D"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        imageLabel = new QLabel(centralWidget);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));

        horizontalLayout->addWidget(imageLabel);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 480, 25));
        menuFile_F = new QMenu(menuBar);
        menuFile_F->setObjectName(QString::fromUtf8("menuFile_F"));
        menuCryptor_P = new QMenu(menuBar);
        menuCryptor_P->setObjectName(QString::fromUtf8("menuCryptor_P"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile_F->menuAction());
        menuBar->addAction(menuCryptor_P->menuAction());
        menuFile_F->addAction(actionOpen_O);
        menuFile_F->addAction(actionSave_S);
        menuFile_F->addAction(actionSave_as_A);
        menuFile_F->addSeparator();
        menuFile_F->addAction(actionQuit_Q);
        menuCryptor_P->addAction(actionEncryptor_E);
        menuCryptor_P->addAction(actionDecryptor_D);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionOpen_O->setText(QApplication::translate("MainWindow", "Open(&O)", 0, QApplication::UnicodeUTF8));
        actionSave_S->setText(QApplication::translate("MainWindow", "Save(&S)", 0, QApplication::UnicodeUTF8));
        actionSave_as_A->setText(QApplication::translate("MainWindow", "Save as(&A)", 0, QApplication::UnicodeUTF8));
        actionQuit_Q->setText(QApplication::translate("MainWindow", "Quit(&Q)", 0, QApplication::UnicodeUTF8));
        actionEncryptor_E->setText(QApplication::translate("MainWindow", "Encryptor(&E)", 0, QApplication::UnicodeUTF8));
        actionDecryptor_D->setText(QApplication::translate("MainWindow", "Decryptor(&D)", 0, QApplication::UnicodeUTF8));
        imageLabel->setText(QString());
        menuFile_F->setTitle(QApplication::translate("MainWindow", "File(&F)", 0, QApplication::UnicodeUTF8));
        menuCryptor_P->setTitle(QApplication::translate("MainWindow", "Cryptor(&P)", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
