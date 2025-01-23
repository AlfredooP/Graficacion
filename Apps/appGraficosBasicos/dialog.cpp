#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    color = Qt::white;
    x1 = y1 = x2 = i = 0;
    factor1 = 16;
    tam1 = 200;
    factor2 = 20;
    tam2 = 500;
    r = 4.9;
    th = 2.1;
    timer1 = new QTimer();
    timer2 = new QTimer();
    connect(timer1, SIGNAL(timeout()), this, SLOT(repaint()));
    connect(timer2, SIGNAL(timeout()), this, SLOT(repaint()));
    circuloPitagoras = linea = circuloPolares = animacion1 = animacion2 = espiral1 = espiral2 = false;
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e)
    canvas = new QPainter(this);

    //Objeto dinamico
//    Graficos *graficos;
//    graficos->lineaDDA(x1, y1, x2, y2, canvas);

    //Objeto estatico
    Graficos graficos;

    if(linea)
        graficos.lineaDDA(x1, y1, x2, y2, canvas, color);
    if(circuloPitagoras)
        //graficos.circuloLinea(200, canvas);
        graficos.circuloPitagoras(xc, yc, radio, canvas);
    if(circuloPolares)
        graficos.circuloPolares(xc, yc, radio, canvas);
    if(espiral1)
        graficos.espiral1(canvas, color, factor1, tam1, canvas->window().width()/2, canvas->window().height()/2);
    if(espiral2)
        graficos.espiral2(canvas, color, r, th);
    if(animacion1)
    {
        if(i <= this->height()/2)
        {
            graficos.animacion1(i, canvas);
            i++;
        }
        else
            animacion1 = false;
    }
    if(!animacion1)
    {
//        graficos.animacion1(i, canvas);
//        i--;
//        if(i == 0)
//            animacion1 = true;
        timer1->stop();
    }
    if(animacion2){
       if(factor2 != 0.5){
           factor2 -= 0.5;
           graficos.espiral1(canvas, graficos.colorRandom(), factor2, tam2, canvas->window().width()/2, canvas->window().height()/2);
       }
       if(tam2 != 10 && factor2 == 0.5){
           tam2 -= 10;
           graficos.espiral1(canvas, graficos.colorRandom(), factor2, tam2, canvas->window().width()/2, canvas->window().height()/2);
       }
       if(tam2 == 10)
           graficos.animacion2(canvas);
    }
    if(!animacion2){
        timer2->stop();
    }
    canvas->end();

}

void Dialog::mousePressEvent(QMouseEvent *event)
{
    ui->txtX1->setText(QString::number(event->pos().x()));
    ui->txtY1->setText(QString::number(event->pos().y()));
    linea = true;
    circuloPitagoras = circuloPolares = animacion1 = animacion2 = espiral1 = espiral2 = false;
}

void Dialog::mouseReleaseEvent(QMouseEvent *event)
{
    ui->txtX2->setText(QString::number(event->pos().x()));
    ui->txtY2->setText(QString::number(event->pos().y()));
}

void Dialog::mouseMoveEvent(QMouseEvent *event)
{
    ui->txtX2->setText(QString::number(event->pos().x()));
    ui->txtY2->setText(QString::number(event->pos().y()));
    this->on_pushButton_clicked();
}

void Dialog::on_pushButton_clicked()
{
    x1 = ui->txtX1->text().toInt();
    y1 = ui->txtY1->text().toInt();
    x2 = ui->txtX2->text().toInt();
    y2 = ui->txtY2->text().toInt();
    circuloPitagoras = circuloPolares = animacion1 = animacion2 = espiral1 = espiral2 = false;
    linea = true;
    //this->repaint();
    update();
}


void Dialog::on_pushButton_2_clicked()
{
    QColor colorSeleccionado = QColorDialog::getColor(Qt::white, this, "Selecciona Color");
    if(colorSeleccionado.isValid())
    {
        color = colorSeleccionado;
    }
}


void Dialog::on_pitagoras_clicked()
{
    xc = ui->spinBox->value();
    yc = ui->spinBox_2->value();
    radio = ui->spinBox_3->value();

    linea = circuloPolares = animacion1 = animacion2 = espiral1 = espiral2 = false;
    circuloPitagoras = true;
    update();
}


void Dialog::on_polares_clicked()
{
    xc = ui->spinBox->value();
    yc = ui->spinBox_2->value();
    radio = ui->spinBox_3->value();

    circuloPitagoras = linea = animacion1 = animacion2 = espiral1 = espiral2 = false;
    circuloPolares = true;
    update();
}


void Dialog::on_pushButton_3_clicked()
{
    circuloPitagoras = linea = animacion2 = circuloPolares = espiral1 = espiral2 = false;
    animacion1 = true;
    timer1->start(100);
    update();
}


void Dialog::on_espiral1_clicked()
{
    factor1 = ui->spinFactor->value();
    tam1 = ui->spinTam->value();
    linea = circuloPitagoras = circuloPolares = animacion1 = animacion2 = espiral2 = false;
    espiral1 = true;
    update();
}


void Dialog::on_espiral2_clicked()
{
    r = ui->spinRadio->value();
    th = ui->spinTh->value();
    linea = circuloPitagoras = circuloPolares = animacion1 = animacion2 = espiral1 = false;
    espiral2 = true;
    update();
}


void Dialog::on_spinFactor_valueChanged(double arg1)
{
    on_espiral1_clicked();
}


void Dialog::on_spinTam_valueChanged(int arg1)
{
    on_espiral1_clicked();
}


void Dialog::on_spinRadio_valueChanged(double arg1)
{
    on_espiral2_clicked();
}


void Dialog::on_spinTh_valueChanged(double arg1)
{
    on_espiral2_clicked();
}


void Dialog::on_animacion2_clicked()
{
    circuloPitagoras = linea = animacion1 = circuloPolares = espiral1 = espiral2 = false;
    animacion2 = true;
    timer2->start(100);
    update();
}

