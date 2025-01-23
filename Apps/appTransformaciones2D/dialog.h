#ifndef DIALOG_H
#define DIALOG_H
#include "matrix.h"
#include "mapeo.h"

#include <QDialog>
#include <QPainter>
#include <QKeyEvent>
#include <QtGui>
#include <QTimer>

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
    void escalar(float sX, float sY);
    void escalarPuntoFijo(float sX, float sY, float pfX, float pfY);
    void rotar(float angulo);
    void rotarPuntoPivote(float angulo, float pfX, float pfY);    

private slots:
    void on_btnArriba_clicked();

    void on_btnIzquierda_clicked();

    void on_btnDerecha_clicked();

    void on_btnAbajo_clicked();

    void on_cbTeclado_clicked(bool checked);

    void on_btnReset_clicked();

    void on_btnEscalar_clicked();

    void on_btnEscalarPF_clicked();

    void on_btnRotar_clicked();

    void on_btnRotarPP_clicked();

    void on_btnAnimacion1_clicked();

    void on_btnAnimacion2_clicked();

    void rotarAnimacion1();

    void rotarAnimacion2();

private:
    Ui::Dialog *ui;
    QPainter *canvas;
    float Fig[MAXRENG][3];
    float FigAux[MAXRENG][3];
    int ancho;
    int centroX, centroY;
    int tX, tY;
    char teclado;
    QTimer *timer1, * timer2;
};
#endif // DIALOG_H
