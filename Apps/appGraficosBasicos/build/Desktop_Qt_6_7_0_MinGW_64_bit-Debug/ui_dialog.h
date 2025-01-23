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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_4;
    QDoubleSpinBox *spinFactor;
    QDoubleSpinBox *spinTh;
    QPushButton *espiral2;
    QPushButton *espiral1;
    QDoubleSpinBox *spinRadio;
    QSpinBox *spinTam;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QPushButton *pitagoras;
    QPushButton *polares;
    QPushButton *pushButton_4;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QLabel *label_6;
    QSpinBox *spinBox_3;
    QLabel *label_7;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *txtY2;
    QLabel *label;
    QLineEdit *txtX2;
    QLineEdit *txtY1;
    QLineEdit *txtX1;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_3;
    QPushButton *animacion2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(1600, 800);
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
        Dialog->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../Downloads/bx-shape-polygon.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 400, 281, 111));
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"MS Shell Dlg 2\";"));
        groupBox->setFlat(false);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 40, 251, 59));
        gridLayout_4 = new QGridLayout(layoutWidget);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        spinFactor = new QDoubleSpinBox(layoutWidget);
        spinFactor->setObjectName("spinFactor");
        spinFactor->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        spinFactor->setMinimum(0.100000000000000);
        spinFactor->setMaximum(300.000000000000000);
        spinFactor->setSingleStep(0.100000000000000);
        spinFactor->setValue(1.000000000000000);

        gridLayout_4->addWidget(spinFactor, 0, 1, 1, 1);

        spinTh = new QDoubleSpinBox(layoutWidget);
        spinTh->setObjectName("spinTh");
        spinTh->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        spinTh->setMinimum(0.100000000000000);
        spinTh->setSingleStep(0.100000000000000);

        gridLayout_4->addWidget(spinTh, 1, 2, 1, 1);

        espiral2 = new QPushButton(layoutWidget);
        espiral2->setObjectName("espiral2");
        espiral2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        gridLayout_4->addWidget(espiral2, 1, 0, 1, 1);

        espiral1 = new QPushButton(layoutWidget);
        espiral1->setObjectName("espiral1");
        espiral1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        gridLayout_4->addWidget(espiral1, 0, 0, 1, 1);

        spinRadio = new QDoubleSpinBox(layoutWidget);
        spinRadio->setObjectName("spinRadio");
        spinRadio->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        spinRadio->setMinimum(0.100000000000000);
        spinRadio->setSingleStep(0.100000000000000);

        gridLayout_4->addWidget(spinRadio, 1, 1, 1, 1);

        spinTam = new QSpinBox(layoutWidget);
        spinTam->setObjectName("spinTam");
        spinTam->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        spinTam->setMinimum(100);
        spinTam->setMaximum(500);
        spinTam->setSingleStep(5);
        spinTam->setValue(100);

        gridLayout_4->addWidget(spinTam, 0, 2, 1, 1);

        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 260, 281, 131));
        groupBox_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"MS Shell Dlg 2\";"));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(150, 30, 111, 91));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pitagoras = new QPushButton(layoutWidget1);
        pitagoras->setObjectName("pitagoras");
        pitagoras->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        gridLayout_3->addWidget(pitagoras, 0, 0, 1, 1);

        polares = new QPushButton(layoutWidget1);
        polares->setObjectName("polares");
        polares->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        gridLayout_3->addWidget(polares, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        gridLayout_3->addWidget(pushButton_4, 2, 0, 1, 1);

        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(20, 30, 125, 91));
        gridLayout_2 = new QGridLayout(layoutWidget2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        spinBox_3 = new QSpinBox(layoutWidget2);
        spinBox_3->setObjectName("spinBox_3");
        spinBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        spinBox_3->setMinimum(10);
        spinBox_3->setMaximum(300);
        spinBox_3->setValue(150);

        gridLayout_2->addWidget(spinBox_3, 2, 1, 1, 1);

        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        spinBox = new QSpinBox(layoutWidget2);
        spinBox->setObjectName("spinBox");
        spinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        spinBox->setMinimum(10);
        spinBox->setMaximum(1200);
        spinBox->setValue(600);

        gridLayout_2->addWidget(spinBox, 0, 1, 1, 1);

        spinBox_2 = new QSpinBox(layoutWidget2);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        spinBox_2->setMinimum(10);
        spinBox_2->setMaximum(600);
        spinBox_2->setValue(300);

        gridLayout_2->addWidget(spinBox_2, 1, 1, 1, 1);

        groupBox_3 = new QGroupBox(Dialog);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 140, 281, 111));
        groupBox_3->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"font: 75 8pt \"MS Shell Dlg 2\";"));
        layoutWidget3 = new QWidget(groupBox_3);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(20, 30, 231, 71));
        gridLayout = new QGridLayout(layoutWidget3);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        txtY2 = new QLineEdit(layoutWidget3);
        txtY2->setObjectName("txtY2");
        txtY2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        gridLayout->addWidget(txtY2, 1, 3, 1, 1);

        label = new QLabel(layoutWidget3);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        txtX2 = new QLineEdit(layoutWidget3);
        txtX2->setObjectName("txtX2");
        txtX2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        gridLayout->addWidget(txtX2, 0, 3, 1, 1);

        txtY1 = new QLineEdit(layoutWidget3);
        txtY1->setObjectName("txtY1");
        txtY1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        gridLayout->addWidget(txtY1, 1, 1, 1, 1);

        txtX1 = new QLineEdit(layoutWidget3);
        txtX1->setObjectName("txtX1");
        txtX1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        gridLayout->addWidget(txtX1, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        pushButton = new QPushButton(layoutWidget3);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton, 0, 4, 1, 2);

        pushButton_2 = new QPushButton(layoutWidget3);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton_2, 1, 4, 1, 2);

        groupBox_4 = new QGroupBox(Dialog);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(10, 520, 281, 101));
        groupBox_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"MS Shell Dlg 2\";"));
        layoutWidget4 = new QWidget(groupBox_4);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(80, 30, 121, 59));
        gridLayout_5 = new QGridLayout(layoutWidget4);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget4);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        gridLayout_5->addWidget(pushButton_3, 0, 0, 1, 1);

        animacion2 = new QPushButton(layoutWidget4);
        animacion2->setObjectName("animacion2");
        animacion2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        gridLayout_5->addWidget(animacion2, 1, 0, 1, 1);

        QWidget::setTabOrder(txtX1, txtY1);
        QWidget::setTabOrder(txtY1, txtX2);
        QWidget::setTabOrder(txtX2, txtY2);
        QWidget::setTabOrder(txtY2, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "GRAFICOS BASICOS", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "ESPIRALES", nullptr));
        espiral2->setText(QCoreApplication::translate("Dialog", "ESPIRAL 2", nullptr));
        espiral1->setText(QCoreApplication::translate("Dialog", "ESPIRAL 1", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Dialog", "CIRCULO", nullptr));
        pitagoras->setText(QCoreApplication::translate("Dialog", "PITAGORAS", nullptr));
        polares->setText(QCoreApplication::translate("Dialog", "POLARES", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "LINEAS", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "RADIO", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "CENTRO X", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "CENTRO Y", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Dialog", "LINEA", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Y2", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Y1", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "X1", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "X2", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "LINEA DDA", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "COLOR", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Dialog", "ANIMACIONES", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "EPILEPSIA", nullptr));
        animacion2->setText(QCoreApplication::translate("Dialog", "ESTRELLAS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
