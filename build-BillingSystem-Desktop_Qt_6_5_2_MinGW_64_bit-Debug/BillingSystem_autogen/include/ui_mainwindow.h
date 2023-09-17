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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_price;
    QLineEdit *lineEdit_quantity;
    QPushButton *pushButton_add;
    QPushButton *pushButton_display;
    QTextEdit *textEdit_invoice;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit_name = new QLineEdit(centralwidget);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setGeometry(QRect(30, 10, 113, 24));
        lineEdit_price = new QLineEdit(centralwidget);
        lineEdit_price->setObjectName("lineEdit_price");
        lineEdit_price->setGeometry(QRect(160, 10, 113, 24));
        lineEdit_quantity = new QLineEdit(centralwidget);
        lineEdit_quantity->setObjectName("lineEdit_quantity");
        lineEdit_quantity->setGeometry(QRect(300, 10, 113, 24));
        pushButton_add = new QPushButton(centralwidget);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(440, 460, 141, 51));
        pushButton_display = new QPushButton(centralwidget);
        pushButton_display->setObjectName("pushButton_display");
        pushButton_display->setGeometry(QRect(620, 460, 131, 51));
        textEdit_invoice = new QTextEdit(centralwidget);
        textEdit_invoice->setObjectName("textEdit_invoice");
        textEdit_invoice->setGeometry(QRect(30, 50, 741, 381));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
        lineEdit_name->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        lineEdit_price->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        lineEdit_quantity->setText(QCoreApplication::translate("MainWindow", "Quantity", nullptr));
        pushButton_add->setText(QCoreApplication::translate("MainWindow", "Add Item", nullptr));
        pushButton_display->setText(QCoreApplication::translate("MainWindow", "Display Invoice", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
