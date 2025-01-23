#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    velocidad = ui->dial->value();
    ui->lcdNumber->display(velocidad);

    timer1 = new QTimer();
    connect(timer1, SIGNAL(timeout()), this, SLOT(moverEtiqueta1()));
    timer2 = new QTimer();
    connect(timer2, SIGNAL(timeout()), this, SLOT(moverEtiqueta2()));
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_lineEdit_textChanged(const QString &arg1)
{
    ui->label_2->setText(arg1);
    ui->label_2->adjustSize();
}


void Dialog::on_botonTimer1_clicked()
{
    timer1->start(velocidad);
    ui->dial->setEnabled(true);
}


void Dialog::on_botonDetener1_clicked()
{
    timer1->stop();
}


void Dialog::on_botonTimer2_clicked()
{
    timer2->start(velocidad);
    ui->dial->setEnabled(true);
}


void Dialog::on_botonDetener2_clicked()
{
    timer2->stop();
}

void Dialog::moverEtiqueta1()
{
    static int x = 0;
    static bool band = true;

    int y = ui->label_2->geometry().y();

    string textoI = ui->label_2->text().toStdString();
    string destino;

    if(band)
    {
        ui->label_2->setGeometry(x, y, ui->label_2->width(), ui->label_2->height());
        x += 10;

        if(ui->label_2->geometry().x() > (this->width() - ui->label_2->width()))
        {
            band = false; //0 es el unico valor falso en C/C++, los demas numeros son true
//            destino = Invertir(textoI);
//            ui->label_2->setText(QString::fromStdString(destino));
            reverse(textoI.begin(), textoI.end());
            ui->label_2->setText(QString::fromStdString(textoI));
        }
    }
    if(!band)
    {
        x -= 10;
        ui->label_2->setGeometry(x, y, ui->label_2->width(), ui->label_2->height());
        if(x == 0){
            band = true;
            reverse(textoI.begin(), textoI.end());
            ui->label_2->setText(QString::fromStdString(textoI));
        }
    }
}

void Dialog::moverEtiqueta2()
{
    static int y = 0;
    static bool band = true;

    int x = ui->label->geometry().x();

    string textoI = ui->label->text().toStdString();
    string destino;

    if(band)
    {
        ui->label->setGeometry(x, y, ui->label->width(), ui->label->height());
        y += 10;

        if(ui->label->geometry().y() > (ui->widget->height() - ui->label->height()))
        {
            band = false; //0 es el unico valor falso en C/C++, los demas numeros son true
//            destino = Invertir(textoI);
//            ui->label->setText(QString::fromStdString(destino));
            reverse(textoI.begin(), textoI.end());
            ui->label->setText(QString::fromStdString(textoI));
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


void Dialog::on_dial_valueChanged(int value)
{
    ui->lcdNumber->display(velocidad = value);

    this->on_botonTimer1_clicked();
    this->on_botonTimer2_clicked();
}

string Dialog::Invertir(string fuente)
{
    string destino;
    for(int i = 0, j = fuente.size()-1; i < (int)fuente.length(); i++, j--)
    {
        destino += fuente[j];
    }
    return destino;
}

