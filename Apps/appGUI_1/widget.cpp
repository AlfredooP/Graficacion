#include "widget.h"
#include "ui_widget.h"


QString *cad = new QString();
double base = 0;

Widget::Widget(QWidget *parent): QWidget(parent), ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


int factorial(double n){
    int fact = 1;
    for(int i = 1; i <= n;){
        fact *= i;
        i++;
    }
    return fact;
}

double absoluto(double n){
    if (n >= 0)
        return n;
    else
        return n*-1;
}

double potencia(double base, double exponente){
    double pot;
    pot = 1;
    for(int i = 1; i <= exponente; i++)
        pot = pot * base;
    return pot;
}

double raiz(double n){
    double a, b, prom;
    a = n;
    b = 1;
    if(n < 0)
        return 0;

    while(absoluto(a-b) > 0.000000001){
        prom = (a + b) / 2;
        a = prom;
        b = n / a;
    }

    return a;
}

double seno(double angulo){
    int p, signo, i;
    double suma, x, termino;
    x = angulo * 3.14159265359 / 180;
    p = 1;
    signo = 1;
    suma = 0;
    for(i=1; i <= 15; i++){
        termino = potencia(x,p) / factorial(p);
        suma = suma + termino * signo;
        p = p + 2;
        signo = signo * (-1);
    }
    return suma;
}

double coseno(double angulo){
    return raiz(1 - potencia(seno(angulo), 2));
}

double tangente(double angulo){
    return seno(angulo) / coseno(angulo);
}

bool esPrimo(int n){
    for(int div = 2; div < n; div++){
        if(n%div == 0)
            return false;
    }
    return true;
}

void Widget::on_botonFactorial_clicked()
{
    double n = ui->lcdNumero->value();
    if(n < 32){
        *cad = "!" + QString::number(n) + " = " + QString::number(factorial(n));
        ui->etiquetaResultado->setText(*cad);
    }
    else
        ui->etiquetaResultado->setText("EL NÚMERO ES DEMASIADO GRANDE!");
}


void Widget::on_botonSeno_clicked()
{
    double n = ui->lcdNumero->value();
    *cad = "sin(" + QString::number(n) + ") = " + QString::number(seno(n));
    ui->etiquetaResultado->setText(*cad);
}


void Widget::on_botonCoseno_clicked()
{
    double n = ui->lcdNumero->value();
    *cad = "cos(" + QString::number(n) + ") = " + QString::number(coseno(n));
    ui->etiquetaResultado->setText(*cad);
}


void Widget::on_botonTangente_clicked()
{
    double n = ui->lcdNumero->value();
    *cad = "tan(" + QString::number(n) + ") = " + QString::number(tangente(n));
    ui->etiquetaResultado->setText(*cad);
}


void Widget::on_botonPrimo_clicked()
{
    int n = ui->lcdNumero->value();
    if(esPrimo(n))
        *cad = "El número " + QString::number(n) + " es primo";
    else
        *cad = "El número " + QString::number(n) + " no es primo";
    ui->etiquetaResultado->setText(*cad);

}


void Widget::on_botonPotencia_clicked()
{
    if(base == 0){
        ui->botonPotencia->setText("EXPONENTE");
        ui->botonFactorial->setEnabled(false);
        ui->botonSeno->setEnabled(false);
        ui->botonCoseno->setEnabled(false);
        ui->botonTangente->setEnabled(false);
        ui->botonPrimo->setEnabled(false);
        ui->botonRaiz->setEnabled(false);
        base = ui->lcdNumero->value();
    }
    else{
        double n = ui->lcdNumero->value();
        *cad = QString::number(base) + "^" + QString::number(n) + " = " + QString::number(potencia(base, n));
        ui->etiquetaResultado->setText(*cad);
        ui->botonPotencia->setText("POTENCIA");
        ui->botonFactorial->setEnabled(true);
        ui->botonSeno->setEnabled(true);
        ui->botonCoseno->setEnabled(true);
        ui->botonTangente->setEnabled(true);
        ui->botonPrimo->setEnabled(true);
        ui->botonRaiz->setEnabled(true);
        base = 0;
    }

}


void Widget::on_botonRaiz_clicked()
{
    double n = ui->lcdNumero->value();
    *cad = "Raíz cuadrada de " + QString::number(n) + " = " + QString::number(raiz(n));
    ui->etiquetaResultado->setText(*cad);
}

