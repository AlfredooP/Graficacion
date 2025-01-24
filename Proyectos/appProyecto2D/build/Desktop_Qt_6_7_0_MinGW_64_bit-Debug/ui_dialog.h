/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *btnColor;
    QLabel *label;
    QPushButton *btnReset;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(800, 800);
        QIcon icon;
        icon.addFile(QString::fromUtf8("dino50.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        Dialog->setStyleSheet(QString::fromUtf8("background-image: url(:/laberinto.png);"));
        btnColor = new QPushButton(Dialog);
        btnColor->setObjectName("btnColor");
        btnColor->setGeometry(QRect(20, 90, 83, 29));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Print")});
        font.setPointSize(11);
        font.setBold(true);
        font.setUnderline(false);
        font.setKerning(true);
        btnColor->setFont(font);
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 520, 161, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe Print")});
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(true);
        label->setFont(font1);
        btnReset = new QPushButton(Dialog);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(20, 150, 83, 29));
        btnReset->setFont(font);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "LABERINTO", nullptr));
        btnColor->setText(QCoreApplication::translate("Dialog", "Color", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "META --->", nullptr));
        btnReset->setText(QCoreApplication::translate("Dialog", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
