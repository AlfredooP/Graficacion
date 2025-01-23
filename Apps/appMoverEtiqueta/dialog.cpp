#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    timer1 = new QTimer();
    timer2 = new QTimer();

    //connect(timer1, SIGNAL(timeout()), this, SLOT(moverEtiquetaV()));
    //connect(timer1, SIGNAL(timeout()), this, SLOT(moverEtiquetaH()));
    connect(timer1, SIGNAL(timeout()), this, SLOT(moverEtiquetaV_Widget()));
    connect(timer2, SIGNAL(timeout()), this, SLOT(moverEtiquetaH_Widget()));
}

Dialog::~Dialog()
{
    delete ui;
}

//Diseñe e implemente un metodo para invertir la cadena de la etiqueta al topar en el borde


//Iniciar timer
void Dialog::on_pushButton_clicked()
{
    timer1->start(30);
}

//Detener timer
void Dialog::on_pushButton_2_clicked()
{
    timer1->stop();
    timer2->stop();
}

void Dialog::on_pushButton_3_clicked()
{
    close();
    delete timer1;
    delete timer2;
}

void Dialog::moverEtiquetaH()
{
    static int x = 0;
    static bool band = true;

    int y = ui->label->geometry().y();

    if(band)
    {
        ui->label->setGeometry(x, y, ui->label->width(), ui->label->height());
        x += 10;

        if(ui->label->geometry().x() > (this->width() - ui->label->width()))
        {
            band = false; //0 es el unico valor falso en C/C++, los demas numeros son true
        }
    }
    if(!band)
    {
        x -= 10;
        ui->label->setGeometry(x, y, ui->label->width(), ui->label->height());
        if(x == 0)
            band = true;
    }
}

void Dialog::moverEtiquetaV()
{
    static int y = 0;
    static bool band = true;

    int x = ui->label->geometry().x();

    if(band)
    {
        ui->label->setGeometry(x, y, ui->label->width(), ui->label->height());
        y += 10;

        if(ui->label->geometry().y() > (this->height() - ui->label->height()))
        {
            band = false;
        }
    }
    if(!band)
    {
        y -= 10;
        ui->label->setGeometry(x, y, ui->label->width(), ui->label->height());
        if(y == 0)
            band = true;
    }
}

void Dialog::moverEtiquetaH_Widget()
{
    static int x = 0;
    static bool band = true;

    int y = ui->label_2->geometry().y();

    if(band)
    {
        ui->label_2->setGeometry(x, y, ui->label_2->width(), ui->label_2->height());
        x += 10;

        if(ui->label_2->geometry().x() > (ui->widget->width() - ui->label_2->width()))
        {
            band = false; //0 es el unico valor falso en C/C++, los demas numeros son true
        }
    }
    if(!band)
    {
        x -= 10;
        ui->label_2->setGeometry(x, y, ui->label_2->width(), ui->label_2->height());
        if(x == 0)
            band = true;
    }
}

void Dialog::moverEtiquetaV_Widget()
{
    static int y = 0;
    static bool band = true;

    int x = ui->label_3->geometry().x();

    if(band)
    {
        ui->label_3->setGeometry(x, y, ui->label_3->width(), ui->label_3->height());
        y += 10;

        if(ui->label_3->geometry().y() > (ui->widget_2->height() - ui->label_3->height()))
        {
            band = false; //0 es el unico valor falso en C/C++, los demas numeros son true
        }
    }
    if(!band)
    {
        y -= 10;
        ui->label_3->setGeometry(x, y, ui->label_3->width(), ui->label_3->height());
        if(y == 0)
            band = true;
    }
}

void Dialog::on_pushButton_4_clicked()
{
    timer2->start(30);
}

