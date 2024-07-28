/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
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
    QComboBox *comboBox_client_list;
    QComboBox *comboBox_Client_type;
    QPushButton *pushButton_Send_Command;
    QLineEdit *lineEdit_Send_command;
    QTextEdit *textEdit_Client_message;
    QTextEdit *textEdit_Voltage;
    QTextEdit *textEdit_Current;
    QTextEdit *textEdit_Power;
    QTextEdit *textEdit_Consumption;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QPushButton *pushButton_Start;
    QPushButton *pushButton_Reset;
    QPushButton *pushButton_Reset_2;
    QMenuBar *menubar;
    QMenu *menuPower_Meter;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 270);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        comboBox_client_list = new QComboBox(centralwidget);
        comboBox_client_list->setObjectName("comboBox_client_list");
        comboBox_client_list->setGeometry(QRect(360, 180, 91, 31));
        comboBox_Client_type = new QComboBox(centralwidget);
        comboBox_Client_type->addItem(QString());
        comboBox_Client_type->addItem(QString());
        comboBox_Client_type->setObjectName("comboBox_Client_type");
        comboBox_Client_type->setGeometry(QRect(460, 180, 91, 31));
        pushButton_Send_Command = new QPushButton(centralwidget);
        pushButton_Send_Command->setObjectName("pushButton_Send_Command");
        pushButton_Send_Command->setGeometry(QRect(670, 180, 101, 31));
        lineEdit_Send_command = new QLineEdit(centralwidget);
        lineEdit_Send_command->setObjectName("lineEdit_Send_command");
        lineEdit_Send_command->setGeometry(QRect(560, 180, 101, 31));
        textEdit_Client_message = new QTextEdit(centralwidget);
        textEdit_Client_message->setObjectName("textEdit_Client_message");
        textEdit_Client_message->setGeometry(QRect(360, 20, 421, 151));
        textEdit_Client_message->setReadOnly(false);
        textEdit_Voltage = new QTextEdit(centralwidget);
        textEdit_Voltage->setObjectName("textEdit_Voltage");
        textEdit_Voltage->setGeometry(QRect(230, 10, 111, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        textEdit_Voltage->setFont(font);
        textEdit_Voltage->setMouseTracking(false);
        textEdit_Voltage->setAcceptDrops(false);
        textEdit_Voltage->setReadOnly(true);
        textEdit_Voltage->setOverwriteMode(true);
        textEdit_Voltage->setTextInteractionFlags(Qt::NoTextInteraction);
        textEdit_Current = new QTextEdit(centralwidget);
        textEdit_Current->setObjectName("textEdit_Current");
        textEdit_Current->setGeometry(QRect(230, 50, 111, 41));
        textEdit_Current->setFont(font);
        textEdit_Current->setMouseTracking(false);
        textEdit_Current->setAcceptDrops(false);
        textEdit_Current->setReadOnly(true);
        textEdit_Current->setOverwriteMode(true);
        textEdit_Current->setTextInteractionFlags(Qt::NoTextInteraction);
        textEdit_Power = new QTextEdit(centralwidget);
        textEdit_Power->setObjectName("textEdit_Power");
        textEdit_Power->setGeometry(QRect(230, 90, 111, 41));
        textEdit_Power->setFont(font);
        textEdit_Power->setMouseTracking(false);
        textEdit_Power->setAcceptDrops(false);
        textEdit_Power->setReadOnly(true);
        textEdit_Power->setOverwriteMode(true);
        textEdit_Power->setTextInteractionFlags(Qt::NoTextInteraction);
        textEdit_Consumption = new QTextEdit(centralwidget);
        textEdit_Consumption->setObjectName("textEdit_Consumption");
        textEdit_Consumption->setGeometry(QRect(230, 130, 111, 41));
        textEdit_Consumption->setFont(font);
        textEdit_Consumption->setMouseTracking(false);
        textEdit_Consumption->setAcceptDrops(false);
        textEdit_Consumption->setReadOnly(true);
        textEdit_Consumption->setOverwriteMode(true);
        textEdit_Consumption->setTextInteractionFlags(Qt::NoTextInteraction);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 10, 151, 41));
        textEdit->setReadOnly(true);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(10, 50, 151, 41));
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(10, 90, 151, 41));
        textEdit_4 = new QTextEdit(centralwidget);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(10, 130, 211, 41));
        pushButton_Start = new QPushButton(centralwidget);
        pushButton_Start->setObjectName("pushButton_Start");
        pushButton_Start->setGeometry(QRect(10, 180, 101, 31));
        pushButton_Reset = new QPushButton(centralwidget);
        pushButton_Reset->setObjectName("pushButton_Reset");
        pushButton_Reset->setGeometry(QRect(120, 180, 101, 31));
        pushButton_Reset_2 = new QPushButton(centralwidget);
        pushButton_Reset_2->setObjectName("pushButton_Reset_2");
        pushButton_Reset_2->setGeometry(QRect(230, 180, 101, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuPower_Meter = new QMenu(menubar);
        menuPower_Meter->setObjectName("menuPower_Meter");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuPower_Meter->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        comboBox_Client_type->setItemText(0, QCoreApplication::translate("MainWindow", "ALL", nullptr));
        comboBox_Client_type->setItemText(1, QCoreApplication::translate("MainWindow", "Individual", nullptr));

        pushButton_Send_Command->setText(QCoreApplication::translate("MainWindow", "Send Command", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">Voltage </span><span style=\" font-size:12pt; font-weight:700;\">(V)</span></p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">Current </span><span style=\" font-size:12pt; font-weight:700;\">(A)</span></p></body></html>", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">Power </span><span style=\" font-size:12pt; font-weight:700;\">(W)</span></p></body></html>", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">Consumption </span><span style=\" font-size:12pt; font-weight:700;\">(mW/h)</span></p></body></html>", nullptr));
        pushButton_Start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton_Reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        pushButton_Reset_2->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        menuPower_Meter->setTitle(QCoreApplication::translate("MainWindow", "Power Meter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
