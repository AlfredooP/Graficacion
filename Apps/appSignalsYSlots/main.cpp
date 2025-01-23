#include <QApplication>
#include <QLabel>
#include <QVBoxLayout>
#include <QSpinBox>
#include <QSlider>
#include <QPushButton>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget ventana;

    //QHBoxLayout *mainLayout = new QHBoxLayout(&ventana);
    //QVBoxLayout *mainLayout = new QVBoxLayout(&ventana);

    QLabel *label = new QLabel("0");
    QSpinBox *spinBox = new QSpinBox;
    QSlider *slider = new QSlider(Qt::Horizontal);

    spinBox->setMinimum(0);
    spinBox->setMaximum(255);

    slider->setMinimum(0);
    slider->setMaximum(255);

    QPushButton *boton1 = new QPushButton("Salir");
    QPushButton *boton2 = new QPushButton("Boton 2");
    QPushButton *boton3 = new QPushButton("Boton 3");
    QPushButton *boton4 = new QPushButton("Boton 4");

/*
    mainLayout->addWidget(label);
    mainLayout->addWidget(spinBox);
    mainLayout->addWidget(slider);
    mainLayout->addWidget(boton1);
    mainLayout->addWidget(boton2);
*/

    QGridLayout *mainLayout = new QGridLayout(&ventana);

    mainLayout->addWidget(label,0,0,1,1);
    mainLayout->addWidget(spinBox,0,1,1,1);
    mainLayout->addWidget(slider,1,0,1,3);
    mainLayout->addWidget(boton3,2,0,1,1);
    mainLayout->addWidget(boton2,2,1,1,1);
    mainLayout->addWidget(boton1,2,2,1,1);
    mainLayout->addWidget(boton4,2,3,1,1);

    QObject::connect(spinBox,SIGNAL(valueChanged(int)),label,SLOT(setNum(int)));
    QObject::connect(slider,SIGNAL(valueChanged(int)),label,SLOT(setNum(int)));
    QObject::connect(slider,SIGNAL(valueChanged(int)),spinBox,SLOT(setValue(int)));

    QObject::connect(boton1,SIGNAL(clicked()),qApp,SLOT(quit()));

    return app.exec();
}
