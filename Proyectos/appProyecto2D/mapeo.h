#ifndef MAPEO_H
#define MAPEO_H


class Mapeo
{
    float xWmin, yWmin, xWmax, yWmax;
    int xPVmin, yPVmin, xPVmax, yPVmax;

public:
    //Mapeo();
    void ventana(float wx1, float wy1, float wx2, float wy2);
    void puertoVision(int pvx1, int pvy1, int pvx2, int pvy2);
    void mapear(int, int, int &xpv, int &ypv, int L, int M);
};

#endif // MAPEO_H