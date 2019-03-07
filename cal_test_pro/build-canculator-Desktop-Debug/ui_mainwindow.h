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
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *calButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *infolineEdit_1;
    QComboBox *calcomboBox;
    QLineEdit *infolineEdit_2;
    QLabel *equallabel;
    QLineEdit *resultlineEdit_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(583, 185);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        calButton = new QPushButton(centralWidget);
        calButton->setObjectName(QString::fromUtf8("calButton"));
        calButton->setGeometry(QRect(440, 90, 99, 27));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 30, 510, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        infolineEdit_1 = new QLineEdit(widget);
        infolineEdit_1->setObjectName(QString::fromUtf8("infolineEdit_1"));

        horizontalLayout->addWidget(infolineEdit_1);

        calcomboBox = new QComboBox(widget);
        calcomboBox->setObjectName(QString::fromUtf8("calcomboBox"));

        horizontalLayout->addWidget(calcomboBox);

        infolineEdit_2 = new QLineEdit(widget);
        infolineEdit_2->setObjectName(QString::fromUtf8("infolineEdit_2"));

        horizontalLayout->addWidget(infolineEdit_2);

        equallabel = new QLabel(widget);
        equallabel->setObjectName(QString::fromUtf8("equallabel"));

        horizontalLayout->addWidget(equallabel);

        resultlineEdit_3 = new QLineEdit(widget);
        resultlineEdit_3->setObjectName(QString::fromUtf8("resultlineEdit_3"));

        horizontalLayout->addWidget(resultlineEdit_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 583, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        calButton->setText(QApplication::translate("MainWindow", "canculator", 0, QApplication::UnicodeUTF8));
        calcomboBox->clear();
        calcomboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "*", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "/", 0, QApplication::UnicodeUTF8)
        );
        equallabel->setText(QApplication::translate("MainWindow", "=", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
