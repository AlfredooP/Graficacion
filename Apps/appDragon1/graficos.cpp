#include "graficos.h"

Graficos::Graficos()
{

}


void Graficos::lineaDDA(int x1, int y1, int x2, int y2, QPainter *canvas,QColor color)
{
      int pasos;
      int dx = x2 - x1;
      int dy = y2 - y1;
      float x_inc, y_inc, x = x1, y = y1;

      if(abs(dx) > abs(dy))
        pasos = abs(dx);
      else
        pasos = abs(dy);
      //aplicar en ambos el cast

      x_inc = float(dx)/ pasos;
      y_inc = float(dy)/(float)pasos;
      //Primer punto de la linea

     // canvas->setPen(QColor(0,0,200));//qrand()%155+100));
      canvas->setPen(color);
      canvas->drawPoint(floor(x+.5),floor(y+0.5));

      for(int k= 0; k <= pasos; k++)
      {
          x+= x_inc;
          y+= y_inc;
          canvas->drawPoint(floor(x+.5),floor(y+0.5));
      }
}




void Graficos::Circulo(int xc, int yc, int radio, QPainter *canvas)
{
    QPen pluma(QColor(0,0,200));   // = new QPen(QColor(0,0,200));
   //  pluma.setWidth(8);
   // canvas->setPen(QColor(0,0,200));//qrand()%155+100));
    int x,y;
    for(int a = 0; a < 360; a+=2)
    {
       x = xc + radio * cos(a / 180.0 * M_PI);
       y = yc + radio * sin(a / 180.0 * M_PI);
      // canvas->drawPoint(x-1,y-1);
       canvas->drawPoint(x,y);
      // canvas->drawPoint(x+1,y+1);
    }
}



void Graficos::circuloPitagoras(int xc, int yc, int radio, QPainter *canvas)
{

    canvas->setPen(QColor(0,0,200));//qrand()%155+100));
    float y;
    for(int x = xc-radio; x <= xc+radio; x++)
    {
        y = (yc + sqrt((radio * radio) - pow((x - xc),2.0)));
        canvas->drawPoint(x,y);
        y = (yc - sqrt(pow(radio,2.0) - pow((x -xc),2)));
        canvas->drawPoint(x,y);

    }
}





void Graficos::circuloPolares(int xc, int yc, int radio, QPainter *canvas)
{
    canvas->setPen(QColor(0,0,200));//qrand()%155+100));
    float dth, cdth, sdth, x, y, xt;
    dth = 1.0/radio;
    cdth = cos(dth);
    sdth = sin(dth);
    x = 0;
    y = radio;
    while( y >= x)
    {
        canvas->drawPoint(round(xc + x),round(yc+y));
        canvas->drawPoint(round(xc - x),round(yc+y));
        canvas->drawPoint(round(xc - x),round(yc-y));
        canvas->drawPoint(round(xc + x),round(yc-y));
        xt = x;
        x = xt*cdth - y * sdth;
        y = y * cdth + xt * sdth;
    }
}

//AGREGAR LOS CAMBIOS
void Graficos::espiral1(QPainter *canvas, QColor color)
{
    int xc = canvas->window().width()/2;
    int yc = canvas->window().height()/2-70;
    int radio = 5;
    const double dos_pi= M_PI * 2;  //   6.28318;
    canvas->setPen(color);
    int cont;
    double dth,cth,sth,x,y,x_tmp,xt,yt;
    dth=dos_pi/( .5 * radio);              //decrementar el 16 - 8, 4, 2, 1.8
    cth=cos(dth);
    sth=sin(dth);
    x=0.0;
    y=radio;
    cont=0;
    xt=xc+x;
    yt=yc+y;
    do{
        x_tmp=x;
        x=(x*cth-y*sth);
        y=(y*cth+x_tmp*sth);
        if(x>0){  x+=0.5;  }
          else {  x-=0.5;  }
        if(y>0){  y+=0.5;  }
           else{  y-=0.5;  }
        //UTILIZANDO LA LINEADDA
    lineaDDA(round(xt+.5),round(yt+.5),round(xc+x+.5),round(yc+y+.5),canvas,color);
    //USAR PUNTOS
        xt=xc+x;
        yt=yc+y;
        cont++;
     }while(cont<350);
}//FIN ESPIRAL 1





void Graficos::espiral2(QPainter *canvas, QColor color)
{
    int xc = canvas->window().width()/2, yc = canvas->window().height()/2-80;
    float radio = 1.0;

    canvas->setPen(color);

    double th,x,y,xt,yt;
    th=0.0;
    x=radio*cos(th);
    y=radio*sin(th);
    xt=xc+x;
    yt=yc+y;
    while(radio<250)
    {
        th+=1.7 ;
        radio+= 2.5;
        x=radio*cos(th);
        y=radio*sin(th);
        lineaDDA(round(xt+.5),round(yt+.5),round(xc+x+.5),round(yc+y+.5),canvas,color);
        xt=xc+x;
        yt=yc+y;
     }
}


// 2.73;
// th+=2.9;   //variar el valor de incremento de theta
    //.3   variar el valor del radio
//radio+= .5;//0.3;
