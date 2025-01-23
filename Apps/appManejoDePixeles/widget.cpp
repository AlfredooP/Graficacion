#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    rojo = 0;
}

Widget::~Widget()
{
    delete ui;
}

QImage Widget::escanearImagen(const QImage &in)
{
    QImage out(in.size(), in.format());
    for(int renglon = 0; renglon < in.height(); renglon++)
    {
        const QRgb *pixelesEntrada = reinterpret_cast<const QRgb *>(in.scanLine(renglon));
        QRgb *pixelesSalida = reinterpret_cast<QRgb *>(out.scanLine(renglon));
        for(int pixel = 0; pixel < in.width(); pixel++)
        {
            int red = qRed(pixelesEntrada[pixel]);
            int green = qGreen(pixelesEntrada[pixel]);
            int blue = qBlue(pixelesEntrada[pixel]);
            int alpha = qAlpha(pixelesEntrada[pixel]);
            //pixelesSalida[pixel] = qRgba(red | rojo, green, blue, alpha);
            pixelesSalida[pixel] = qRgba(red & rojo, green ^ rojo, blue ^ rojo, alpha);
            //pixelesSalida[pixel] = qRgba(blue, blue, blue, alpha);
        }
    }
    return out;
}


void Widget::on_BotonEscanear_clicked()
{
    QImage imagen(":/imgs/pez.jpg");

    imagen = escanearImagen(imagen);
    ui->label_2->setPixmap(QPixmap::fromImage(imagen));
    ui->label_2->setScaledContents(true);

    imagen = escanearImagen(imagen);
    ui->label_3->setPixmap(QPixmap::fromImage(imagen));
    ui->label_3->setScaledContents(true);

    imagen = escanearImagen(imagen);
    ui->label_4->setPixmap(QPixmap::fromImage(imagen));
    ui->label_4->setScaledContents(true);
}


void Widget::on_dial_valueChanged(int value)
{
    rojo = value;
    this->on_BotonEscanear_clicked();
}

