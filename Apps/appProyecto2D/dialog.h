#ifndef DIALOG_H
#define DIALOG_H
#include "matrix.h"
#include "mapeo.h"

#include <QDialog>
#include <QPainter>
#include <QKeyEvent>
#include <QtGui>
#include <QTimer>
#include <QColorDialog>

const int MAXRENG = 72;

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
    void asignarCactus();
    void dibujarCactus();
    void dibujarFiguraMapeada();    
    void keyPressEvent(QKeyEvent *evento) override;

    //Transformaciones
    void trasladar(int Tx, int Ty);
    void escalar(float sX, float sY);
    void escalarPuntoFijo(float sX, float sY, float pfX, float pfY);
    void rotar(float angulo);
    void rotarPuntoPivote(float angulo, float pfX, float pfY);

private slots:
    void animacionCactus();
    void on_btnColor_clicked();

    void on_btnReset_clicked();

private:
    Ui::Dialog *ui;
    float Fig[72][3];
    float Fig1[34][3];
    QPainter *canvas;
    int ancho;
    int centroX, centroY;
    int tX, tY;
    int rotado, recX, recY, cont;
    bool cactus;
    char teclado;
    QTimer *timer;
    QColor color;
};
#endif // DIALOG_H
