#ifndef GRAFICOS_H
#define GRAFICOS_H
#include <QtGui>
#include <QtCore>
#include <QColor>

class Graficos
{
public:
    //Graficos();
    int redondear(float num)
    {
        return int(num + 0.5);
    }
    void lineaDDA(int x1, int y1, int x2, int y2, QPainter *canvas);
    void lineaDDA(int x1, int y1, int x2, int y2, QPainter *canvas, QColor color);
    void circuloPitagoras(int xc, int yc, int radio, QPainter *canvas);
    void circuloPolares(int xc, int yc, int radio, QPainter *canvas);
    void circuloLinea(int radio, QPainter *canvas);
    void animacion1(int radio, QPainter *canvas);
    void animacion2(QPainter *canvas);
    void espiral1(QPainter *canvas, QColor color, double factor, int tam, int x, int y);
    void espiral2(QPainter *canvas, QColor color, float r, double t);
    QColor colorRandom();
};

#endif // GRAFICOS_H
