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
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(1000, 1000);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(0, 16, 121, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        Dialog->setPalette(palette);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 40, 931, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        layoutWidget->setFont(font);
        layoutWidget->setStyleSheet(QString::fromUtf8("font: 10pt \"Gill Sans MT\";\n"
"border-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 16, 121);"));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Gill Sans MT\";\n"
"border-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 16, 121);"));

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("font: 10pt \"Gill Sans MT\";\n"
"border-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 16, 121);"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 10pt \"Gill Sans MT\";\n"
"border-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 16, 121);"));

        gridLayout->addWidget(pushButton_4, 0, 4, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 10pt \"Gill Sans MT\";\n"
"border-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 16, 121);"));

        gridLayout->addWidget(pushButton_3, 0, 3, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 10pt \"Gill Sans MT\";\n"
"border-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 16, 121);"));

        gridLayout->addWidget(pushButton_5, 0, 1, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "FRACTALES", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "HENON", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "DRAGON", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "COLOR", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "MANDELBROT", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialog", "ARABESCO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
