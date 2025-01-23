#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QPixmap imagen("C:\\Users\\HP1\\OneDrive\\Documentos\\Proyectos QT\\appVisorDeImagenes\\Imagenes\\pez.jpg");
    ui->label->setPixmap(imagen);
    ui->label->setScaledContents(true);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    QFileDialog dialogo(this);
    dialogo.setNameFilter("Imagenes(*.png *.bmp *.jpg *.jpeg)");
    dialogo.setViewMode(QFileDialog::Detail);

    QString nomarch = QFileDialog::getOpenFileName(this, "Abrir Imagen", "C:\\Users\\HP1\\OneDrive\\Documentos\\Proyectos QT\\appVisorDeImagenes\\Imagenes", "Archivos de Imagenes(*.png *.bmp *.jpg *.jpeg)");

    if(!nomarch.isEmpty())
    {
        QImage imagenSeleccionada(nomarch);
        ui->label->setPixmap(QPixmap::fromImage(imagenSeleccionada));
        ui->label->setScaledContents(true);
    }
}

