#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPainter>
#include <QKeyEvent>
#include <QtGui>
#include <QTimer>

#include "matrix.h"
#include "mapeo.h"

const int MAXRENG = 4;

QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
    void paintEvent(QPaintEvent *event) override;
    void asignarFigura();
    void dibujarFiguraMapeada();
    void keyPressEvent(QKeyEvent *evento) override;

    void trasladar(int Tx, int Ty);
    void escalar(float Sx, float Sy);
    void escalarPuntoFijo(float sX, float sY, float pfX, float pfY);
    void rotar(float angulo);
    void rotarPuntoPivote(float angulo, float pfX, float pfY);



private slots:
    void on_botonArriba_clicked();

    void on_botonDerecha_clicked();

    void on_botonIzq_clicked();

    void on_botonAbajo_clicked();

    void on_checkBox_clicked(bool checked);

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_botonRotar_clicked();

    void on_BotonRotarPuntoPivote_clicked();

    void on_botonAnimacion1_clicked();

    void on_botonAnimacion2_clicked();

    void on_pushButton_5_clicked();

    void rotarAnimacion1();
    void rotarAnimacion2();

private:
    Ui::Dialog *ui;
    QPainter *canvas;
    float Fig[4][3];
    float FigAux[4][3];
    int ancho;
    int centroX, centroY;
    int tX, tY;

  //  int anguloRotación;

    QTimer *timer1, * timer2;

};
#endif // DIALOG_H







