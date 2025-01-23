#include "conversor.h"

//Conversor::Conversor(){

//}
//::operador de alcance
void Conversor::convDecBinI(int n, int *bin){
    int i = 31;
    while(n > 0){
        bin[i--] = n%2;
        n /= 2;
    }
}

void Conversor::convDecBinR(int n, int *bin){
    //Las variables que tienen el modificador static mantienen su valor en sucesivas llamadas al metodo
    static int i = 31;
    if(n > 0){
        bin[i--] = n%2;
        convDecBinR(n/2, bin);
    }
}
