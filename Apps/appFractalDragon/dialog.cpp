#include "dialog.h"
#include "ui_dialog.h"
#include <iostream>

using namespace std;
#include <stdlib.h>
#include <time.h>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    paso = 4096;
    signo = -1;
    marc = 0;
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e)
    canvas = new QPainter(this);
    graficos = new Graficos();
    if(marc ==1){

        int i;
        ejeX[1] = this->width() /4;
        ejeX[4097] = 3*this->geometry().x()/4;
        ejeY[1] = ejeY[4097] = 2*this->height()/3;
        //canvas->setBackground(Qt::black);
        //QPen pen(QColor(0,0,200),2);
        //canvas->setPen(pen);
        //canvas->drawLine(ejeX[1], ejeY[1], ejeX[4097], ejeY[4097]);
        //graficos.lineaDDA(ejeX[1], ejeY[1], ejeX[4097], ejeY[4097], canvas, Qt::blue);
        for(i = 1; i <= 13; i++)
        {
            generarDragon(16);
            paso /= 2;
        }
    }
    marc = 0;
    canvas->end();
}

void Dialog::generarDragon(int color)
{
    int i, j, dx, dy;
    j = paso/2;
    if(canvas->isActive())
        cout<<"si";
    for(i = 1; i <= 4096; i += paso)
    {
        dx = ejeX[paso+i] - ejeX[i];
        dy = ejeY[paso+i] - ejeY[i];
        signo *= -1;
        ejeX[i+j] = ejeX[i] + (dx+(dy*signo));
        ejeY[i+j] = ejeY[i] + (dy-(dx*signo));
        if(color != 0)
        {
            cout<<i<<",";
            //canvas->drawLine(0,0,100,100);
            graficos->lineaDDA(100,100,200,200,canvas, color);
            //canvas->drawLine(ejeX[i], ejeY[i], ejeX[i+j], ejeY[i+j]);
            //canvas->drawLine(ejeX[i+j], ejeY[i+j], ejeX[i+paso], ejeY[i+paso]);
            //graficos.lineaDDA(ejeX[i], ejeY[i], ejeX[i+j], ejeY[i+j], canvas, color);
            //graficos.lineaDDA(ejeX[i+j], ejeY[i+j], ejeX[i+paso], ejeY[i+paso], canvas, color);
        }
    }    
    cout<<"end";
}


void Dialog::on_pushButton_clicked()
{
    marc = 1;
}

