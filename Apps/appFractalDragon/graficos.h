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
};

#endif // GRAFICOS_H
