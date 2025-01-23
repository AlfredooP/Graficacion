#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    alpha = 63.4f;
    phi = 30.0F;

    ui->dialAlfa->setValue(alpha);
    ui->dialPhi->setValue(phi);
    ui->lcdAlfa->display(alpha);
    ui->lcdPhi->display(phi);

    //Traslacion
    tX = tY = tZ = 0;

    //Centros del cubo
    cX = 120;
    cY = 50;
    cZ = 50;

    //Escalacion
    fescX=fescY=fescZ=1.0;

    //Rotacion
    rX = rY = rZ = false;
    anguloX = anguloY = anguloZ = 0;        

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
    inicializarPuerto();
    proyeccionCubo();
}

void Widget::asignarCubo()
{
    if(ui->rbCubo->isChecked()){
        Puntos3D cuboBase[] = {{100,50,0,0},{200,50,0,1},{200,150,0,1},
                               {100,150,0,1},{100,50,0,1},{100,50,100,1},
                               {200,50,100,1},{200,150,100,1},{200,150,0,1},
                               {200,50,0,0 },{200,50,100,1},{100,50,100,0},
                               {100,150,100,1},{100,150,0,1},{100,150,100,0},
                               {200,150,100,1}};
        cubo = new Puntos3D[maxsize];
        for(int i = 0; i < maxsize; i++){
            cubo[i] = {0,0,0,0};
        }
        for(int i = 0; i < 16; i++){
            cubo[i] = cuboBase[i];
        }
    }

    if(ui->rbITL->isChecked()){
        Puntos3D letraI[]={{30,30,0,1},{30,60,0,1},{30,30,0,0},{50,30,0,1},{50,60,0,1},
                             {50,30,0,0},{50,30,10,1},{50,60,10,1},{50,30,10,0},{30,30,10,1},
                             {30,30,0,1},{30,30,10,0},{30,60,10,1},{50,60,10,1},{50,60,0,1},
                             {30,60,0,1},{30,60,10,1},//Cubo enmedio
                             {30,60,0,0},{10,60,0,1},{10,60,10,1},
                             {10,60,0,0},{10,80,0,1},{10,80,10,1},{10,80,0,0},{70,80,0,1},
                             {70,60,0,1},{10,60,0,1},{70,60,0,0},{70,60,10,1},{10,60,10,1},
                             {10,80,10,1},{70,80,10,1},{70,80,0,1},{70,80,10,0},{70,60,10,1}, //Cubo superior
                             {10,60,10,0},{10,60,0,0},{30,60,0,0},{30,30,0,0},{10,30,0,1},
                             {10,10,0,1},{70,10,0,1},{70,30,0,1},{10,30,0,1},{10,30,10,1},
                             {10,10,10,1},{10,10,0,1},{10,10,10,0},{70,10,10,1},{70,30,10,1},
                             {10,30,10,1},{70,30,10,0},{70,30,0,1},{70,10,0,0},{70,10,10,1},{110,10,10,0},

                             {110,10,0,1},{110,60,0,1},{110,10,0,0},{130,10,0,1},{130,60,0,1},
                             {130,10,0,0},{130,10,10,1},{130,60,10,1},{130,10,10,0},{110,10,10,1},
                             {110,10,0,1},{110,10,10,0},{110,60,10,1},{130,60,10,1},{130,60,0,1},
                             {110,60,0,1},{110,60,10,1},{110,60,0,0},{90,60,0,1},{90,60,10,1},
                             {90,60,0,0},{90,80,0,1},{90,80,10,1},{90,80,0,0},{150,80,0,1},
                             {150,60,0,1},{90,60,0,1},{150,60,0,0},{150,60,10,1},{90,60,10,1},
                             {90,80,10,1},{150,80,10,1},{150,80,0,1},{150,80,10,0},{150,60,10,1},
                             {90,60,10,0},{90,60,0,1},{170,60,0,0},

                             {170,30,0,1},{170,80,0,1},{170,30,0,0},{190,30,0,1},{190,80,0,1},
                             {190,30,0,0},{190,30,10,1},{190,80,10,1},{190,30,10,0},{170,30,10,1},
                             {170,30,0,1},{170,30,10,0},{170,80,10,1},{190,80,10,1},{190,80,0,1},
                             {170,80,0,1},{170,80,10,1},//Cubo enmedio
                             {170,80,10,0},{170,80,0,0},{190,80,0,0},{190,30,0,0},{170,30,0,1},
                             {170,10,0,1},{210,10,0,1},{210,30,0,1},{170,30,0,1},{170,30,10,1},
                             {170,10,10,1},{170,10,0,1},{170,10,10,0},{210,10,10,1},{210,30,10,1},
                             {170,30,10,1},{210,30,10,0},{210,30,0,1},{210,10,0,0},{210,10,10,1}};//Cubo inferior
        cubo = new Puntos3D[maxsize];
        for(int i = 0; i < maxsize; i++){
            cubo[i] = {0,0,0,0};
        }
        for(int i = 0; i < maxsize; i++){
            cubo[i] = letraI[i];
        }
    }

    // //if(ui->r->isChecked()){
    //     Puntos3D letraT[]={{110,10,0,1},{110,60,0,1},{110,10,0,0},{130,10,0,1},{130,60,0,1},
    //                          {130,10,0,0},{130,10,10,1},{130,60,10,1},{130,10,10,0},{110,10,10,1},
    //                          {110,10,0,1},{110,10,10,0},{110,60,10,1},{130,60,10,1},{130,60,0,1},
    //                          {110,60,0,1},{110,60,10,1},{110,60,0,0},{90,60,0,1},{90,60,10,1},
    //                          {90,60,0,0},{90,80,0,1},{90,80,10,1},{90,80,0,0},{150,80,0,1},
    //                          {150,60,0,1},{90,60,0,1},{150,60,0,0},{150,60,10,1},{90,60,10,1},
    //                          {90,80,10,1},{150,80,10,1},{150,80,0,1},{150,80,10,0},{150,60,10,1},
    //                          {90,60,10,0},{90,60,0,1},{170,30,0,0}};
    //     cubo = new Puntos3D[maxsize];
    //     for(int i = 0; i < maxsize; i++){
    //         cubo[i] = {0,0,0,0};
    //     }
    //     for(int i = 0; i < 38; i++){
    //         cubo[i] = letraT[i];
    //     }


    // //if(ui->rbLetraL->isChecked()){
    //     Puntos3D letraL[]={{170,30,0,1},{170,80,0,1},{170,30,0,0},{190,30,0,1},{190,80,0,1},
    //                          {190,30,0,0},{190,30,10,1},{190,80,10,1},{190,30,10,0},{170,30,10,1},
    //                          {170,30,0,1},{170,30,10,0},{170,80,10,1},{190,80,10,1},{190,80,0,1},
    //                          {170,80,0,1},{170,80,10,1},//Cubo enmedio
    //                          {170,80,10,0},{170,80,0,0},{190,80,0,0},{190,30,0,0},{170,30,0,1},
    //                          {170,10,0,1},{210,10,0,1},{210,30,0,1},{170,30,0,1},{170,30,10,1},
    //                          {170,10,10,1},{170,10,0,1},{170,10,10,0},{210,10,10,1},{210,30,10,1},
    //                          {170,30,10,1},{210,30,10,0},{210,30,0,1},{210,10,0,0},{210,10,10,1}};
    //     cubo = new Puntos3D[maxsize];
    //     for(int i = 0; i < maxsize; i++){
    //         cubo[i] = {0,0,0,0};
    //     }
    //     for(int i = 0; i < 37; i++){
    //         cubo[i] = letraL[i];
    //     }


    inicializarPuerto();
    ancho = this->size().width() - this->ui->widget->size().width();
}

void Widget::proyeccionCubo()
{
    canvas->setPen(QPen(QColor(200,30,30),3));

    //Eje X
    canvas->drawLine(0, size().height() - 1, ancho, size().height() - 1);

    //Eje Y
    canvas->drawLine(1, 0, 1, size().height());

    //Eje Z
    int zx1 = 0;
    int zy1 = 0;
    int zx2 = ancho * cos(radianes(phi));
    int zy2 = ancho * sin(qDegreesToRadians(phi));

    int x1, y1, x2, y2;
    mapeo.mapear(zx1, zy1, x1, y1, L, M);
    mapeo.mapear(zx2, zy2, x2, y2, L, M);

    canvas->drawLine(x1, y1, x2, y2);

    //Traslacion
    for(int i = 0; i < maxsize; i ++)
    {
        if(cubo[i].opcion)
            lineTo3D(cubo[i].x + tX, cubo[i].y + tY,cubo[i].z + tZ, radianes(alpha), qDegreesToRadians(phi), i);
        else
            moveTo3D(cubo[i].x + tX, cubo[i].y + tY,cubo[i].z + tZ, radianes(alpha), qDegreesToRadians(phi), i);

    }

    //Traslacion y escalacion
    if(ui->rbEscalacion->isChecked()){
        for(int i = 0 ; i < maxsize; i++)
        {
            //Regresar a su posicion, llevar al origen, escalar
            int xesc = cX + (cubo[i].x - cX) * fescX;
            int yesc = cY + (cubo[i].y - cY) * fescY;
            int zesc = cZ + (cubo[i].z - cZ) * fescZ;
            if(cubo[i].opcion)
                lineTo3D(xesc + tX, yesc + tY, zesc + tZ, radianes(alpha), qDegreesToRadians(phi), i);
            else
                moveTo3D(xesc + tX, yesc + tY, zesc + tZ, radianes(alpha), qDegreesToRadians(phi), i);
        }
    }

    //Rotacion con respecto a un eje
    if(ui->rbRotacion->isChecked()){
        for(int i = 0; i < maxsize; i++){
            int x = cubo[i].x;
            int y = cubo[i].y;
            int z = cubo[i].z;

            if(rX)
            {
                x = cubo[i].x;
                y = qRound((cY+(cubo[i].y-cY)*cos(radianes(anguloX))+(cubo[i].z-cZ)*sin(radianes(anguloX))));
                z = qRound((cZ+(-(cubo[i].y-cY)*sin(radianes(anguloX)))+(cubo[i].z-cZ)*cos(radianes(anguloX))));

            }

            if(rY)
            {
                y = cubo[i].y;
                x = qRound((cX+(cubo[i].x-cX)*cos(radianes(anguloY))-(cubo[i].z-cZ)*sin(radianes(anguloY))));
                z = qRound((cZ+(cubo[i].x-cX)*sin(radianes(anguloY))+(cubo[i].z-cZ)*cos(radianes(anguloY))));
            }

            if(rZ){
                z = cubo[i].z;
                x = qRound((cX+(cubo[i].x-cX)*cos(radianes(anguloY))-(cubo[i].y-cY)*sin(radianes(anguloZ))));
                y = qRound((cZ+(cubo[i].x-cX)*sin(radianes(anguloY))+(cubo[i].y-cY)*cos(radianes(anguloZ))));
            }


            if(cubo[i].opcion)
                lineTo3D(x + tX, y + tY, z + tZ, radianes(alpha), qDegreesToRadians(phi), i);
            else
                moveTo3D(x + tX, y + tY, z + tZ, radianes(alpha), qDegreesToRadians(phi), i);

        }
    }
    canvas->setPen(QPen(QColor(255,255,255),3));
    dibujarCubo();
    canvas->end();
}

void Widget::dibujarCubo()
{
    for(int i = 0; i < maxsize-1; i++)
        canvas->drawLine(points[i].x(),points[i].y(),points[i+1].x(),points[i+1].y());
}

void Widget::inicializarPuerto()
{
    mapeo.ventana(0,0, size().width()-ancho, size().height());
    mapeo.puertoVision(0,0, size().width()-ancho, size().height());
    L = 0;
    M = size().height();
}

void Widget::lineTo3D(int x, int y, int z, float alpha, float phi, int indice)
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

void Widget::moveTo3D(int x, int y, int z, float alpha, float phi, int indice)
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
    if(event->key() == Qt::Key_D)
        tX += 5;
    if(event->key() == Qt::Key_A)
        tX -= 5;
    if(event->key() == Qt::Key_W)
        tY += 5;
    if(event->key() == Qt::Key_S)
        tY -= 5;
    if(event->key() == Qt::Key_Q)
        tZ += 5;
    if(event->key() == Qt::Key_E)
        tZ -= 5;

    //escalacion
    if(event->key()==Qt::Key_M)
        fescX += 0.1;
    if(event->key()==Qt::Key_N)
        fescX -= 0.1;
    if(event->key()==Qt::Key_K)
        fescY += 0.1;
    if(event->key()==Qt::Key_L)
        fescY -= 0.1;
    if(event->key()==Qt::Key_P)
        fescZ += 0.1;
    if(event->key()==Qt::Key_O)
        fescZ -= 0.1;

    //Rotacion
    if(event->key() == Qt::Key_Plus){
        if(ui->rbEjeX->isChecked()){
            anguloX += 5; rX = true; rY = false; rZ = false;
        }
        if(ui->rbEjeY->isChecked()){
            anguloY += 5; rX = false; rY = true; rZ = false;
        }
        if(ui->rbEjeZ->isChecked()){
            anguloZ += 5; rX = false; rY = false; rZ = true;
        }
    }
    if(event->key()==Qt::Key_Minus){
        if(ui->rbEjeX->isChecked()){
            anguloX -= 5; rX = true; rY = false; rZ = false;
        }
        if(ui->rbEjeY->isChecked()){
            anguloY -= 5; rX = false; rY = true; rZ = false;
        }
        if(ui->rbEjeZ->isChecked()){
            anguloZ -= 5; rX = false; rY = false; rZ = true;
        }
    }
    update();
}


void Widget::on_dialAlfa_sliderMoved(int position)
{
    alpha = position;
    ui->lcdAlfa->display(position);
    inicializarPuerto();
    update();
}


void Widget::on_dialPhi_valueChanged(int value)
{
    ui->lcdPhi->display(phi = value);
    inicializarPuerto();
    update();
}


void Widget::on_rbITL_clicked()
{
    asignarCubo();
    repaint();
}


void Widget::on_rbCubo_clicked()
{
    asignarCubo();
    repaint();
}

