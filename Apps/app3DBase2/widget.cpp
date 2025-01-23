#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    alpha = 63.4f;
    phi = 30.0F;

    ui->dialALPHA->setValue(alpha);
    ui->dialPHI->setValue(phi);
    ui->lcdNumberAlpha->display(alpha);
    ui->lcdNumberPHI->display(phi);

    tX = tY = tZ = 0;

    asignarCubo();


}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)
    canvas = new QPainter(this);
    inicializaPuerto();
    proyeccionCubo();

}

void Widget::asignarCubo()
{

    Puntos3D cuboBase[]={{100,50,0,0},{200,50,0,1},{200,150,0,1},
                           {100,150,0,1},{100,50,0,1},{100,50,100,1},
                           {200,50,100,1},{200,150,100,1},{200,150,0,1},
                           {200,50,0,0 },{200,50,100,1},{100,50,100,0},
                           {100,150,100,1},{100,150,0,1},{100,150,100,0},
                           {200,150,100,1}};

    cubo = new Puntos3D[16];
    for(int i = 0; i < 16; i++)
        cubo[i] = cuboBase[i];
    inicializaPuerto();
    ancho = this->size().width() - ui->widget->size().width();

}

void Widget::proyeccionCubo()
{
    canvas->setPen(QPen(Qt::white));
    // eje X
    canvas->drawLine(0,size().height()-1, ancho, size().height()-1);
    // EJE Y
    canvas->drawLine(1,0,1,size().height());
    // DIBUJAR EL EJE Z

    int zx1 = 0;
    int zy1 = 0;
    int zx2 = ancho * cos(radianes(phi));
    int zy2 = ancho * sin(qDegreesToRadians(phi));

    int x1, y1, x2,y2;
    mapeo.mapear(zx1,zy1, x1,y1,L,M);
    mapeo.mapear(zx2,zy2,x2,y2,L,M);

    canvas->drawLine(x1,y1,x2,y2);

    for(int i = 0; i < 16; i ++)
    {
        if(cubo[i].opcion)
            lineto3D(cubo[i].x+tX, cubo[i].y+tY,cubo[i].z+tZ, radianes(alpha),qDegreesToRadians(phi), i );
        else
            moveto3D(cubo[i].x+tX, cubo[i].y+tY,cubo[i].z+tZ, radianes(alpha),qDegreesToRadians(phi), i );

    }

    canvas->setPen(QPen(QColor(255,100,0),3));
    dibujarCubo();
    canvas->end();

}

void Widget::dibujarCubo()
{
    for(int i = 0; i < 15; i++)
        canvas->drawLine(points[i].x(),points[i].y(),points[i+1].x(),points[i+1].y());
}

void Widget::inicializaPuerto()
{
    mapeo.ventana(0,0, size().width()-ancho, size().height());
    mapeo.puertoVision(0,0, size().width()-ancho, size().height());
    L = 0;
    M = size().height();
}

void Widget::lineto3D(int x, int y, int z, float alpha, float phi, int indice)
{
    int xp, yp;
    int longitud;
    float tanalpha;
    if( (tanalpha = tan(alpha)) != 0)
        longitud = (int)(z / tanalpha);
    else
        longitud = 0;

    xp = x + longitud * cos(phi);
    yp = y + longitud * sin(phi);
    int x1, y1;
    mapeo.mapear(xp,yp,x1,y1,L,M);
    points[indice].setX(x1);
    points[indice].setY(y1);
}

void Widget::moveto3D(int x, int y, int z, float alpha, float phi, int indice)
{
    int xp, yp;
    int longitud;
    float tanalpha;
    if( (tanalpha = tan(alpha)) != 0)
        longitud = (int)(z / tanalpha);
    else
        longitud = 0;

    xp = x + longitud * cos(phi);
    yp = y + longitud * sin(phi);
    int x1, y1;
    mapeo.mapear(xp,yp,x1,y1,L,M);
    points[indice].setX(x1);
    points[indice].setY(y1);
}


void Widget::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_1)// CHECAR TECLADO
        tX += 5;
    if(event->key() == Qt::Key_2)
        tX -= 5;
    if(event->key() == Qt::Key_3)
        tY += 5;
    if(event->key() == Qt::Key_4)
        tY -= 5;
    if(event->key() == Qt::Key_9)
        tZ += 5;
    if(event->key() == Qt::Key_0)
        tZ -= 5;

    update();
}

void Widget::on_dialALPHA_sliderMoved(int position)
{

    alpha = position;
    ui->lcdNumberAlpha->display(position);
    inicializaPuerto();
    update();

}


void Widget::on_dialPHI_valueChanged(int value)
{
  //  phi = value;
    ui->lcdNumberPHI->display(phi = value);
  inicializaPuerto();
    repaint();
}

