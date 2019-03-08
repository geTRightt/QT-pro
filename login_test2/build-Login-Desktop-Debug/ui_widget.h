/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QFrame *line;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *filepathlabel;
    QLineEdit *filepathlineEdit;
    QPushButton *browseButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *typelabel;
    QRadioButton *fileradioButton;
    QRadioButton *pictureradioButton;
    QRadioButton *folderradioButton;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *encryptButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *decryptButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cancelButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(480, 272);
        line = new QFrame(Widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 90, 451, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 50, 431, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        filepathlabel = new QLabel(layoutWidget);
        filepathlabel->setObjectName(QString::fromUtf8("filepathlabel"));

        horizontalLayout->addWidget(filepathlabel);

        filepathlineEdit = new QLineEdit(layoutWidget);
        filepathlineEdit->setObjectName(QString::fromUtf8("filepathlineEdit"));

        horizontalLayout->addWidget(filepathlineEdit);

        browseButton = new QPushButton(layoutWidget);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));

        horizontalLayout->addWidget(browseButton);

        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 110, 371, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        typelabel = new QLabel(layoutWidget1);
        typelabel->setObjectName(QString::fromUtf8("typelabel"));

        horizontalLayout_2->addWidget(typelabel);

        fileradioButton = new QRadioButton(layoutWidget1);
        fileradioButton->setObjectName(QString::fromUtf8("fileradioButton"));

        horizontalLayout_2->addWidget(fileradioButton);

        pictureradioButton = new QRadioButton(layoutWidget1);
        pictureradioButton->setObjectName(QString::fromUtf8("pictureradioButton"));

        horizontalLayout_2->addWidget(pictureradioButton);

        folderradioButton = new QRadioButton(layoutWidget1);
        folderradioButton->setObjectName(QString::fromUtf8("folderradioButton"));

        horizontalLayout_2->addWidget(folderradioButton);

        layoutWidget2 = new QWidget(Widget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(50, 200, 371, 29));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        encryptButton = new QPushButton(layoutWidget2);
        encryptButton->setObjectName(QString::fromUtf8("encryptButton"));

        horizontalLayout_3->addWidget(encryptButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        decryptButton = new QPushButton(layoutWidget2);
        decryptButton->setObjectName(QString::fromUtf8("decryptButton"));

        horizontalLayout_3->addWidget(decryptButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        cancelButton = new QPushButton(layoutWidget2);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_3->addWidget(cancelButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        filepathlabel->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:12pt; color:#2267ec;\">FilePath:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        browseButton->setText(QApplication::translate("Widget", "Browse", 0, QApplication::UnicodeUTF8));
        typelabel->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:12pt; color:#2267ec;\">Target:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        fileradioButton->setText(QApplication::translate("Widget", "File", 0, QApplication::UnicodeUTF8));
        pictureradioButton->setText(QApplication::translate("Widget", "Picture", 0, QApplication::UnicodeUTF8));
        folderradioButton->setText(QApplication::translate("Widget", "Folder", 0, QApplication::UnicodeUTF8));
        encryptButton->setText(QApplication::translate("Widget", "Encrypt", 0, QApplication::UnicodeUTF8));
        decryptButton->setText(QApplication::translate("Widget", "Decrypt", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("Widget", "cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
