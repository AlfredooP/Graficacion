#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QtGui>
#include <QKeyEvent>

#include "mapeo.h"

#define radianes(grados) ((double)(grados)*M_PI / 180.0)

struct Puntos3D
{
    int x, y,z;
    bool opcion;
};

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void paintEvent(QPaintEvent * event);
    void asignarCubo();
    void proyeccionCubo();
    void dibujarCubo();
    void inicializaPuerto();
    void lineto3D(int x, int y, int z, float alpha, float phi, int indice);
    void moveto3D(int x, int y, int z, float alpha, float phi, int indice);
    void keyPressEvent(QKeyEvent *event);


private slots:
    void on_dialALPHA_sliderMoved(int position);

    void on_dialPHI_valueChanged(int value);

private:
    Ui::Widget *ui;
    QPainter *canvas;
    QPointF points[16];
    Puntos3D *cubo;
    Mapeo mapeo;
    int L, M;
    int ancho;
    float alpha, phi;
    int tX, tY, tZ;

};
#endif // WIDGET_H
