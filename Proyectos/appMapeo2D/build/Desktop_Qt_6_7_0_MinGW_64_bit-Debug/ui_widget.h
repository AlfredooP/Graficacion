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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *btnMapeo;
    QDoubleSpinBox *sbEscala;
    QRadioButton *rbDinosaurio;
    QPushButton *btnNormal;
    QRadioButton *rbTriangulo;
    QRadioButton *rbEstrella;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(700, 500);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush1(QColor(0, 11, 53, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        Widget->setPalette(palette);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(500, 0, 200, 500));
        QPalette palette1;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        widget->setPalette(palette1);
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 101, 164, 331));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        btnMapeo = new QPushButton(layoutWidget);
        btnMapeo->setObjectName("btnMapeo");
        btnMapeo->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(20, 3, 255);"));

        gridLayout->addWidget(btnMapeo, 6, 0, 1, 1);

        sbEscala = new QDoubleSpinBox(layoutWidget);
        sbEscala->setObjectName("sbEscala");
        sbEscala->setMinimum(0.010000000000000);
        sbEscala->setMaximum(2.000000000000000);
        sbEscala->setSingleStep(0.010000000000000);
        sbEscala->setValue(1.000000000000000);

        gridLayout->addWidget(sbEscala, 8, 0, 1, 1);

        rbDinosaurio = new QRadioButton(layoutWidget);
        rbDinosaurio->setObjectName("rbDinosaurio");

        gridLayout->addWidget(rbDinosaurio, 4, 0, 1, 1);

        btnNormal = new QPushButton(layoutWidget);
        btnNormal->setObjectName("btnNormal");
        btnNormal->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(20, 3, 255);"));

        gridLayout->addWidget(btnNormal, 5, 0, 1, 1);

        rbTriangulo = new QRadioButton(layoutWidget);
        rbTriangulo->setObjectName("rbTriangulo");

        gridLayout->addWidget(rbTriangulo, 2, 0, 1, 1);

        rbEstrella = new QRadioButton(layoutWidget);
        rbEstrella->setObjectName("rbEstrella");

        gridLayout->addWidget(rbEstrella, 3, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 7, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 40, 162, 40));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"color: rgb(255, 238, 0);"));
        label_3->setAlignment(Qt::AlignCenter);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "APP ZOOM", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Dibujar:", nullptr));
        btnMapeo->setText(QCoreApplication::translate("Widget", "MAPEO", nullptr));
        rbDinosaurio->setText(QCoreApplication::translate("Widget", "Dinosaurio", nullptr));
        btnNormal->setText(QCoreApplication::translate("Widget", "NORMAL", nullptr));
        rbTriangulo->setText(QCoreApplication::translate("Widget", "Triangulo", nullptr));
        rbEstrella->setText(QCoreApplication::translate("Widget", "Estrella", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Zoom:", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "APP. ZOOM", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
