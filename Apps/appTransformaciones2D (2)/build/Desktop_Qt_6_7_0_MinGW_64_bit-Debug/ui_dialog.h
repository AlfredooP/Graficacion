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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *widget;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLabel *label_3;
    QSpinBox *spinBox_2;
    QPushButton *botonDerecha;
    QPushButton *botonIzq;
    QPushButton *botonArriba;
    QPushButton *botonAbajo;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *pushButton_3;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_4;
    QPushButton *pushButton_4;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QDoubleSpinBox *doubleSpinBox_7;
    QPushButton *botonRotar;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_5;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_6;
    QPushButton *BotonRotarPuntoPivote;
    QPushButton *botonAnimacion2;
    QPushButton *botonAnimacion1;
    QPushButton *pushButton_5;
    QCheckBox *checkBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(763, 546);
        widget = new QWidget(Dialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(530, 10, 231, 511));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(214, 214, 214);"));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 10, 91, 16));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 30, 152, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimum(-20);
        spinBox->setMaximum(20);
        spinBox->setValue(5);

        horizontalLayout->addWidget(spinBox);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        spinBox_2 = new QSpinBox(layoutWidget);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setMinimum(-20);
        spinBox_2->setMaximum(20);
        spinBox_2->setValue(5);

        horizontalLayout->addWidget(spinBox_2);

        botonDerecha = new QPushButton(widget);
        botonDerecha->setObjectName("botonDerecha");
        botonDerecha->setGeometry(QRect(120, 90, 31, 32));
        botonIzq = new QPushButton(widget);
        botonIzq->setObjectName("botonIzq");
        botonIzq->setGeometry(QRect(60, 90, 31, 32));
        botonArriba = new QPushButton(widget);
        botonArriba->setObjectName("botonArriba");
        botonArriba->setGeometry(QRect(90, 60, 31, 32));
        botonAbajo = new QPushButton(widget);
        botonAbajo->setObjectName("botonAbajo");
        botonAbajo->setGeometry(QRect(90, 120, 31, 32));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 480, 70, 32));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 190, 100, 32));
        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 160, 182, 23));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        doubleSpinBox_2 = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox_2->setObjectName("doubleSpinBox_2");
        doubleSpinBox_2->setMinimum(0.100000000000000);
        doubleSpinBox_2->setValue(1.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox_2);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        horizontalLayout_2->addWidget(label_5);

        doubleSpinBox = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setMinimum(0.100000000000000);
        doubleSpinBox->setValue(1.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(50, 480, 100, 32));
        layoutWidget_2 = new QWidget(widget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(0, 230, 219, 23));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName("label_6");

        horizontalLayout_3->addWidget(label_6);

        doubleSpinBox_3 = new QDoubleSpinBox(layoutWidget_2);
        doubleSpinBox_3->setObjectName("doubleSpinBox_3");
        doubleSpinBox_3->setMinimum(-100.000000000000000);
        doubleSpinBox_3->setMaximum(200.000000000000000);
        doubleSpinBox_3->setValue(1.000000000000000);

        horizontalLayout_3->addWidget(doubleSpinBox_3);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName("label_7");

        horizontalLayout_3->addWidget(label_7);

        doubleSpinBox_4 = new QDoubleSpinBox(layoutWidget_2);
        doubleSpinBox_4->setObjectName("doubleSpinBox_4");
        doubleSpinBox_4->setMinimum(-100.000000000000000);
        doubleSpinBox_4->setValue(1.000000000000000);

        horizontalLayout_3->addWidget(doubleSpinBox_4);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(50, 260, 131, 32));
        layoutWidget2 = new QWidget(widget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(50, 290, 141, 23));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName("label_10");

        horizontalLayout_5->addWidget(label_10);

        doubleSpinBox_7 = new QDoubleSpinBox(layoutWidget2);
        doubleSpinBox_7->setObjectName("doubleSpinBox_7");
        doubleSpinBox_7->setMinimum(-360.000000000000000);
        doubleSpinBox_7->setMaximum(360.000000000000000);
        doubleSpinBox_7->setValue(1.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBox_7);

        botonRotar = new QPushButton(widget);
        botonRotar->setObjectName("botonRotar");
        botonRotar->setGeometry(QRect(60, 310, 100, 32));
        layoutWidget_3 = new QWidget(widget);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(10, 340, 214, 23));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_3);
        label_8->setObjectName("label_8");

        horizontalLayout_4->addWidget(label_8);

        doubleSpinBox_5 = new QDoubleSpinBox(layoutWidget_3);
        doubleSpinBox_5->setObjectName("doubleSpinBox_5");
        doubleSpinBox_5->setMinimum(0.000000000000000);
        doubleSpinBox_5->setMaximum(100.000000000000000);
        doubleSpinBox_5->setValue(1.000000000000000);

        horizontalLayout_4->addWidget(doubleSpinBox_5);

        label_9 = new QLabel(layoutWidget_3);
        label_9->setObjectName("label_9");

        horizontalLayout_4->addWidget(label_9);

        doubleSpinBox_6 = new QDoubleSpinBox(layoutWidget_3);
        doubleSpinBox_6->setObjectName("doubleSpinBox_6");
        doubleSpinBox_6->setMinimum(-100.000000000000000);
        doubleSpinBox_6->setMaximum(100.000000000000000);
        doubleSpinBox_6->setValue(1.000000000000000);

        horizontalLayout_4->addWidget(doubleSpinBox_6);

        BotonRotarPuntoPivote = new QPushButton(widget);
        BotonRotarPuntoPivote->setObjectName("BotonRotarPuntoPivote");
        BotonRotarPuntoPivote->setGeometry(QRect(30, 370, 168, 32));
        botonAnimacion2 = new QPushButton(widget);
        botonAnimacion2->setObjectName("botonAnimacion2");
        botonAnimacion2->setGeometry(QRect(120, 410, 81, 32));
        botonAnimacion1 = new QPushButton(widget);
        botonAnimacion1->setObjectName("botonAnimacion1");
        botonAnimacion1->setGeometry(QRect(30, 410, 81, 32));
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(20, 440, 100, 32));
        checkBox = new QCheckBox(Dialog);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(610, 520, 81, 20));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "TRASLACION", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "TX", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "TY", nullptr));
        botonDerecha->setText(QCoreApplication::translate("Dialog", ">", nullptr));
        botonIzq->setText(QCoreApplication::translate("Dialog", "<", nullptr));
        botonArriba->setText(QCoreApplication::translate("Dialog", "^", nullptr));
        botonAbajo->setText(QCoreApplication::translate("Dialog", "v", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "RESET", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "ESCALAR", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "SX", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "SY", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "RESET", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "PFX", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "PFY", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "ESCALACION P.F", nullptr));
        label_10->setText(QCoreApplication::translate("Dialog", "ANGULO:", nullptr));
        botonRotar->setText(QCoreApplication::translate("Dialog", "ROTAR", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "PPX", nullptr));
        label_9->setText(QCoreApplication::translate("Dialog", "PPY", nullptr));
        BotonRotarPuntoPivote->setText(QCoreApplication::translate("Dialog", "ROTAR PUNTO PIVOTE", nullptr));
        botonAnimacion2->setText(QCoreApplication::translate("Dialog", "Animacion 2", nullptr));
        botonAnimacion1->setText(QCoreApplication::translate("Dialog", "Animacion 1", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        checkBox->setText(QCoreApplication::translate("Dialog", "TECLADO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
