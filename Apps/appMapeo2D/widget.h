#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QtGui>
#include "mapeo.h"

//#define RENG 72
const int MAXRENG = 72;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void paintEvent(QPaintEvent *event);
    void asignarFigura();
    void dibujarFiguraOriginal();
    void dibujarFiguraMapeada();

private slots:
    void on_btnNormal_clicked();

    void on_btnMapeo_clicked();

    void on_sbEscala_valueChanged(double arg1);

private:
    Ui::Widget *ui;
    QPainter *canvas;
    float Fig[MAXRENG][3];
    float FigAux[MAXRENG][3];
    int ancho;
    int centroX, centroY, xpVmin, ypVmin, xpVmax, ypVmax;
    bool dibujarOrientacionNormal, dibujarMapeado;
    double escala;
};
#endif // WIDGET_H
