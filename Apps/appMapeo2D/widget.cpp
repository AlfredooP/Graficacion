#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ancho = this->size().width() - ui->widget->size().width();
    xpVmin = ypVmin = 0;
    xpVmax = ancho;
    ypVmax = this->size().height();
    escala = 1;

    for(int i = 0; i < MAXRENG; i++){
        for(int j = 0; j < 3; j++){
            Fig[i][j] = 0;
        }
    }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)
    canvas = new QPainter(this);
    if(dibujarOrientacionNormal)
        dibujarFiguraOriginal();
    else
        dibujarFiguraMapeada();

    canvas->end();
}

void Widget::asignarFigura()
{    
    if(ui->rbTriangulo->isChecked()){
        Fig[0][0] = 0; Fig[0][1] = 0; Fig[0][2] = 1;
        Fig[1][0] = 30; Fig[1][1] = 0; Fig[1][2] = 1;
        Fig[2][0] = 0; Fig[2][1] = 30; Fig[2][2] = 1;
        Fig[3][0] = 0; Fig[3][1] = 0; Fig[3][2] = 1;

        for(int i = 4; i < MAXRENG-1; i++){
            Fig[i][0] = 0;
            Fig[i][1] = 0;
            Fig[i][2] = 1;
        }

        for(int i = 0; i < MAXRENG-1; i++){
            for(int j = 0; j < 3; j++){
                Fig[i][j] *= 5;
            }
        }
    }
    if(ui->rbEstrella->isChecked()){
        Fig[0][0] = 0; Fig[0][1] = 0; Fig[0][2] = 1;
        Fig[1][0] = 5; Fig[1][1] = 10; Fig[1][2] = 1;
        Fig[2][0] = 10; Fig[2][1] = 0; Fig[2][2] = 1;
        Fig[3][0] = 0; Fig[3][1] = 6; Fig[3][2] = 1;
        Fig[4][0] = 10; Fig[4][1] = 6; Fig[4][2] = 1;
        Fig[5][0] = 0; Fig[5][1] = 0; Fig[5][2] = 1;

        for(int i = 6; i < MAXRENG; i++){
            Fig[i][0] = 0;
            Fig[i][1] = 0;
            Fig[i][2] = 1;
        }

        for(int i = 0; i < MAXRENG-1; i++){
            for(int j = 0; j < 3; j++){
                Fig[i][j] *= 10;
            }
        }
    }
    if(ui->rbDinosaurio->isChecked()){
        Fig[0][0] = 0; Fig[0][1] = 8; Fig[0][2] = 1;
        Fig[1][0] = 0; Fig[1][1] = 8; Fig[1][2] = 1;
        Fig[2][0] = 1; Fig[2][1] = 8; Fig[2][2] = 1;
        Fig[3][0] = 1; Fig[3][1] = 10; Fig[3][2] = 1;
        Fig[4][0] = 2; Fig[4][1] = 10; Fig[4][2] = 1;
        Fig[5][0] = 2; Fig[5][1] = 11; Fig[5][2] = 1;
        Fig[6][0] = 3; Fig[6][1] = 11; Fig[6][2] = 1;
        Fig[7][0] = 3; Fig[7][1] = 12; Fig[7][2] = 1;
        Fig[8][0] = 5; Fig[8][1] = 12; Fig[8][2] = 1;
        Fig[9][0] = 5; Fig[9][1] = 11; Fig[9][2] = 1;
        Fig[10][0] = 6; Fig[10][1] = 11; Fig[10][2] = 1;
        Fig[11][0] = 6; Fig[11][1] = 10; Fig[11][2] = 1;
        Fig[12][0] = 7; Fig[12][1] = 10; Fig[12][2] = 1;
        Fig[13][0] = 7; Fig[13][1] = 9; Fig[13][2] = 1;
        Fig[14][0] = 8; Fig[14][1] = 9; Fig[14][2] = 1;
        Fig[15][0] = 8; Fig[15][1] = 8; Fig[15][2] = 1;
        Fig[16][0] = 9; Fig[16][1] = 8; Fig[16][2] = 1;
        Fig[17][0] = 9; Fig[17][1] = 3; Fig[17][2] = 1;
        Fig[18][0] = 12; Fig[18][1] = 3; Fig[18][2] = 1;
        Fig[19][0] = 12; Fig[19][1] = 2; Fig[19][2] = 1;
        Fig[20][0] = 11; Fig[20][1] = 2; Fig[20][2] = 1;
        Fig[21][0] = 11; Fig[21][1] = 3; Fig[21][2] = 1;
        Fig[22][0] = 9; Fig[22][1] = 3; Fig[22][2] = 1;
        Fig[23][0] = 9; Fig[23][1] = 1; Fig[23][2] = 1;
        Fig[24][0] = 10; Fig[24][1] = 1; Fig[24][2] = 1;
        Fig[25][0] = 10; Fig[25][1] = 0; Fig[25][2] = 1;
        Fig[26][0] = 18; Fig[26][1] = 0; Fig[26][2] = 1;
        Fig[27][0] = 18; Fig[27][1] = 1; Fig[27][2] = 1;
        Fig[28][0] = 19; Fig[28][1] = 1; Fig[28][2] = 1;
        Fig[29][0] = 19; Fig[29][1] = 6; Fig[29][2] = 1;
        Fig[30][0] = 14; Fig[30][1] = 6; Fig[30][2] = 1;
        Fig[31][0] = 14; Fig[31][1] = 7; Fig[31][2] = 1;
        Fig[32][0] = 17; Fig[32][1] = 7; Fig[32][2] = 1;
        Fig[33][0] = 17; Fig[33][1] = 8; Fig[33][2] = 1;
        Fig[34][0] = 13; Fig[34][1] = 8; Fig[34][2] = 1;
        Fig[35][0] = 13; Fig[35][1] = 9; Fig[35][2] = 1;
        Fig[36][0] = 15; Fig[36][1] = 9; Fig[36][2] = 1;
        Fig[37][0] = 15; Fig[37][1] = 11; Fig[37][2] = 1;
        Fig[38][0] = 14; Fig[38][1] = 11; Fig[38][2] = 1;
        Fig[39][0] = 14; Fig[39][1] = 10; Fig[39][2] = 1;
        Fig[40][0] = 13; Fig[40][1] = 10; Fig[40][2] = 1;
        Fig[41][0] = 13; Fig[41][1] = 15; Fig[41][2] = 1;
        Fig[42][0] = 12; Fig[42][1] = 15; Fig[42][2] = 1;
        Fig[43][0] = 12; Fig[43][1] = 16; Fig[43][2] = 1;
        Fig[44][0] = 11; Fig[44][1] = 16; Fig[44][2] = 1;
        Fig[45][0] = 11; Fig[45][1] = 17; Fig[45][2] = 1;
        Fig[46][0] = 10; Fig[46][1] = 17; Fig[46][2] = 1;
        Fig[47][0] = 10; Fig[47][1] = 21; Fig[47][2] = 1;
        Fig[48][0] = 11; Fig[48][1] = 21; Fig[48][2] = 1;
        Fig[49][0] = 11; Fig[49][1] = 22; Fig[49][2] = 1;
        Fig[50][0] = 9; Fig[50][1] = 22; Fig[50][2] = 1;
        Fig[51][0] = 9; Fig[51][1] = 19; Fig[51][2] = 1;
        Fig[52][0] = 8; Fig[52][1] = 19; Fig[52][2] = 1;
        Fig[53][0] = 8; Fig[53][1] = 18; Fig[53][2] = 1;
        Fig[54][0] = 7; Fig[54][1] = 18; Fig[54][2] = 1;
        Fig[55][0] = 7; Fig[55][1] = 19; Fig[55][2] = 1;
        Fig[56][0] = 6; Fig[56][1] = 19; Fig[56][2] = 1;
        Fig[57][0] = 6; Fig[57][1] = 20; Fig[57][2] = 1;
        Fig[58][0] = 5; Fig[58][1] = 20; Fig[58][2] = 1;
        Fig[59][0] = 5; Fig[59][1] = 21; Fig[59][2] = 1;
        Fig[60][0] = 6; Fig[60][1] = 21; Fig[60][2] = 1;
        Fig[61][0] = 6; Fig[61][1] = 22; Fig[61][2] = 1;
        Fig[62][0] = 4; Fig[62][1] = 22; Fig[62][2] = 1;
        Fig[63][0] = 4; Fig[63][1] = 17; Fig[63][2] = 1;
        Fig[64][0] = 3; Fig[64][1] = 17; Fig[64][2] = 1;
        Fig[65][0] = 3; Fig[65][1] = 16; Fig[65][2] = 1;
        Fig[66][0] = 2; Fig[66][1] = 16; Fig[66][2] = 1;
        Fig[67][0] = 2; Fig[67][1] = 15; Fig[67][2] = 1;
        Fig[68][0] = 1; Fig[68][1] = 15; Fig[68][2] = 1;
        Fig[69][0] = 1; Fig[69][1] = 14; Fig[69][2] = 1;
        Fig[70][0] = 0; Fig[70][1] = 14; Fig[70][2] = 1;
        Fig[71][0] = 0; Fig[71][1] = 8; Fig[71][2] = 1;


        for(int i = 0; i < MAXRENG; i++){
            for(int j = 0; j < 3; j++){
                Fig[i][j] *= 10;
            }
        }
    }

    //Puntos para el triangulo en la hoja de maquina
    // Fig[0][0] = 0; Fig[0][1] = 0; Fig[0][2] = 1;
    // Fig[1][0] = 22; Fig[1][1] = 0; Fig[1][2] = 1;
    // Fig[2][0] = 0; Fig[2][1] = 28; Fig[2][2] = 1;
    // Fig[3][0] = 0; Fig[3][1] = 0; Fig[3][2] = 1;    

    //Respaldar los puntos
    for(int i = 0; i < MAXRENG; i++){
        for(int j = 0; j < 3; j++){
            FigAux[i][j] = Fig[i][j];
        }
    }

    centroX = ancho/2;
    centroY = size().height()/2;
}

void Widget::dibujarFiguraOriginal()
{
    QPen pen(QColor(100,200,255),3);
    canvas->setPen(pen);

    //Dibujar los ejes cartesianos
    //canvas->drawLine(0,0,ancho,0);
    //canvas->drawLine(0,0,0,size().height());

    //Dibujar los cuatro cuadrantes
    //canvas->drawLine(ancho/2, 0, ancho/2, size().height());
    //canvas->drawLine(0, size().height()/2, ancho, size().height()/2);

    // canvas->setPen(QColor(255,100,100));

    for(int i = 0; i < MAXRENG-1; i++){
        //canvas->drawLine(Fig[i][0], Fig[i][1], Fig[i+1][0], Fig[i+1][1]);
        canvas->drawLine(Fig[i][0], Fig[i][1], Fig[i+1][0], Fig[i+1][1]);
    }
}

void Widget::dibujarFiguraMapeada()
{
    Mapeo dibujo;

    QPen pen(QColor(200,200,255),3);
    canvas->setPen(pen);    

    //Linea vertical
    //canvas->drawLine(0, 0, 0, size().height());
    //Linea horizontal
    //canvas->drawLine(0, size().height(), ancho, size().height());

    //Dibujar los cuatro cuadrantes
    //canvas->drawLine(ancho/2, 0, ancho/2, size().height());
    //canvas->drawLine(0, size().height()/2, ancho, size().height()/2);

    //Escalacion x0.25
    //dibujo.ventana(0, 0, 10000, 10000);
    //dibujo.puertoVision(0, 0, centroX, centroY);

    //Escalacion 1:1
    //dibujo.ventana(0, 0, ancho, size().height());
    //dibujo.puertoVision(0, 0, ancho, size().height());

    //Escala x10
    //dibujo.ventana(0, 0, 10, 10);
    //dibujo.puertoVision(0, 0, centroX, centroY);

    //dibujo.ventana(0, 0, 10, 10);
    //dibujo.puertoVision(0, 0, 220, 280);

    //Ahora son las variables que definiran el puerto de vision para el zoom, manejarlo como atributos
    //xPvmin proporciona un factor de traslacion
    dibujo.ventana(0, 0, ancho, size().height());
    dibujo.puertoVision(xpVmin, ypVmin, xpVmax, ypVmax);

    //dibujo.puertoVision(140, 110, 360, 390);
    //M = yPvmin + yPvmax

    //Hoja de maquina
    canvas->drawRect(140*escala, 110*escala, 220*escala, 280*escala);

    //Origen en el centro
    int L = centroX;
    int M = centroY;

    if(ui->rbTriangulo->isChecked()){
        L = xpVmax/2 -75*escala;
        M = ypVmax/2 +75*escala;
    }
    if(ui->rbEstrella->isChecked()){
        L = xpVmax/2 -50*escala;
        M = ypVmax/2 +50*escala;
    }
    if(ui->rbDinosaurio->isChecked()){
        L = xpVmax/2 -100*escala;
        M = ypVmax/2 +110*escala;
    }

    //Valores para el origen en la esquina inferior izquierda
    //int L = 0;
    //int M = 500;


    QPen pen2(QColor(255, 255, 0), 3);
    canvas->setPen(pen2);

    int x1, y1, x2, y2;
    for(int i = 0; i < MAXRENG-1; i++){
        dibujo.mapear(Fig[i][0], Fig[i][1], x1, y1, L, M);
        dibujo.mapear(Fig[i+1][0], Fig[i+1][1], x2, y2, L, M);
        canvas->drawLine(x1, y1, x2, y2);
    }
}


void Widget::on_btnNormal_clicked()
{
    asignarFigura();
    dibujarOrientacionNormal = true;
    dibujarMapeado = true;
    repaint();
}


void Widget::on_btnMapeo_clicked()
{
    asignarFigura();
    dibujarOrientacionNormal = false;
    dibujarMapeado = true;
    repaint();
}


void Widget::on_sbEscala_valueChanged(double arg1)
{
    escala = ui->sbEscala->value();
    //xpVmin = -escala;
    //ypVmin = -escala;
    xpVmax = ancho * escala;
    ypVmax = this->size().height() * escala;
    // xpVmin = ancho + escala;
    // ypVmin = this->size().height() + escala;
    repaint();
}
