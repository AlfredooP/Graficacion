#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QtGui>
#include <QKeyEvent>

#include "mapeo.h"

#define radianes(grados)((double)(grados)*M_PI/180)

const static int maxsize = 131;

struct Puntos3D{
    int x, y, z;
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

    void paintEvent(QPaintEvent *event);
    void asignarCubo();
    void proyeccionCubo();
    void dibujarCubo();
    void inicializarPuerto();
    void lineTo3D(int x, int y, int z, float alpha, float phi, int indice);
    void moveTo3D(int x, int y, int z, float alpha, float phi, int indice);
    void keyPressEvent(QKeyEvent*);

private slots:
    void on_dialAlfa_sliderMoved(int position);

    void on_dialPhi_valueChanged(int value);

    void on_rbITL_clicked();

    void on_rbCubo_clicked();   

private:
    Ui::Widget *ui;
    QPainter *canvas;
    QPointF points[maxsize];
    Puntos3D *cubo;
    Mapeo mapeo;
    int L, M;
    int ancho;
    float alpha, phi;
    int tX, tY, tZ;
    //Centro de las caras del cubo
    int cX,cY,cZ;
    double fescX,fescY,fescZ;
    //rotacion
    bool rX,rY,rZ;
    int anguloX,anguloY,anguloZ;
};
#endif // WIDGET_H
