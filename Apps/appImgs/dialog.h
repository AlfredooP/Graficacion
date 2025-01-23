#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
    QImage escanearImagen(const QImage &in);

private slots:
    void on_btnElegirImg_clicked();

    void on_btnEscanearImg_clicked();

    void on_sliderRojo_valueChanged(int value);

    void on_sliderVerde_valueChanged(int value);

    void on_sliderAzul_valueChanged(int value);

private:
    Ui::Dialog *ui;
    QString nomarch;
    unsigned char rojo;
    unsigned char verde;
    unsigned char azul;
};
#endif // DIALOG_H
