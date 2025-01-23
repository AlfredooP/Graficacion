#include "mapeo.h"
#include <iostream>
using namespace std;

//mapeo::mapeo() {}

void Mapeo::ventana(float wx1, float wy1, float wx2, float wy2)
{
    xWmin  = wx1;
    yWmin  = wy1;
    xWmax = wx2;
    yWmax = wy2;
}

void Mapeo::puertoVision(int pvx1, int pvy1, int pvx2, int pvy2)
{
    xPVmin = pvx1;
    yPVmin = pvy1;
    xPVmax = pvx2;
    yPVmax = pvy2;
}

void Mapeo::mapear(int xW, int yW, int &xpv, int &ypv, int L, int M)
{
    float sX, sY;
    sX = (xPVmax - xPVmin)/(xWmax-xWmin);
   // cout<<"Escalación en X  = "<<sX<<endl;
    sY = (yPVmax - yPVmin) / (yWmax - yWmin);
   // cout<<"Escalación en Y  = "<<sY<<endl;
    xpv = (sX * (xW - xWmin) + xPVmin + L );
    ypv = (sY *(yWmin - yW) - yPVmin + M);

}





