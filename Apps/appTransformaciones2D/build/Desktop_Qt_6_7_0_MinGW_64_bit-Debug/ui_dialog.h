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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
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
    QPushButton *btnEscalar;
    QPushButton *btnReset;
    QPushButton *btnEscalarPF;
    QWidget *layoutWidget;
    QFormLayout *formLayout_5;
    QLabel *label_8;
    QDoubleSpinBox *sbAngulo;
    QPushButton *btnRotar;
    QPushButton *btnRotarPP;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpinBox *sbTX;
    QLabel *label_3;
    QSpinBox *sbTY;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_2;
    QPushButton *btnArriba;
    QPushButton *btnIzquierda;
    QPushButton *btnDerecha;
    QPushButton *btnAbajo;
    QLabel *label_11;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QDoubleSpinBox *sbSX;
    QLabel *label_5;
    QDoubleSpinBox *sbSY;
    QLabel *label_12;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    QDoubleSpinBox *sbEPFX;
    QLabel *label_7;
    QDoubleSpinBox *sbEPFY;
    QLabel *label_13;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_5;
    QLabel *label_10;
    QDoubleSpinBox *sbPfyR;
    QDoubleSpinBox *sbPfxR;
    QLabel *label_9;
    QLabel *label_14;
    QPushButton *btnAnimacion1;
    QPushButton *btnAnimacion2;
    QCheckBox *cbTeclado;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(1200, 800);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("computer")));
        Dialog->setWindowIcon(icon);
        widget = new QWidget(Dialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(800, 0, 400, 750));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(12, 24, 255);"));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 10, 251, 20));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        btnEscalar = new QPushButton(widget);
        btnEscalar->setObjectName("btnEscalar");
        btnEscalar->setGeometry(QRect(190, 210, 141, 29));
        btnReset = new QPushButton(widget);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(130, 700, 161, 29));
        btnEscalarPF = new QPushButton(widget);
        btnEscalarPF->setObjectName("btnEscalarPF");
        btnEscalarPF->setGeometry(QRect(190, 350, 131, 29));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 470, 142, 31));
        formLayout_5 = new QFormLayout(layoutWidget);
        formLayout_5->setObjectName("formLayout_5");
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_8);

        sbAngulo = new QDoubleSpinBox(layoutWidget);
        sbAngulo->setObjectName("sbAngulo");
        sbAngulo->setMaximum(360.000000000000000);
        sbAngulo->setValue(1.000000000000000);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, sbAngulo);

        btnRotar = new QPushButton(widget);
        btnRotar->setObjectName("btnRotar");
        btnRotar->setGeometry(QRect(220, 470, 111, 29));
        btnRotarPP = new QPushButton(widget);
        btnRotarPP->setObjectName("btnRotarPP");
        btnRotarPP->setGeometry(QRect(190, 580, 151, 29));
        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 70, 101, 67));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        sbTX = new QSpinBox(layoutWidget1);
        sbTX->setObjectName("sbTX");
        sbTX->setMinimum(-20);
        sbTX->setMaximum(20);
        sbTX->setValue(5);

        gridLayout->addWidget(sbTX, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        sbTY = new QSpinBox(layoutWidget1);
        sbTY->setObjectName("sbTY");
        sbTY->setMinimumSize(QSize(50, 0));
        sbTY->setMinimum(-20);
        sbTY->setMaximum(20);
        sbTY->setValue(5);

        gridLayout->addWidget(sbTY, 1, 1, 1, 1);

        layoutWidget2 = new QWidget(widget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(130, 50, 256, 103));
        gridLayout_2 = new QGridLayout(layoutWidget2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        btnArriba = new QPushButton(layoutWidget2);
        btnArriba->setObjectName("btnArriba");

        gridLayout_2->addWidget(btnArriba, 0, 1, 1, 1);

        btnIzquierda = new QPushButton(layoutWidget2);
        btnIzquierda->setObjectName("btnIzquierda");

        gridLayout_2->addWidget(btnIzquierda, 1, 0, 1, 1);

        btnDerecha = new QPushButton(layoutWidget2);
        btnDerecha->setObjectName("btnDerecha");

        gridLayout_2->addWidget(btnDerecha, 1, 2, 1, 1);

        btnAbajo = new QPushButton(layoutWidget2);
        btnAbajo->setObjectName("btnAbajo");

        gridLayout_2->addWidget(btnAbajo, 2, 1, 1, 1);

        label_11 = new QLabel(widget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(80, 160, 251, 20));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);
        layoutWidget3 = new QWidget(widget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(70, 200, 101, 67));
        gridLayout_3 = new QGridLayout(layoutWidget3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName("label_4");

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        sbSX = new QDoubleSpinBox(layoutWidget3);
        sbSX->setObjectName("sbSX");
        sbSX->setMinimum(1.000000000000000);
        sbSX->setValue(1.000000000000000);

        gridLayout_3->addWidget(sbSX, 0, 1, 1, 1);

        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName("label_5");

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        sbSY = new QDoubleSpinBox(layoutWidget3);
        sbSY->setObjectName("sbSY");
        sbSY->setMinimum(1.000000000000000);
        sbSY->setValue(1.000000000000000);

        gridLayout_3->addWidget(sbSY, 1, 1, 1, 1);

        label_12 = new QLabel(widget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(80, 290, 251, 20));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);
        layoutWidget4 = new QWidget(widget);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(70, 330, 100, 67));
        gridLayout_4 = new QGridLayout(layoutWidget4);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget4);
        label_6->setObjectName("label_6");

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        sbEPFX = new QDoubleSpinBox(layoutWidget4);
        sbEPFX->setObjectName("sbEPFX");
        sbEPFX->setMinimum(1.000000000000000);
        sbEPFX->setValue(1.000000000000000);

        gridLayout_4->addWidget(sbEPFX, 0, 1, 1, 1);

        label_7 = new QLabel(layoutWidget4);
        label_7->setObjectName("label_7");

        gridLayout_4->addWidget(label_7, 1, 0, 1, 1);

        sbEPFY = new QDoubleSpinBox(layoutWidget4);
        sbEPFY->setObjectName("sbEPFY");
        sbEPFY->setMinimum(1.000000000000000);
        sbEPFY->setValue(1.000000000000000);

        gridLayout_4->addWidget(sbEPFY, 1, 1, 1, 1);

        label_13 = new QLabel(widget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(70, 430, 251, 20));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignCenter);
        layoutWidget5 = new QWidget(widget);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(70, 560, 100, 65));
        gridLayout_5 = new QGridLayout(layoutWidget5);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget5);
        label_10->setObjectName("label_10");

        gridLayout_5->addWidget(label_10, 1, 0, 1, 1);

        sbPfyR = new QDoubleSpinBox(layoutWidget5);
        sbPfyR->setObjectName("sbPfyR");
        sbPfyR->setMinimum(1.000000000000000);
        sbPfyR->setValue(1.000000000000000);

        gridLayout_5->addWidget(sbPfyR, 1, 1, 1, 1);

        sbPfxR = new QDoubleSpinBox(layoutWidget5);
        sbPfxR->setObjectName("sbPfxR");
        sbPfxR->setMinimum(1.000000000000000);
        sbPfxR->setValue(1.000000000000000);

        gridLayout_5->addWidget(sbPfxR, 0, 1, 1, 1);

        label_9 = new QLabel(layoutWidget5);
        label_9->setObjectName("label_9");

        gridLayout_5->addWidget(label_9, 0, 0, 1, 1);

        label_14 = new QLabel(widget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(80, 520, 251, 20));
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignCenter);
        btnAnimacion1 = new QPushButton(widget);
        btnAnimacion1->setObjectName("btnAnimacion1");
        btnAnimacion1->setGeometry(QRect(80, 660, 111, 29));
        btnAnimacion2 = new QPushButton(widget);
        btnAnimacion2->setObjectName("btnAnimacion2");
        btnAnimacion2->setGeometry(QRect(220, 660, 121, 29));
        cbTeclado = new QCheckBox(Dialog);
        cbTeclado->setObjectName("cbTeclado");
        cbTeclado->setGeometry(QRect(940, 760, 121, 26));
        cbTeclado->setFont(font);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "TRANSFORMACIONES 2D", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "TRASLACION", nullptr));
        btnEscalar->setText(QCoreApplication::translate("Dialog", "ESCALAR", nullptr));
        btnReset->setText(QCoreApplication::translate("Dialog", "RESET", nullptr));
        btnEscalarPF->setText(QCoreApplication::translate("Dialog", "ESCALAR PF", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "ANGULO", nullptr));
        btnRotar->setText(QCoreApplication::translate("Dialog", "ROTAR", nullptr));
        btnRotarPP->setText(QCoreApplication::translate("Dialog", "ROTAR PP", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "TX", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "TY", nullptr));
        btnArriba->setText(QCoreApplication::translate("Dialog", "^", nullptr));
        btnIzquierda->setText(QCoreApplication::translate("Dialog", "<", nullptr));
        btnDerecha->setText(QCoreApplication::translate("Dialog", ">", nullptr));
        btnAbajo->setText(QCoreApplication::translate("Dialog", "v", nullptr));
        label_11->setText(QCoreApplication::translate("Dialog", "ESCALACION", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "SX", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "SY", nullptr));
        label_12->setText(QCoreApplication::translate("Dialog", "ESCALACION PF", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "PFX", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "PFY", nullptr));
        label_13->setText(QCoreApplication::translate("Dialog", "ROTACION", nullptr));
        label_10->setText(QCoreApplication::translate("Dialog", "PFY", nullptr));
        label_9->setText(QCoreApplication::translate("Dialog", "PFX", nullptr));
        label_14->setText(QCoreApplication::translate("Dialog", "ROTACION PP", nullptr));
        btnAnimacion1->setText(QCoreApplication::translate("Dialog", "Animacion 1", nullptr));
        btnAnimacion2->setText(QCoreApplication::translate("Dialog", "Animacion 2", nullptr));
        cbTeclado->setText(QCoreApplication::translate("Dialog", "TECLADO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
