/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QDial *dialAlfa;
    QDial *dialPhi;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLCDNumber *lcdAlfa;
    QLCDNumber *lcdPhi;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QRadioButton *rbEjeX;
    QRadioButton *rbEjeY;
    QRadioButton *rbEjeZ;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbRotacion;
    QRadioButton *rbEscalacion;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbCubo;
    QRadioButton *rbITL;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 500);
        QPalette palette;
        QBrush brush(QColor(85, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Widget->setPalette(palette);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(489, 0, 311, 500));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 2, 2);"));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 40, 209, 129));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        dialAlfa = new QDial(layoutWidget);
        dialAlfa->setObjectName("dialAlfa");
        dialAlfa->setMaximum(360);
        dialAlfa->setSingleStep(10);
        dialAlfa->setValue(0);
        dialAlfa->setNotchesVisible(true);

        gridLayout->addWidget(dialAlfa, 1, 0, 1, 1);

        dialPhi = new QDial(layoutWidget);
        dialPhi->setObjectName("dialPhi");
        dialPhi->setMaximum(360);
        dialPhi->setSingleStep(10);
        dialPhi->setNotchesVisible(true);

        gridLayout->addWidget(dialPhi, 1, 1, 1, 1);

        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(56, 190, 201, 51));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lcdAlfa = new QLCDNumber(layoutWidget1);
        lcdAlfa->setObjectName("lcdAlfa");

        gridLayout_2->addWidget(lcdAlfa, 0, 0, 1, 1);

        lcdPhi = new QLCDNumber(layoutWidget1);
        lcdPhi->setObjectName("lcdPhi");

        gridLayout_2->addWidget(lcdPhi, 0, 1, 1, 1);

        layoutWidget2 = new QWidget(widget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(50, 350, 201, 121));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        rbEjeX = new QRadioButton(layoutWidget2);
        rbEjeX->setObjectName("rbEjeX");

        verticalLayout->addWidget(rbEjeX);

        rbEjeY = new QRadioButton(layoutWidget2);
        rbEjeY->setObjectName("rbEjeY");

        verticalLayout->addWidget(rbEjeY);

        rbEjeZ = new QRadioButton(layoutWidget2);
        rbEjeZ->setObjectName("rbEjeZ");

        verticalLayout->addWidget(rbEjeZ);

        layoutWidget3 = new QWidget(widget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(50, 320, 195, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        rbRotacion = new QRadioButton(layoutWidget3);
        rbRotacion->setObjectName("rbRotacion");

        horizontalLayout->addWidget(rbRotacion);

        rbEscalacion = new QRadioButton(layoutWidget3);
        rbEscalacion->setObjectName("rbEscalacion");

        horizontalLayout->addWidget(rbEscalacion);

        layoutWidget4 = new QWidget(widget);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(50, 280, 191, 28));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        rbCubo = new QRadioButton(layoutWidget4);
        rbCubo->setObjectName("rbCubo");
        rbCubo->setChecked(false);

        horizontalLayout_2->addWidget(rbCubo);

        rbITL = new QRadioButton(layoutWidget4);
        rbITL->setObjectName("rbITL");
        rbITL->setChecked(true);

        horizontalLayout_2->addWidget(rbITL);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "APP 3D", nullptr));
        label->setText(QCoreApplication::translate("Widget", "ALFA", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "PHI", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "ROTACION RESPECTO A:", nullptr));
        rbEjeX->setText(QCoreApplication::translate("Widget", "Eje X", nullptr));
        rbEjeY->setText(QCoreApplication::translate("Widget", "Eje Y", nullptr));
        rbEjeZ->setText(QCoreApplication::translate("Widget", "Eje Z", nullptr));
        rbRotacion->setText(QCoreApplication::translate("Widget", "Rotacion", nullptr));
        rbEscalacion->setText(QCoreApplication::translate("Widget", "Escalacion", nullptr));
        rbCubo->setText(QCoreApplication::translate("Widget", "Cubo", nullptr));
        rbITL->setText(QCoreApplication::translate("Widget", "ITL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
