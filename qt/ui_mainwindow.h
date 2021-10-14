/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QComboBox *comboBox;
    QSpinBox *spinBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(300, 180, 171, 41));
        QFont font;
        font.setPointSize(20);
        comboBox->setFont(font);
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(270, 240, 241, 41));
        spinBox->setFont(font);
        spinBox->setMaximum(99999999);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 360, 201, 31));
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(450, 360, 181, 31));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 50, 381, 101));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(250, 300, 201, 31));
        label_4->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(450, 300, 191, 31));
        label_5->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "ar", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "ar-EG", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "bn", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "cpp", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "en", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "en-001", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "en-ZA", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("MainWindow", "es", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("MainWindow", "es-AR", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("MainWindow", "fr", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("MainWindow", "ja", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("MainWindow", "ru", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("MainWindow", "sr", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("MainWindow", "sr-Cyrl", nullptr));
        comboBox->setItemText(14, QCoreApplication::translate("MainWindow", "sr-Latn", nullptr));
        comboBox->setItemText(15, QCoreApplication::translate("MainWindow", "th", nullptr));
        comboBox->setItemText(16, QCoreApplication::translate("MainWindow", "tr", nullptr));
        comboBox->setItemText(17, QCoreApplication::translate("MainWindow", "und", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "Plural Category:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "one", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "IUC 45 ICU4X Demo", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Formatted:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
