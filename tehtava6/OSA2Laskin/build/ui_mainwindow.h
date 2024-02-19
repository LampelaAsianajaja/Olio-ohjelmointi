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
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *LineOne;
    QLineEdit *LineTwo;
    QLineEdit *LineResult;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *BTN1;
    QPushButton *BTN3;
    QPushButton *BTN2;
    QPushButton *BTN4;
    QPushButton *BTN5;
    QPushButton *BTN6;
    QPushButton *BTN8;
    QPushButton *BTNmul;
    QPushButton *BTN9;
    QPushButton *BTNadd;
    QPushButton *BTNsub;
    QPushButton *BTNdiv;
    QPushButton *BTNclear;
    QPushButton *BTN7;
    QPushButton *BTN0;
    QPushButton *BTNenter;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(389, 274);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        LineOne = new QLineEdit(centralwidget);
        LineOne->setObjectName("LineOne");
        LineOne->setGeometry(QRect(20, 70, 113, 24));
        LineTwo = new QLineEdit(centralwidget);
        LineTwo->setObjectName("LineTwo");
        LineTwo->setGeometry(QRect(140, 70, 113, 24));
        LineResult = new QLineEdit(centralwidget);
        LineResult->setObjectName("LineResult");
        LineResult->setGeometry(QRect(260, 70, 113, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 81, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 10, 71, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(280, 10, 71, 41));
        BTN1 = new QPushButton(centralwidget);
        BTN1->setObjectName("BTN1");
        BTN1->setGeometry(QRect(20, 110, 80, 24));
        BTN3 = new QPushButton(centralwidget);
        BTN3->setObjectName("BTN3");
        BTN3->setGeometry(QRect(200, 110, 80, 24));
        BTN2 = new QPushButton(centralwidget);
        BTN2->setObjectName("BTN2");
        BTN2->setGeometry(QRect(110, 110, 80, 24));
        BTN4 = new QPushButton(centralwidget);
        BTN4->setObjectName("BTN4");
        BTN4->setGeometry(QRect(20, 140, 80, 24));
        BTN5 = new QPushButton(centralwidget);
        BTN5->setObjectName("BTN5");
        BTN5->setGeometry(QRect(110, 140, 80, 24));
        BTN6 = new QPushButton(centralwidget);
        BTN6->setObjectName("BTN6");
        BTN6->setGeometry(QRect(200, 140, 80, 24));
        BTN8 = new QPushButton(centralwidget);
        BTN8->setObjectName("BTN8");
        BTN8->setGeometry(QRect(110, 170, 80, 24));
        BTNmul = new QPushButton(centralwidget);
        BTNmul->setObjectName("BTNmul");
        BTNmul->setGeometry(QRect(290, 170, 80, 24));
        BTN9 = new QPushButton(centralwidget);
        BTN9->setObjectName("BTN9");
        BTN9->setGeometry(QRect(200, 170, 80, 24));
        BTNadd = new QPushButton(centralwidget);
        BTNadd->setObjectName("BTNadd");
        BTNadd->setGeometry(QRect(290, 110, 80, 24));
        BTNsub = new QPushButton(centralwidget);
        BTNsub->setObjectName("BTNsub");
        BTNsub->setGeometry(QRect(290, 140, 80, 24));
        QFont font;
        font.setPointSize(16);
        BTNsub->setFont(font);
        BTNdiv = new QPushButton(centralwidget);
        BTNdiv->setObjectName("BTNdiv");
        BTNdiv->setGeometry(QRect(290, 200, 80, 24));
        BTNclear = new QPushButton(centralwidget);
        BTNclear->setObjectName("BTNclear");
        BTNclear->setGeometry(QRect(110, 200, 80, 24));
        BTN7 = new QPushButton(centralwidget);
        BTN7->setObjectName("BTN7");
        BTN7->setGeometry(QRect(20, 170, 80, 24));
        BTN0 = new QPushButton(centralwidget);
        BTN0->setObjectName("BTN0");
        BTN0->setGeometry(QRect(20, 200, 80, 24));
        BTNenter = new QPushButton(centralwidget);
        BTNenter->setObjectName("BTNenter");
        BTNenter->setGeometry(QRect(200, 200, 80, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 389, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        BTN1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        BTN3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        BTN2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        BTN4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        BTN5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        BTN6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        BTN8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        BTNmul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        BTN9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        BTNadd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        BTNsub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        BTNdiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        BTNclear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        BTN7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        BTN0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        BTNenter->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
