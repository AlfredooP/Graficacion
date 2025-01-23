#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);    
    asignarFigura();
    teclado = ' ';
    timer1 = new QTimer();
    connect(timer1, SIGNAL(timeout()), this, SLOT(rotarAnimacion1()));

    timer2 = new QTimer();
    connect(timer2, SIGNAL(timeout()), this, SLOT(rotarAnimacion2()));


}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)

    canvas = new QPainter(this);
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
    Fig[0][0] = 10; Fig[0][1]=10; Fig[0][2]=1;
    Fig[1][0] = 30; Fig[1][1]=10; Fig[1][2]=1;
    Fig[2][0] = 20; Fig[2][1]=30; Fig[2][2]=1;
    Fig[3][0] = 10; Fig[3][1]=10; Fig[3][2]=1;

    //Dinosaurio
    // Fig[0][0] = 0; Fig[0][1] = 0; Fig[0][2] = 1;
    // Fig[1][0] = 0; Fig[1][1] = 8; Fig[1][2] = 1;
    // Fig[2][0] = 1; Fig[2][1] = 8; Fig[2][2] = 1;
    // Fig[3][0] = 1; Fig[3][1] = 10; Fig[3][2] = 1;
    // Fig[4][0] = 2; Fig[4][1] = 10; Fig[4][2] = 1;
    // Fig[5][0] = 2; Fig[5][1] = 11; Fig[5][2] = 1;
    // Fig[6][0] = 3; Fig[6][1] = 11; Fig[6][2] = 1;
    // Fig[7][0] = 3; Fig[7][1] = 12; Fig[7][2] = 1;
    // Fig[8][0] = 5; Fig[8][1] = 12; Fig[8][2] = 1;
    // Fig[9][0] = 5; Fig[9][1] = 11; Fig[9][2] = 1;
    // Fig[10][0] = 6; Fig[10][1] = 11; Fig[10][2] = 1;
    // Fig[11][0] = 6; Fig[11][1] = 10; Fig[11][2] = 1;
    // Fig[12][0] = 7; Fig[12][1] = 10; Fig[12][2] = 1;
    // Fig[13][0] = 7; Fig[13][1] = 9; Fig[13][2] = 1;
    // Fig[14][0] = 8; Fig[14][1] = 9; Fig[14][2] = 1;
    // Fig[15][0] = 8; Fig[15][1] = 8; Fig[15][2] = 1;
    // Fig[16][0] = 9; Fig[16][1] = 8; Fig[16][2] = 1;
    // Fig[17][0] = 9; Fig[17][1] = 3; Fig[17][2] = 1;
    // Fig[18][0] = 12; Fig[18][1] = 3; Fig[18][2] = 1;
    // Fig[19][0] = 12; Fig[19][1] = 2; Fig[19][2] = 1;
    // Fig[20][0] = 11; Fig[20][1] = 2; Fig[20][2] = 1;
    // Fig[21][0] = 11; Fig[21][1] = 3; Fig[21][2] = 1;
    // Fig[22][0] = 9; Fig[22][1] = 3; Fig[22][2] = 1;
    // Fig[23][0] = 9; Fig[23][1] = 1; Fig[23][2] = 1;
    // Fig[24][0] = 10; Fig[24][1] = 1; Fig[24][2] = 1;
    // Fig[25][0] = 10; Fig[25][1] = 0; Fig[25][2] = 1;
    // Fig[26][0] = 18; Fig[26][1] = 0; Fig[26][2] = 1;
    // Fig[27][0] = 18; Fig[27][1] = 1; Fig[27][2] = 1;
    // Fig[28][0] = 19; Fig[28][1] = 1; Fig[28][2] = 1;
    // Fig[29][0] = 19; Fig[29][1] = 6; Fig[29][2] = 1;
    // Fig[30][0] = 14; Fig[30][1] = 6; Fig[30][2] = 1;
    // Fig[31][0] = 14; Fig[31][1] = 7; Fig[31][2] = 1;
    // Fig[32][0] = 17; Fig[32][1] = 7; Fig[32][2] = 1;
    // Fig[33][0] = 17; Fig[33][1] = 8; Fig[33][2] = 1;
    // Fig[34][0] = 13; Fig[34][1] = 8; Fig[34][2] = 1;
    // Fig[35][0] = 13; Fig[35][1] = 9; Fig[35][2] = 1;
    // Fig[36][0] = 15; Fig[36][1] = 9; Fig[36][2] = 1;
    // Fig[37][0] = 15; Fig[37][1] = 11; Fig[37][2] = 1;
    // Fig[38][0] = 14; Fig[38][1] = 11; Fig[38][2] = 1;
    // Fig[39][0] = 14; Fig[39][1] = 10; Fig[39][2] = 1;
    // Fig[40][0] = 13; Fig[40][1] = 10; Fig[40][2] = 1;
    // Fig[41][0] = 13; Fig[41][1] = 15; Fig[41][2] = 1;
    // Fig[42][0] = 12; Fig[42][1] = 15; Fig[42][2] = 1;
    // Fig[43][0] = 12; Fig[43][1] = 16; Fig[43][2] = 1;
    // Fig[44][0] = 11; Fig[44][1] = 16; Fig[44][2] = 1;
    // Fig[45][0] = 11; Fig[45][1] = 17; Fig[45][2] = 1;
    // Fig[46][0] = 10; Fig[46][1] = 17; Fig[46][2] = 1;
    // Fig[47][0] = 10; Fig[47][1] = 21; Fig[47][2] = 1;
    // Fig[48][0] = 11; Fig[48][1] = 21; Fig[48][2] = 1;
    // Fig[49][0] = 11; Fig[49][1] = 22; Fig[49][2] = 1;
    // Fig[50][0] = 9; Fig[50][1] = 22; Fig[50][2] = 1;
    // Fig[51][0] = 9; Fig[51][1] = 19; Fig[51][2] = 1;
    // Fig[52][0] = 8; Fig[52][1] = 19; Fig[52][2] = 1;
    // Fig[53][0] = 8; Fig[53][1] = 18; Fig[53][2] = 1;
    // Fig[54][0] = 7; Fig[54][1] = 18; Fig[54][2] = 1;
    // Fig[55][0] = 7; Fig[55][1] = 19; Fig[55][2] = 1;
    // Fig[56][0] = 6; Fig[56][1] = 19; Fig[56][2] = 1;
    // Fig[57][0] = 6; Fig[57][1] = 20; Fig[57][2] = 1;
    // Fig[58][0] = 5; Fig[58][1] = 20; Fig[58][2] = 1;
    // Fig[59][0] = 5; Fig[59][1] = 21; Fig[59][2] = 1;
    // Fig[60][0] = 6; Fig[60][1] = 21; Fig[60][2] = 1;
    // Fig[61][0] = 6; Fig[61][1] = 22; Fig[61][2] = 1;
    // Fig[62][0] = 4; Fig[62][1] = 22; Fig[62][2] = 1;
    // Fig[63][0] = 4; Fig[63][1] = 17; Fig[63][2] = 1;
    // Fig[64][0] = 3; Fig[64][1] = 17; Fig[64][2] = 1;
    // Fig[65][0] = 3; Fig[65][1] = 16; Fig[65][2] = 1;
    // Fig[66][0] = 2; Fig[66][1] = 16; Fig[66][2] = 1;
    // Fig[67][0] = 2; Fig[67][1] = 15; Fig[67][2] = 1;
    // Fig[68][0] = 1; Fig[68][1] = 15; Fig[68][2] = 1;
    // Fig[69][0] = 1; Fig[69][1] = 14; Fig[69][2] = 1;
    // Fig[70][0] = 0; Fig[70][1] = 14; Fig[70][2] = 1;
    // Fig[71][0] = 0; Fig[71][1] = 8; Fig[71][2] = 1;
    //  Fig[72][0] = 0; Fig[72][1] = 0; Fig[72][2] = 1;

    //Respaldar los puntos
    for(int i = 0; i < MAXRENG; i++)
    {
        for(int j = 0 ; j < 3; j++)
            FigAux[i][j] = Fig[i][j];
    }

    ancho = this->size().width() - ui->widget->size().width();
    centroX = ancho/2;
    centroY = size().height()/2;
    tY = tX = 0;
}

void Dialog::dibujarFiguraMapeada()
{
    Mapeo dibujo;

    QPen pen(QColor(12, 24, 255),3);
    canvas->setPen(pen);

    //Dibujar los cuatro cuadrantes
    canvas->drawLine(ancho/2, 0, ancho/2, size().height());
    canvas->drawLine(0, size().height()/2, ancho, size().height()/2);

    //Escalacion 1:1
    dibujo.ventana(0, 0, ancho, size().height());
    dibujo.puertoVision(0, 0, ancho, size().height());

    //Origen en el centro
    int L = centroX;
    int M = centroY;

    canvas->setPen(QColor(255, 255, 255));

    int x1, y1, x2, y2;
    for(int i = 0; i < MAXRENG -1; i++){
        dibujo.mapear(Fig[i][0], Fig[i][1], x1, y1, L, M);
        dibujo.mapear(Fig[i+1][0], Fig[i+1][1], x2, y2, L, M);
        canvas->drawLine(x1, y1, x2, y2);
    }
}

void Dialog::keyPressEvent(QKeyEvent *evento)
{
    if(evento->key() == Qt::Key_D)
        this->on_btnDerecha_clicked();
    if(evento->key() == Qt::Key_A)
        this->on_btnIzquierda_clicked();
    if(evento->key() == Qt::Key_W)
        this->on_btnArriba_clicked();
    if(evento->key() == Qt::Key_S)
        this->on_btnAbajo_clicked();
    if(evento->key() == Qt::Key_E)
        teclado = 'E';
    if(evento->key() == Qt::Key_P)
        teclado = 'P';
    if(evento->key() == Qt::Key_R)
        teclado = 'R';
    if(teclado == 'E'){
        if(evento->key() == Qt::Key_X){
            ui->sbSX->setValue(ui->sbSX->value() + 1);
            this->on_btnEscalar_clicked();
        }
        if(evento->key() == Qt::Key_Y){
            ui->sbSX->setValue(ui->sbSY->value() + 1);
            this->on_btnEscalar_clicked();
        }
    }
    if(teclado == 'P'){
        if(evento->key() == Qt::Key_X){
            ui->sbSX->setValue(ui->sbEPFX->value() + 1);
            this->on_btnEscalarPF_clicked();
        }
        if(evento->key() == Qt::Key_Y){
            ui->sbSX->setValue(ui->sbEPFY->value() + 1);
            this->on_btnEscalarPF_clicked();
        }
    }
    if(teclado == 'R'){
        if(evento->key() == Qt::Key_X){
            ui->sbSX->setValue(ui->sbPfxR->value() + 1);
            this->on_btnRotarPP_clicked();
        }
        if(evento->key() == Qt::Key_Y){
            ui->sbSX->setValue(ui->sbPfyR->value() + 1);
            this->on_btnRotarPP_clicked();
        }
    }

}

void Dialog::trasladar(int Tx, int Ty)
{
    Matrix fig, id, figTransf;
    fig.Inicializa(4,3);
    id.Inicializa(3,3);
    figTransf.Inicializa(4,3);
    for(int i = 0; i < fig.numRen(); i++)
        for(int j = 0; j < fig.numCol(); j++)
            fig.SET(i,j, Fig[i][j]);

    figTransf.traslacion(fig, id, Tx, Ty);
    for(int r = 0; r < figTransf.numRen(); r ++)
        for(int c = 0; c < figTransf.numCol(); c++)
            Fig[r][c] = figTransf.GET(r,c);

    update();
}

void Dialog::escalar(float sX, float sY)
{
    Matrix fig, id, figTransf;
    fig.Inicializa(4,3);
    id.Inicializa(3,3);
    figTransf.Inicializa(4,3);
    for(int i = 0; i < fig.numRen(); i++)
        for(int j = 0; j < fig.numCol(); j++)
            fig.SET(i,j, Fig[i][j]);

    figTransf.escalacion(fig,id,sX,sY);
    for(int r = 0; r < figTransf.numRen(); r ++)
        for(int c = 0; c < figTransf.numCol(); c++)
            Fig[r][c] = figTransf.GET(r,c);

    update();
}

void Dialog::escalarPuntoFijo(float sX, float sY, float pfX, float pfY)
{
    Matrix fig, id, figTransf;
    fig.Inicializa(4,3);
    id.Inicializa(3,3);
    figTransf.Inicializa(4,3);
    for(int i = 0; i < fig.numRen(); i++)
        for(int j = 0; j < fig.numCol(); j++)
            fig.SET(i,j, Fig[i][j]);

    figTransf.escalacionPuntoFijo(fig,id,sX,sY,pfX,pfY);
    for(int r = 0; r < figTransf.numRen(); r ++)
        for(int c = 0; c < figTransf.numCol(); c++)
            Fig[r][c] = figTransf.GET(r,c);

    repaint();

}

void Dialog::rotar(float angulo)
{
    Matrix fig, id, figTransf;
    fig.Inicializa(4,3);
    id.Inicializa(3,3);
    figTransf.Inicializa(4,3);
    for(int i = 0; i < fig.numRen(); i++)
        for(int j = 0; j < fig.numCol(); j++)
            fig.SET(i,j, Fig[i][j]);

    figTransf.rotacion(fig, id, angulo);
    for(int r = 0; r < figTransf.numRen(); r ++)
        for(int c = 0; c < figTransf.numCol(); c++)
            Fig[r][c] = figTransf.GET(r,c);

    repaint();
}

void Dialog::rotarPuntoPivote(float angulo, float pfX, float pfY)
{
    Matrix fig, id, figRes;
    fig.Inicializa(4,3);
    id.Inicializa(3,3);
    figRes.Inicializa(4,3);
    for(int i = 0; i < fig.numRen(); i++)
        for(int j = 0; j < fig.numCol(); j++)
            fig.SET(i,j, Fig[i][j]);

    figRes.rotacionPuntoPivote(fig, id, angulo, pfX, pfY);
    for(int r = 0; r < fig.numRen(); r++)
        for(int c = 0; c < fig.numCol(); c++)
            Fig[r][c] = figRes.GET(r,c);

    update();

}

void Dialog::rotarAnimacion1()
{
    static int angulo = 0;
    static int cont = 0;
    if(cont <= 8)
    {
        angulo = 45;
        if( cont == 8)
        {
            angulo = 0;
            cont = 0;
        }
        double pfx = 20;
        double pfy = 30;
        rotarPuntoPivote(angulo, pfx, pfy);
        cont++;
    }
}

void Dialog::rotarAnimacion2()
{
    static bool dir = 1;// true;
    static int angulo = 0;
    static int cont = 0;
    if(cont <= 9 && dir == 1 ) // true)
    {
        angulo = 45;
        double ppx = 10;  //ROTAR FUERA DE LOS PUNTOS DEL OBJETO
        double ppy = 10;
        rotarPuntoPivote(angulo,ppx,ppy);
        cont++;
        if(cont == 9)
            angulo = cont = dir = 0;
    }
    if(!dir)
    {
        angulo = -45;
        double ppx = 50;
        double ppy = 50;
        rotarPuntoPivote(angulo, ppx, ppy);
        cont++;
        if(cont == 9)
        {
            angulo = cont = 0;
            dir = 1;
            this->on_btnReset_clicked();
        }


    }
}

void Dialog::on_btnArriba_clicked()
{
    trasladar(0, tX + ui->sbTX->value());
}


void Dialog::on_btnIzquierda_clicked()
{
    trasladar(tY - ui->sbTY->value(), 0);
}


void Dialog::on_btnDerecha_clicked()
{
    trasladar(tY + ui->sbTY->value(), 0);
}


void Dialog::on_btnAbajo_clicked()
{    
    trasladar(0, tX - ui->sbTX->value());
}


void Dialog::on_cbTeclado_clicked(bool checked)
{
    if(checked)
        ui->widget->setEnabled(false);
    else        
        ui->widget->setEnabled(true);

}

void Dialog::on_btnReset_clicked()
{
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 3; j++)
            Fig[i][j] = FigAux[i][j];
    tX = tY = 0;
    update();
}

void Dialog::on_btnEscalar_clicked()
{
    double sX = ui->sbSX->value();
    double sY = ui->sbSY->value();
    escalar(sX,sY);
    update();
}

void Dialog::on_btnEscalarPF_clicked()
{
    double sX = ui->sbSX->value();
    double sY = ui->sbSY->value();
    double pfX = ui->sbEPFX->value();
    double pfY = ui->sbEPFY->value();
    escalarPuntoFijo(sX, sY, pfX, pfY);
}


void Dialog::on_btnRotar_clicked()
{
    double angulo = ui->sbAngulo->value();
    rotar(angulo);

}


void Dialog::on_btnRotarPP_clicked()
{
    double angulo = ui->sbAngulo->value();
    double pfX = ui->sbEPFX->value();
    double pfY = ui->sbEPFY->value();
    rotarPuntoPivote(angulo, pfX, pfY);
}




void Dialog::on_btnAnimacion1_clicked()
{
    timer1->start(30);
    timer2->stop();
}


void Dialog::on_btnAnimacion2_clicked()
{
    timer1->stop();
    timer2->start(30);
}

