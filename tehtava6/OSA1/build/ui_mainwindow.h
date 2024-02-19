/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *BtnCount;
    QPushButton *BtnReset;
    QLineEdit *TextNumb;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuTeht_v_1;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(430, 295);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        BtnCount = new QPushButton(centralwidget);
        BtnCount->setObjectName("BtnCount");
        BtnCount->setGeometry(QRect(10, 0, 171, 131));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        BtnCount->setFont(font);
        BtnReset = new QPushButton(centralwidget);
        BtnReset->setObjectName("BtnReset");
        BtnReset->setGeometry(QRect(0, 130, 181, 121));
        BtnReset->setFont(font);
        TextNumb = new QLineEdit(centralwidget);
        TextNumb->setObjectName("TextNumb");
        TextNumb->setGeometry(QRect(240, 90, 131, 61));
        QFont font1;
        font1.setPointSize(22);
        TextNumb->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 430, 21));
        menuTeht_v_1 = new QMenu(menubar);
        menuTeht_v_1->setObjectName("menuTeht_v_1");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuTeht_v_1->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        BtnCount->setText(QCoreApplication::translate("MainWindow", "COUNT", nullptr));
        BtnReset->setText(QCoreApplication::translate("MainWindow", "RESET", nullptr));
        TextNumb->setText(QString());
        menuTeht_v_1->setTitle(QCoreApplication::translate("MainWindow", "Teht\303\244v\303\2441", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
