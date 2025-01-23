#include "graficos.h"

//Graficos::Graficos()
//{

//}

int rojos [7] = {255,255,255,0,0,255,243};
int verdes [7] = {255,0,255,255,0,0,156};
int azules [7] = {255,0,0,0,255,255,18};
int tam;

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

     QPen pen(QColor(255,255,255),2);
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

void Graficos::circuloPitagoras(int xc, int yc, int radio, QPainter *canvas)
{
    QPen pen(QColor(255,255,255),2);
    canvas->setPen(pen);
    float y;

    for(int x = xc - radio; x <= xc + radio; x++){
        y = yc + sqrt((radio * radio) - pow(x-xc, 2.0));
        canvas->drawPoint(x, y);
        y = yc - pow((radio * radio) - pow(x-xc, 2.0), 0.5);
        canvas->drawPoint(x, y);
    }
}

void Graficos::circuloPolares(int xc, int yc, int radio, QPainter *canvas)
{
//    QPen pen(QColor(255,255,255),2);
//    canvas->setPen(pen);
    float dth, cdth, sdth, x, y, xtemp;
    dth = 1.0/radio;
    cdth = cos(dth);
    sdth = sin(dth);
    x = 0.0;
    y = radio;
    while(y >= x){
        canvas->drawPoint(round(xc + x), round(yc + y));
        canvas->drawPoint(round(xc - x), round(yc + y));
        canvas->drawPoint(round(xc - x), round(yc - y));
        canvas->drawPoint(round(xc + x), round(yc - y));
        xtemp = x;
        x = xtemp * cdth - y * sdth;
        y = y * cdth + xtemp * sdth;
    }
}

void Graficos::circuloLinea(int radio, QPainter *canvas)
{
    QPen pen(QColor(255,255,255),2);
    canvas->setPen(pen);
    int inc, x1, y1, x2, y2;
    inc = 0;
    while(inc < radio){
        y1 = canvas->window().height()/2 - radio + inc;
        x1 = canvas->window().width()/2 - radio;
        x2 = canvas->window().width() + radio + inc;
        y2 = canvas->window().height() + radio;
        lineaDDA(x1, y1, x2, y2, canvas);
        inc += 10;
    }
}

void Graficos::animacion1(int radio, QPainter *canvas)
{
    QPen pen(colorRandom(),2);
    canvas->setPen(pen);
    if(radio%2 == 1)
        canvas->eraseRect(0,0,canvas->window().width(),canvas->window().height());
    else{
        for(int x = 0 ; x < canvas->window().width()/2; x += 50){
            circuloPolares(x+radio, canvas->window().height()/2, radio, canvas);
        }
        for(int x = canvas->window().width(); x > canvas->window().width()/2; x -= 50){
            circuloPolares(x-radio, canvas->window().height()/2, radio, canvas);
        }
    }

}

void Graficos::animacion2(QPainter *canvas)
{
    for(int x = 100 ; x < canvas->window().width(); x += 150){
        for(int y = 100 ; y < canvas->window().height(); y += 150){
            espiral1(canvas, colorRandom(), 0.5, 100, x, y);
        }
    }
}

void Graficos::espiral1(QPainter *canvas, QColor color, double factor, int tam, int xc, int yc)
{
    canvas->setPen(color);
    int radio = 5;
    const double dosPI = M_PI * 2;
    double dth, cdth, sdth, x, y, xtemp, xt, yt;
    //double factor = 1.5;
    dth = dosPI / (factor * radio);
    cdth = cos(dth);
    sdth = sin(dth);
    x = 0;
    y = radio;
    int cont = 0;
    xt = xc + x;
    yt = yc + y;
    do{
        xtemp = x;
        x = x * cdth - y * sdth;
        y = y * cdth + xtemp * sdth;
        if(x > 0){
            x += 0.5;
        }
        else{
            x -= 0.5;
        }
        if(y > 0){
            y += 0.5;
        }
        else{
            y -= 0.5;
        }
        //canvas->drawPoint(xt + 0.5, yt + 0.5);
        lineaDDA(xt + 0.5, yt + 0.5, xc + x + 0.5, yc + y + 0.5, canvas, color);
        xt = xc + x;
        yt = yc + y;
        cont ++;
    }while(cont < tam);
}

void Graficos::espiral2(QPainter *canvas, QColor color, float r, double t)
{
    int xc = canvas->window().width()/2;
    int yc = canvas->window().height()/2;
    double x, y, xt, yt;
    float radio = 1.0;
    canvas->setPen(color);

    double th = 0.0;
    x = radio * cos(th);
    y = radio * sin(th);
    xt = xc + x;
    yt = yc + y;
    while(radio < 200){
//        th += 0.1;
//        radio += 0.9;
        th += t;
        radio += r;
        x = radio * cos(th);
        y = radio * sin(th);
        lineaDDA(xt + 0.5, yt + 0.5, xc + (x + 0.5), yc + (y + 0.5), canvas, color);
        xt = xc + x;
        yt = yc + y;
    }
}

QColor Graficos::colorRandom()
{
    int random = rand()%7;
    QColor color (rojos[random],verdes[random],azules[random],255);
    return color;
}
