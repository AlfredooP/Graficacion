#include "dialog.h"
#include "ui_dialog.h"
#include <iostream>
using namespace std;
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    cactus = true;
    cont = 0;
    tY = tX = 0;
    color = Qt::yellow;

    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(animacionCactus()));
    timer->start(300);

    asignarFigura();
    rotar(180);
    trasladar(0,22);

    asignarCactus();
    rotarPuntoPivote(180, 1, 1);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)

    canvas = new QPainter(this);


    dibujarCactus();

    dibujarFiguraMapeada();

    canvas->end();
}

void Dialog::asignarFigura()
{    
    //Triangulo rectangulo
    // Fig[0][0] = 10; Fig[0][1] = 10; Fig[0][2] = 1;
    // Fig[1][0] = 30; Fig[1][1] = 10; Fig[1][2] = 1;
    // Fig[2][0] = 10; Fig[2][1] = 30; Fig[2][2] = 1;
    // Fig[3][0] = 10; Fig[3][1] = 10; Fig[3][2] = 1;

    //Trinagulo equilatero
    // Fig[0][0] = 10; Fig[0][1] = 10; Fig[0][2] = 1;
    // Fig[1][0] = 30; Fig[1][1] = 10; Fig[1][2] = 1;
    // Fig[2][0] = 20; Fig[2][1] = 30; Fig[2][2] = 1;
    // Fig[3][0] = 10; Fig[3][1] = 10; Fig[3][2] = 1;

    //Dinosaurio
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
        Fig[i][0] *= 1.7;
        Fig[i][1] *= 1.7;
    }

}

void Dialog::asignarCactus()
{
    //Cactus
    Fig1[0][0] = 0; Fig1[0][1] = 5; Fig1[0][2] = 1;
    Fig1[1][0] = 0; Fig1[1][1] = 5; Fig1[1][2] = 1;
    Fig1[2][0] = 1; Fig1[2][1] = 5; Fig1[2][2] = 1;
    Fig1[3][0] = 1; Fig1[3][1] = 4; Fig1[3][2] = 1;
    Fig1[4][0] = 2; Fig1[4][1] = 4; Fig1[4][2] = 1;
    Fig1[5][0] = 2; Fig1[5][1] = 5; Fig1[5][2] = 1;
    Fig1[6][0] = 3; Fig1[6][1] = 5; Fig1[6][2] = 1;
    Fig1[7][0] = 3; Fig1[7][1] = 9; Fig1[7][2] = 1;
    Fig1[8][0] = 4; Fig1[8][1] = 9; Fig1[8][2] = 1;
    Fig1[9][0] = 4; Fig1[9][1] = 1; Fig1[9][2] = 1;
    Fig1[10][0] = 5; Fig1[10][1] = 1; Fig1[10][2] = 1;
    Fig1[11][0] = 5; Fig1[11][1] = 0; Fig1[11][2] = 1;
    Fig1[12][0] = 6; Fig1[12][1] = 0; Fig1[12][2] = 1;
    Fig1[13][0] = 6; Fig1[13][1] = 1; Fig1[13][2] = 1;
    Fig1[14][0] = 7; Fig1[14][1] = 1; Fig1[14][2] = 1;
    Fig1[15][0] = 7; Fig1[15][1] = 9; Fig1[15][2] = 1;
    Fig1[16][0] = 8; Fig1[16][1] = 9; Fig1[16][2] = 1;
    Fig1[17][0] = 8; Fig1[17][1] = 5; Fig1[17][2] = 1;
    Fig1[18][0] = 9; Fig1[18][1] = 5; Fig1[18][2] = 1;
    Fig1[19][0] = 9; Fig1[19][1] = 4; Fig1[19][2] = 1;
    Fig1[20][0] = 10; Fig1[20][1] = 4; Fig1[20][2] = 1;
    Fig1[21][0] = 10; Fig1[21][1] = 5; Fig1[21][2] = 1;
    Fig1[22][0] = 11; Fig1[22][1] = 5; Fig1[22][2] = 1;
    Fig1[23][0] = 11; Fig1[23][1] = 11; Fig1[23][2] = 1;
    Fig1[24][0] = 10; Fig1[24][1] = 11; Fig1[24][2] = 1;
    Fig1[25][0] = 10; Fig1[25][1] = 12; Fig1[25][2] = 1;
    Fig1[26][0] = 7; Fig1[26][1] = 12; Fig1[26][2] = 1;
    Fig1[27][0] = 7; Fig1[27][1] = 17; Fig1[27][2] = 1;
    Fig1[28][0] = 4; Fig1[28][1] = 17; Fig1[28][2] = 1;
    Fig1[29][0] = 4; Fig1[29][1] = 12; Fig1[29][2] = 1;
    Fig1[30][0] = 1; Fig1[30][1] = 12; Fig1[30][2] = 1;
    Fig1[31][0] = 1; Fig1[31][1] = 11; Fig1[31][2] = 1;
    Fig1[32][0] = 0; Fig1[32][1] = 11; Fig1[32][2] = 1;
    Fig1[33][0] = 0; Fig1[33][1] = 5; Fig1[33][2] = 1;

    // for(int i = 0; i < 34; i++){
    //     Fig1[i][0] *= escCactus;
    //     Fig1[i][1] *= escCactus;
    // }
}

void Dialog::dibujarCactus()
{
    // QPen pen(QColor(255, 255, 255),1);
    // canvas->setPen(pen);

    // for(int i = 0; i < 33; i++){
    //     canvas->drawLine(80 + Fig1[i][0], 505 + Fig1[i][1], 80 + Fig1[i+1][0], 505 + Fig1[i+1][1]);
    // }
    // update();

    Mapeo dibujo;

    QPen pen(QColor(30, 200, 30),1);
    canvas->setPen(pen);

    //Escalacion 1:1
    dibujo.ventana(0, 0, size().width(), size().height());
    dibujo.puertoVision(0, 0, size().width(), size().height());

    //Origen en el centro
    int L = 510;
    int M = 150;

    int x1, y1, x2, y2;
    for(int i = 0; i < 33; i++){
        dibujo.mapear(Fig1[i][0], Fig1[i][1], x1, y1, L, M);
        dibujo.mapear(Fig1[i+1][0], Fig1[i+1][1], x2, y2, L, M);
        canvas->drawLine(x1, y1, x2, y2);
    }

    //Origen en el centro
    L = 650;
    M = 450;

    for(int i = 0; i < 33; i++){
        dibujo.mapear(Fig1[i][0], Fig1[i][1], x1, y1, L, M);
        dibujo.mapear(Fig1[i+1][0], Fig1[i+1][1], x2, y2, L, M);
        canvas->drawLine(x1, y1, x2, y2);
    }

    L = 310;
    M = 600;

    for(int i = 0; i < 33; i++){
        dibujo.mapear(Fig1[i][0], Fig1[i][1], x1, y1, L, M);
        dibujo.mapear(Fig1[i+1][0], Fig1[i+1][1], x2, y2, L, M);
        canvas->drawLine(x1, y1, x2, y2);
    }
}


void Dialog::dibujarFiguraMapeada()
{
    Mapeo dibujo;

    QPen pen(color,1);
    canvas->setPen(pen);

    //Escalacion 1:1
    dibujo.ventana(0, 0, size().width(), size().height());
    dibujo.puertoVision(0, 0, size().width(), size().height());

    //Origen en el centro
    int L = 210;
    int M = 50;

    int x1, y1, x2, y2;
    for(int i = 0; i < MAXRENG-1; i++){
        dibujo.mapear(Fig[i][0], Fig[i][1], x1, y1, L, M);
        dibujo.mapear(Fig[i+1][0], Fig[i+1][1], x2, y2, L, M);
        canvas->drawLine(x1, y1, x2, y2);
    }
}

void Dialog::animacionCactus()
{
    if(cactus){
        if(cont  < 2){
            escalar(1.5, 1.5);
            cont++;
        }
        else{
            cactus = false;
        }
    }
    else{
        asignarCactus();
        rotarPuntoPivote(180, 1, 1);
        cactus = true;
        cont = 0;
    }

}

void Dialog::keyPressEvent(QKeyEvent *evento)
{
    // for(int i = 0; i < MAXRENG; i++){
    //     for(int j = 0; j < 3; j++){
    //         if(Fig[i][j] == 20){
    //             ui->label->setText("HAS GANADO");
    //         }
    //     }
    // }

    if(evento->key() == Qt::Key_P){
        QMessageBox::information(nullptr, "Mensaje:", "Has perdido");
        on_btnReset_clicked();

    }
    if(evento->key() == Qt::Key_G){
        QMessageBox::information(nullptr, "Mensaje:", "Has ganado");
        on_btnReset_clicked();
    }
    if(evento->key() == Qt::Key_D){
        trasladar(tY + 5, 0);
    }
    if(evento->key() == Qt::Key_A){
        trasladar(tY - 5, 0);
    }
    if(evento->key() == Qt::Key_S){
        trasladar(0, tX - 5);
    }
    if(evento->key() == Qt::Key_W){
        trasladar(0, tX + 5);
    }
    if(evento->key() == Qt::Key_Plus){
        escalarPuntoFijo(1.1,1.1,0,0);
    }
    if(evento->key() == Qt::Key_Minus){
        escalarPuntoFijo(0.9,0.9,0,0);
    }
}

void Dialog::trasladar(int Tx, int Ty)
{
    Matrix fig, id, figTransf;
    fig.Inicializa(MAXRENG,3);
    id.Inicializa(3,3);
    figTransf.Inicializa(MAXRENG,3);

    for(int i = 0; i < fig.numRen(); i++){
        for(int j = 0; j < fig.numCol(); j++){
            fig.SET(i, j, Fig[i][j]);
        }
    }
    figTransf.traslacion(fig, id, Tx, Ty);
    for(int r = 0; r < figTransf.numRen(); r++){
        for(int c = 0; c < figTransf.numCol(); c++){
            Fig[r][c] = figTransf.GET(r, c);
        }
    }

    update();
}

void Dialog::escalar(float sX, float sY)
{
    Matrix fig, id, figTransf;
    fig.Inicializa(34,3);
    id.Inicializa(3,3);
    figTransf.Inicializa(34,3);

    for(int i = 0; i < fig.numRen(); i++){
        for(int j = 0; j < fig.numCol(); j++){
            fig.SET(i, j, Fig1[i][j]);
        }
    }

    figTransf.escalacion(fig, id, sX, sY);

    for(int r = 0; r < figTransf.numRen(); r++){
        for(int c = 0; c < figTransf.numCol(); c++){
            Fig1[r][c] = figTransf.GET(r, c);
        }
    }

    update();
}

void Dialog::escalarPuntoFijo(float sX, float sY, float pfX, float pfY)
{
    Matrix fig, id, figTransf;
    fig.Inicializa(MAXRENG,3);
    id.Inicializa(3,3);
    figTransf.Inicializa(MAXRENG,3);

    for(int i = 0; i < fig.numRen(); i++){
        for(int j = 0; j < fig.numCol(); j++){
            fig.SET(i, j, Fig[i][j]);
        }
    }

    figTransf.escalacionPuntoFijo(fig, id, sX, sY, pfX, pfY);

    for(int r = 0; r < figTransf.numRen(); r++){
        for(int c = 0; c < figTransf.numRen(); c++){
            Fig[r][c] = figTransf.GET(r, c);
        }
    }

    update();

}

void Dialog::rotar(float angulo)
{
    Matrix fig, id, figTransf;
    fig.Inicializa(MAXRENG,3);
    id.Inicializa(3,3);
    figTransf.Inicializa(MAXRENG,3);

    for(int i = 0; i < fig.numRen(); i++){
        for(int j = 0; j < fig.numCol(); j++){
            fig.SET(i, j, Fig[i][j]);
        }
    }

    figTransf.rotacion(fig, id, angulo);

    for(int r = 0; r < figTransf.numRen(); r++){
        for(int c = 0; c < figTransf.numRen(); c++){
            Fig[r][c] = figTransf.GET(r, c);
        }
    }

    update();
}

void Dialog::rotarPuntoPivote(float angulo, float pfX, float pfY)
{
    Matrix fig, id, figTransf;
    fig.Inicializa(34,3);
    id.Inicializa(3,3);
    figTransf.Inicializa(34,3);

    for(int i = 0; i < fig.numRen(); i++){
        for(int j = 0; j < fig.numCol(); j++){
            fig.SET(i, j, Fig1[i][j]);
        }
    }

    figTransf.rotacionPuntoPivote(fig, id, angulo, pfX, pfY);

    for(int r =0; r < figTransf.numRen(); r++){
        for(int c=0; c < figTransf.numCol(); c++){
            Fig1[r][c]= figTransf.GET(r,c);

        }
    }

    update();

}


void Dialog::on_btnColor_clicked()
{
    color = QColorDialog::getColor(Qt::white, nullptr, "Selecciona color del dinosaurio");
    if(!color.isValid())
    {
        color = Qt::yellow;
    }
}


void Dialog::on_btnReset_clicked()
{
    asignarFigura();
    rotar(180);
    trasladar(0,22);
    update();
}

