/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *lblIniciar;
    QLabel *lblDetener;
    QLabel *lblSalir;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1200, 800);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../Downloads/bx-shape-circle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lblIniciar = new QLabel(centralwidget);
        lblIniciar->setObjectName("lblIniciar");
        lblIniciar->setGeometry(QRect(40, 330, 71, 16));
        lblIniciar->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"MS Shell Dlg 2\";"));
        lblDetener = new QLabel(centralwidget);
        lblDetener->setObjectName("lblDetener");
        lblDetener->setGeometry(QRect(140, 330, 101, 16));
        lblDetener->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"MS Shell Dlg 2\";"));
        lblSalir = new QLabel(centralwidget);
        lblSalir->setObjectName("lblSalir");
        lblSalir->setGeometry(QRect(290, 330, 55, 16));
        lblSalir->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"MS Shell Dlg 2\";"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ANIMACION DE FRACTALES", nullptr));
        lblIniciar->setText(QCoreApplication::translate("MainWindow", "I) INICIAR", nullptr));
        lblDetener->setText(QCoreApplication::translate("MainWindow", "D) DETENER", nullptr));
        lblSalir->setText(QCoreApplication::translate("MainWindow", "S) SALIR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
