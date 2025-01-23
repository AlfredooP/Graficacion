#ifndef GRAFICOS_H
#define GRAFICOS_H

#include <QtGui>
#include <QtCore>
#include <QPainter>

class Graficos
{
public:
    Graficos();


    int round(float n)
    {
        return int(n+0.5);
    }


    void lineaDDA(int x1, int y1, int x2, int y2, QPainter *canvas,QColor color);


    void circuloPitagoras(int xc, int yc, int radio, QPainter *canvas);

    void Circulo(int xc, int yc, int radio, QPainter *canvas);


    //PENDIENTE
    void circuloPolares(int xc, int yc, int radio, QPainter *canvas);


    void espiral1(QPainter *canvas, QColor color);
    void espiral2(QPainter *canvas, QColor color);

private:

};

#endif // GRAFICOS_H
