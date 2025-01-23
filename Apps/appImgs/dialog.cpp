#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QPixmap imagen("C:\\Users\\HP1\\OneDrive\\Documentos\\Proyectos QT\\appImgs\\Imagenes\\2181.jpg");
    nomarch = "C:\\Users\\HP1\\OneDrive\\Documentos\\Proyectos QT\\appImgs\\Imagenes\\2181.jpg";
    ui->lblImg->setPixmap(imagen);
    ui->lblImg->setScaledContents(true);
}

Dialog::~Dialog()
{
    delete ui;
}

QImage Dialog::escanearImagen(const QImage &in)
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
            pixelesSalida[pixel] = qRgba(red, green, blue, alpha);
            //pixelesSalida[pixel] = qRgba(red & rojo, green & verde, blue & azul, alpha);
            pixelesSalida[pixel] = qRgba(red | rojo, green | verde, blue | azul, alpha);
            //pixelesSalida[pixel] = qRgba(red ^ rojo, green ^ verde, blue ^ azul, alpha);
        }
    }
    return out;
}

void Dialog::on_btnElegirImg_clicked()
{
    QFileDialog dialogo(this);
    dialogo.setNameFilter("Imagenes(*.png *.bmp *.jpg *.jpeg)");
    dialogo.setViewMode(QFileDialog::Detail);

    nomarch = QFileDialog::getOpenFileName(this, "Abrir Imagen", "C:\\Users\\HP1\\OneDrive\\Documentos\\Proyectos QT\\appImgs\\Imagenes", "Archivos de Imagenes(*.png *.bmp *.jpg *.jpeg)");

    if(!nomarch.isEmpty())
    {
        QImage imagenSeleccionada(nomarch);
        ui->lblImg->setPixmap(QPixmap::fromImage(imagenSeleccionada));
        ui->lblImg->setScaledContents(true);
    }
}


void Dialog::on_btnEscanearImg_clicked()
{
    QImage imagen(nomarch);

    imagen = escanearImagen(imagen);
    ui->lblEscan1->setPixmap(QPixmap::fromImage(imagen));
    ui->lblEscan1->setScaledContents(true);

    imagen = escanearImagen(imagen);
    ui->lblEscan2->setPixmap(QPixmap::fromImage(imagen));
    ui->lblEscan2->setScaledContents(true);

    imagen = escanearImagen(imagen);
    ui->lblEscan3->setPixmap(QPixmap::fromImage(imagen));
    ui->lblEscan3->setScaledContents(true);
}


void Dialog::on_sliderRojo_valueChanged(int value)
{
    rojo = value;
    this->on_btnEscanearImg_clicked();
}


void Dialog::on_sliderVerde_valueChanged(int value)
{
    verde = value;
    this->on_btnEscanearImg_clicked();
}


void Dialog::on_sliderAzul_valueChanged(int value)
{
    azul = value;
    this->on_btnEscanearImg_clicked();
}

