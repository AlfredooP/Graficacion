#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    marc = 0;
    colorSeleccionado = Qt::white;
}

Dialog::~Dialog()
{
    delete ui;
}

double hypot(double cateto1, double cateto2) {
    return qSqrt(qPow(cateto1, 2) + qPow(cateto2, 2));
}

void Dialog::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e)

    if(marc ==1)
    {
        canvas = new QPainter(this);
        QPen pen(colorSeleccionado,1);
        canvas->setPen(pen);

        int i;
        paso = 4096;
        signo = -1;
        ejeX[1] = this->width() /4;
        ejeX[4097] = 3*this->width()/4;
        ejeY[1] = ejeY[4097] = 2*this->height()/3;
        canvas->drawLine(ejeX[1], ejeY[1], ejeX[4097], ejeY[4097]);
        for(i = 1; i <= 13; i++)
        {
            generarDragon(i);
            paso /= 2;
        }
        canvas->end();
    }

    if(marc == 2)
    {
        canvas = new QPainter(this);
        QPen pen(colorSeleccionado,1);
        canvas->setPen(pen);

        escalaX = 1; //Valores para ajustar la escala
        escalaY = 1;
        despX = 0; //y la posicion en pantalla
        despY = 0;
        maxX = this->width();
        maxY = this->height();
        extranioConfinador();
        canvas->end();
    }

    if(marc == 3)
    {
        canvas = new QPainter(this);
        QPen pen(colorSeleccionado,1);
        canvas->setPen(pen);

        int maximX, maximY, limite, i , j, pasos, terminar;
        double pasoX, pasoY, posX, posY, origX, origY, dimX, dimY, iterX, iterY, tempX;
        maximX = this->width();
        maximY = this->height();
        limite = 100;

        origX = -2.0;
        origY = -1.25;
        dimX = 0.5;
        dimY = 1.25;

        pasoX = (dimX - origX) / maximX;
        pasoY = (dimY - origY) / maximY;
        for(i = 0; i <= maximX; i++)
        {
            for(j = 0; j <= maximY; j++)
            {
                posX = origX + i * pasoX;
                posY = origY + j * pasoY;
                iterX = 0.0;
                iterY = 0.0;
                terminar = pasos = 0;

                while(!terminar)
                {
                    tempX = (iterX * iterX) - (iterY * iterY) + posX;
                    iterY = 2 * (iterX * iterY) + posY;
                    iterX = tempX;
                    pasos++;

                    if(hypot(qAbs(iterX), qAbs(iterY)) >= 2.0)
                        terminar++;

                    if(pasos >= limite)
                        terminar ++;


                }
                if(pasos < limite) canvas->drawPoint(i, j);
            }
        }
        canvas->end();
    }
    if(marc ==4)
    {
        canvas = new QPainter(this);
        QPen pen(colorSeleccionado,1);
        canvas->setPen(pen);

        int i;
        paso = 4096;
        signo = -1;
        ejeX[1] = this->width() /4;
        ejeX[4097] = 3*this->width()/4;
        ejeY[1] = ejeY[4097] = 2*(this->height()-500)/3;
        canvas->drawLine(ejeX[1], ejeY[1], ejeX[4097], ejeY[4097]);
        for(i = 1; i <= 13; i++)
        {
            generarArabesco(i);
            paso /= 2;
        }
        canvas->end();
    }
    marc = 0;


}

void Dialog::generarDragon(int color)
{
    int i, j, dx, dy;
    j = paso/2;
    for(i = 1; i <= 4096; i += paso)
    {
        dx = ejeX[paso+i] - ejeX[i];
        dy = ejeY[paso+i] - ejeY[i];
        signo *= -1;
        ejeX[i+j] = ejeX[i] + (dx+(dy*signo)) /2;
        ejeY[i+j] = ejeY[i] + (dy-(dx*signo)) /2;
        if(color != 0)
        {
            canvas->drawLine(ejeX[i], ejeY[i], ejeX[i+j], ejeY[i+j]);
            canvas->drawLine(ejeX[i+j], ejeY[i+j], ejeX[i+paso], ejeY[i+paso]);
        }
    }
}

void Dialog::generarArabesco(int color)
{
    int i, j, dx, dy;
    j = paso/2;
    for(i = 1; i <= 4096; i += paso)
    {
        dx = ejeX[paso+i] - ejeX[i];
        dy = ejeY[paso+i] - ejeY[i];
        signo *= -1;
        signo *= -1;
        ejeX[i+j] = ejeX[i] + (dx+(dy*signo)) /2;
        ejeY[i+j] = ejeY[i] + (dy-(dx*signo)) /2;
        if(color != 0)
        {
            canvas->drawLine(ejeX[i], ejeY[i], ejeX[i+j], ejeY[i+j]);
            canvas->drawLine(ejeX[i+j], ejeY[i+j], ejeX[i+paso], ejeY[i+paso]);
        }
    }
}

void Dialog::extranioConfinador()
{
    int i, color, posX, posY;
    double xAnt, xNuevo, yAnt, yNuevo;

    xAnt  = yAnt = 0;

    for(color = 1; color <= 15; color++)
    {
        for(i = 1; i <= 0x02FF; i++)
        {
            xNuevo = yAnt + 1 - (1.4*xAnt*xAnt);
            yNuevo = 0.3 * xAnt;
            posX = (xNuevo * maxX / 3 * escalaX) + maxX / 2 + despX;
            posY = (yNuevo * maxY * escalaY) + maxY / 2 + despY;
            if((posX >= 0) && (posX <= maxX) && (posY >= 0) && (posY <= maxY))
            {
                canvas->drawPoint(posX, posY);
            }
            yAnt = yNuevo;
            xAnt = xNuevo;
        }
    }
}

void Dialog::on_pushButton_clicked()
{
    marc = 1;
    update();
}


void Dialog::on_pushButton_2_clicked()
{
    marc = 2;
    update();
}


void Dialog::on_pushButton_3_clicked()
{
    marc = 3;
    update();
}


void Dialog::on_pushButton_4_clicked()
{
    colorSeleccionado = QColorDialog::getColor(Qt::white, this, "Selecciona Color");
    if(!colorSeleccionado.isValid())
    {
        colorSeleccionado = Qt::white;
    }
}


void Dialog::on_pushButton_5_clicked()
{
    marc = 4;
    update();
}

