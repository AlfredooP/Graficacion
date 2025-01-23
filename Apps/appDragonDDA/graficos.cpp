#include "graficos.h"

//Graficos::Graficos()
//{

//}

void Graficos::lineaDDA(int x1, int y1, int x2, int y2, QPainter *canvas)
{
    int dx,dy,steps,k;
     float x_inc, y_inc,x,y;
     dx = x2 - x1;
     dy = y2 - y1;

     if(abs(dx) > abs(dy))
        steps = abs(dx);
     else
        steps = abs(dy);

     x_inc = (float)dx/steps;
     y_inc = (float)dy/steps;
     x = x1;
     y = y1;

     QPen pen(QColor(0,0,200),2);
     canvas->setPen(pen);

     //putpixel(floor(x),floor(y),1);
     canvas->drawPoint(round(x), round(y));

     for(k= 1; k < steps+1; k++)
     {
        x = x + x_inc;
        y = y + y_inc;
        //putpixel(floor(x), floor(y),1);
        canvas->drawPoint(round(x), round(y));
     }

}

void Graficos::lineaDDA(int x1, int y1, int x2, int y2, QPainter *canvas, QColor color)
{
    int dx,dy,steps,k;
    float x_inc, y_inc,x,y;
    dx = x2 - x1;
    dy = y2 - y1;

    if(abs(dx) > abs(dy))
    steps = abs(dx);
    else
    steps = abs(dy);

    x_inc = (float)dx/steps;
    y_inc = (float)dy/steps;
    x = x1;
    y = y1;

    QPen pen(color,2);
    canvas->setPen(pen);

    //putpixel(floor(x),floor(y),1);
    canvas->drawPoint(qRound(x), qRound(y));

    for(k= 1; k < steps+1; k++)
    {
    x = x + x_inc;
    y = y + y_inc;
    //putpixel(floor(x), floor(y),1);
    canvas->drawPoint(qRound(x), qRound(y));
    }
}
