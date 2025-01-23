#include "mainwindow.h"
#include "ui_mainwindow.h"

// COMO PARTE DE LA TAREA DE ESTA APLICACIÓN
//REALIZAR UNA PRUEBA DE ESCRITORIO
//A ESTA APP, MINIMO 4 CICLOS
//MOSTRANDO EN PAPEL SU COMPORTAMIENTO
//TANTO DE LAS VARIABLES COMO DE SU SALIDA GRAFICA



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    graficos = new Graficos();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e)
    dragon();
}

void MainWindow::dragon() //ERA EL main EN LA APP.de las copias
{
    QPainter Canvas(this);
    int i;
    Paso=4096;
    signo = -1;  // DRAGON


    EjeX[1]=  Canvas.window().width()/4;
    EjeX[4097]= 3 * Canvas.window().width() / 4;
    EjeY[1] = EjeY[4097] = Canvas.window().height()/2;   ;

    Canvas.setPen(QColor(50,50,200));
    QFont fuente = Canvas.font();
    fuente.setPointSize(fuente.pointSize());// * 2);

    Canvas.setFont(QFont("ROCKWELL", 7));
    //Canvas.drawText(5,25,"CURVA FRACTAL DEL DRAGON");

    Canvas.setPen(QColor(0,0,0));//255,255,255));
    // EJEMPLO PARA VER ALGUNOS VALORES EN LA SALIDA
     QString datos ="X1 :" + QString::number(EjeX[1]);
     datos += "  Y1: "+ QString::number(EjeY[1])+" X2: "+ QString::number(EjeX[4097])+" Y2: "+ QString::number(EjeY[4097]);
    Canvas.drawText(5,20,datos);

    //APLICAR LA LINEA DDA
    Canvas.drawLine(EjeX[1],EjeY[1],EjeX[4097],EjeY[4097]);
    for( i = 1; i<=12;i++)
    {
         generarDragon(&Canvas);
         Paso /= 2;
    }

}
void MainWindow::generarDragon(QPainter *Canvas)
{
    int j,dx,dy;
    j=Paso/2;
    Canvas->setPen(QColor(0,0,0,rand()%155+100));

    for(int i = 1; i <= 4096; i += Paso)
    {
       dx = EjeX[Paso+i] - EjeX[i];
       dy = EjeY[Paso+i] - EjeY[i];

       signo *= -1;

       EjeX[i + j] = EjeX[i] + ( dx + ( dy * signo))/2;
       EjeY[i + j] = EjeY[i] + ( dy - ( dx * signo))/2;
//USAR LA LINEADDA
       Canvas->drawLine(EjeX[i],EjeY[i],EjeX[i+j],EjeY[i+j]);

       static  int posy = 40;

       QString datos = "X1 : "+QString::number(EjeX[i]);
       datos += " Y1: "+ QString::number(EjeY[i])+" X2: "+ QString::number(EjeX[i+j])+" Y2: "+ QString::number(EjeY[i+j]);

       Canvas->drawText(5,posy,datos);


       Canvas->drawLine(EjeX[i+j],EjeY[i+j],EjeX[i+Paso],EjeY[i+Paso]);

       static int posy2 = 60;

       QString datos2 = "X1 : "+QString::number(EjeX[i+j]);
       datos2 += " Y1: "+ QString::number(EjeY[i+j])+" X2: "+ QString::number(EjeX[i+Paso])+" Y2: "+ QString::number(EjeY[i+Paso]);
       Canvas->drawText(5,posy2,datos2);

    }
}


void MainWindow::on_pushButton_clicked()
{
   close(); //this->close();
}
