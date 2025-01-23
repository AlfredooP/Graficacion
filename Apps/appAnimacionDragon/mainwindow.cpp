#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->statusbar->addPermanentWidget(ui->lblIniciar, 1);
    ui->statusbar->addPermanentWidget(ui->lblDetener, 2);
    ui->statusbar->addPermanentWidget(ui->lblSalir);

    li = 1;
    ls = 12;
    band = false;

    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(repaint()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *evento)
{
    if(evento->key() == Qt::Key_I)
    {
        band = true;
        timer->start(200);
        update();
    }
    if(evento->key() == Qt::Key_D)
    {
        timer->stop();
    }
    if(evento->key() == Qt::Key_S)
    {
        close();
    }
}

void MainWindow::paintEvent(QPaintEvent *e)
{
    QPainter *canvas = new QPainter(this);
    QColor color = Qt::white;
    canvas->setPen(color);
    if(band)
    {
        if(li <= ls)
        {
            dragon(li, canvas);
            li++;
        }
        else
            band = false;
    }
    if(!band)
    {
        li--;
        dragon(li, canvas);
        if(li == 0)
            band = true;
    }
    canvas->end();
}

void MainWindow::dragon(int limite, QPainter *canvas)
{
    int i;
    paso = 4096;
    signo = -1;
    ejeX[1] = canvas->window().width() /4;
    ejeX[4097] = 3*this->width()/4;
    ejeY[1] = ejeY[4097] = 2*this->height()/3;
    //ejeY[1] = ejeY[4097] = 2*(this->height()-500)/3;
    canvas->drawLine(ejeX[1], ejeY[1], ejeX[4097], ejeY[4097]);
    for(i = 1; i <= limite; i++)
    {
        canvas->eraseRect(canvas->window());
        generarDragon(canvas);
        paso /= 2;
    }
    canvas->end();
}

void MainWindow::henon(QPainter *canvas)
{
    escalaX = 1; //Valores para ajustar la escala
    escalaY = 1;
    despX = 0; //y la posicion en pantalla
    despY = 0;
    maxX = this->width();
    maxY = this->height();
    extranioConfinador(canvas);
    canvas->end();
}

void MainWindow::generarDragon(QPainter *canvas)
{
    int i, j, dx, dy;
    j = paso/2;
    for(i = 1; i <= 4096; i += paso)
    {
        dx = ejeX[paso+i] - ejeX[i];
        dy = ejeY[paso+i] - ejeY[i];
        signo *= -1;
        //signo *= -1;
        ejeX[i+j] = ejeX[i] + (dx+(dy*signo))/2;
        ejeY[i+j] = ejeY[i] + (dy-(dx*signo))/2;
        canvas->drawLine(ejeX[i], ejeY[i], ejeX[i+j], ejeY[i+j]);
        canvas->drawLine(ejeX[i+j], ejeY[i+j], ejeX[i+paso], ejeY[i+paso]);
    }
}

void MainWindow::extranioConfinador(QPainter *canvas)
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

