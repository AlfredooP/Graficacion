#include "dialog.h"
#include "ui_dialog.h"

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

    if(marc ==1)
    {
        canvas = new QPainter(this);
        int i;
        ejeX[1] = this->width() /4;
        ejeX[4097] = 3*this->width()/4;
        ejeY[1] = ejeY[4097] = 2*this->height()/3;
        graficos->lineaDDA(ejeX[1], ejeY[1], ejeX[4097], ejeY[4097], canvas, Qt::blue);
        for(i = 1; i <= 13; i++)
        {
            generarDragon(i);
            paso /= 2;
        }
        canvas->end();
    }
    marc = 0;


}

void Dialog::generarDragon(int color)
{
    graficos=new Graficos();
    int i, j, dx, dy;
    j = paso/2;
    for(i = 1; i <= 4096; i += paso)
    {
        dx = ejeX[paso+i] - ejeX[i];
        dy = ejeY[paso+i] - ejeY[i];
        signo *= -1;
        ejeX[i+j] = ejeX[i] + (dx+(dy*signo));
        ejeY[i+j] = ejeY[i] + (dy-(dx*signo));
        if(color != 0)
        {
            graficos->lineaDDA(ejeX[i], ejeY[i], ejeX[i+j], ejeY[i+j], canvas, color);
            graficos->lineaDDA(ejeX[i+j], ejeY[i+j], ejeX[i+paso], ejeY[i+paso], canvas, color);
        }
    }
}

void Dialog::on_pushButton_clicked()
{
    marc=1;
    update();
}
