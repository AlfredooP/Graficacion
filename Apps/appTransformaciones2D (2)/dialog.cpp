#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    asignarFigura();
    timer1 = new QTimer();
    connect(timer1, SIGNAL(timeout()), this, SLOT(rotarAnimacion1()));
   // timer1->start(30);

    timer2 = new QTimer();
    connect(timer2, SIGNAL(timeout()),this, SLOT(rotarAnimacion2()));


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
    //      x                      y.                        h
 /*     Fig[0][0] = 10; Fig[0][1]=10; Fig[0][2]=1;
    Fig[1][0] = 30; Fig[1][1]=10; Fig[1][2]=1;
    Fig[2][0] = 10; Fig[2][1]=30; Fig[2][2]=1;
    Fig[3][0] = 10; Fig[3][1]=10; Fig[3][2]=1;
    */
    Fig[0][0] = 10; Fig[0][1]=10; Fig[0][2]=1;
    Fig[1][0] = 30; Fig[1][1]=10; Fig[1][2]=1;
    Fig[2][0] = 20; Fig[2][1]=30; Fig[2][2]=1;
    Fig[3][0] = 10; Fig[3][1]=10; Fig[3][2]=1;

    // RESPALDAR LOS PUNTOS
    for(int i = 0; i < MAXRENG; i++)
    {
        for(int j = 0 ; j < 3; j++)
            FigAux[i][j] = Fig[i][j];
    }

    ancho = this->size().width() - ui->widget->size().width();
    centroX = ancho/2;
    centroY = size().height()/2;

    tX = tY = 0;

}
void Dialog::dibujarFiguraMapeada(){

    QPen pen(QColor(255,0,0), 2);
    canvas->setPen(pen);

    //DIBUJAR LOS 4 CUADRANTES
     canvas->drawLine(ancho/2,0,ancho/2, size().height());
     canvas->drawLine(0,size().height()/2, ancho, size().height()/2);

    Mapeo dibujo;
    //ESCALACION  1:1
    dibujo.ventana(0,0, ancho, size().height());
    dibujo.puertoVision(0,0, ancho, size().height());

    // VALORES PARA EL ORIGEN EN EL CENTRO
       int L = centroX;
       int M = centroY;

    canvas->setPen(QColor(0,0,255));
    int x1, y1, x2,y2;
    for(int i = 0; i < MAXRENG -1 ; i++)
    {
        dibujo.mapear(Fig[i][0],Fig[i][1], x1, y1, L, M);
        dibujo.mapear(Fig[i+1][0],Fig[i+1][1], x2, y2, L,M);
        canvas->drawLine(x1,y1,x2,y2);
    }
}
void Dialog::keyPressEvent(QKeyEvent *evento)
{
    if(evento->key() == Qt::Key_Right)
      //  this->on_botonDerecha_clicked();
        trasladar(tX + ui->spinBox->value(), 0);
    if(evento->key() == Qt::Key_Left)
        this->on_botonIzq_clicked();
    if(evento->key() == Qt::Key_Up)
        this->on_botonArriba_clicked();
    if(evento->key() == Qt::Key_Down)
        this->on_botonAbajo_clicked();
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

void Dialog::escalar(float Sx, float Sy)
{
      //TAREA.
    Matrix fig, id, figTransf;
    fig.Inicializa(4,3);
    id.Inicializa(3,3);
    figTransf.Inicializa(4,3);
    for(int i = 0; i < fig.numRen(); i++)
        for(int j = 0; j < fig.numCol(); j++)
            fig.SET(i,j, Fig[i][j]);

    figTransf.escalacion(fig,id,Sx,Sy);
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
            this->on_pushButton_3_clicked();
        }


    }
}



void Dialog::on_botonDerecha_clicked()
{
    trasladar(tX + ui->spinBox->value(), 0);
}


void Dialog::on_botonIzq_clicked()
{
     trasladar(tX - ui->spinBox->value(), 0);
}

void Dialog::on_botonArriba_clicked()
{
      trasladar(0 , tY + ui->spinBox_2->value());
}


void Dialog::on_botonAbajo_clicked()
{
     trasladar(0 , tY - ui->spinBox_2->value());
}


void Dialog::on_checkBox_clicked(bool checked)
{
    if(checked)
        ui->widget->setEnabled(false);
    else
        ui->widget->setEnabled(true);
}


void Dialog::on_pushButton_2_clicked()
{
    // INVOCA A ESCALAR
    double sX = ui->doubleSpinBox->value();
    double sY = ui->doubleSpinBox_2->value();
    escalar(sX,sY);

}
// ESCALACION PUNTO FIJO
void Dialog::on_pushButton_4_clicked()
{
    double sX = ui->doubleSpinBox->value();
    double sY = ui->doubleSpinBox_2->value();
    double pfx = ui->doubleSpinBox_3->value();
    double pfy = ui->doubleSpinBox_4->value();
    escalarPuntoFijo(sX,sY,pfx,pfy);
}

// BOTON RESET
void Dialog::on_pushButton_3_clicked()
{
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 3; j++)
            Fig[i][j]  = FigAux[i][j];
    tX = tY = 0;
    update();
}


void Dialog::on_botonRotar_clicked()
{
    double angulo = ui->doubleSpinBox_7->value();
    rotar(angulo);
}

void Dialog::on_BotonRotarPuntoPivote_clicked()
{
    double angulo = ui->doubleSpinBox_7->value();
    double pfx = ui->doubleSpinBox_5->value();
    double pfy = ui->doubleSpinBox_6->value();
    rotarPuntoPivote(angulo,pfx,pfy);
}


void Dialog::on_botonAnimacion1_clicked()
{
    timer1->start(30);
    timer2->stop();
}


void Dialog::on_botonAnimacion2_clicked()
{
    timer1->stop();
    timer2->start(30);
}


void Dialog::on_pushButton_5_clicked()
{
  //  timer2->start(30);
}

//PROYECTO 2D

