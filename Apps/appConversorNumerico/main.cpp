#include <iostream>
#include "conversor.h"
using namespace std;


//const int i = 0;

//void convDecBinI(int n, int *bin){
//    int i = 31;
//    while(n > 0){
//        bin[i--] = n%2;
//        n /= 2;
//    }
//}

//void convDecBinR(int n, int *bin){
//    //Las variables que tienen el modificador static mantienen su valor en sucesivas llamadas al metodo
//    static int i = 31;
//    if(n > 0){
//        bin[i--] = n%2;
//        convDecBinR(n/2, bin);
//    }
//}

int main()
{
    int opc, n;
    //n = 100;
    //int *binario = new int [32];
    int binario [32]; //Arreglo estatico
    for(int i = 0; i < 32; i++){
        binario[i] = 0;
        //cout<<i<<" = "<<binario[i]<<endl;
    }
    Conversor miconversor;
    bool bandera = true;
    while(bandera){
        cout<<endl<<"MENU"<<endl<<"1)Binario con recursividad"<<endl<<"2)Binario con iteracion"<<endl<<"3)Salir"<<endl;
        cout<<"Tu opcion: ";
        cin>>opc;
        switch (opc) {
        case 1:
            cout<<endl<<"Ingrese un numero: ";
            cin>>n;
            miconversor.convDecBinR(n, binario);
            cout<<n<<" en binario es ";
            for(int i = 0; i < 32; i++){
                printf("%d", binario[i]);
                //printf("%d,", binario[i]);
            }
            cout<<endl;
            break;
        case 2:
            cout<<endl<<"Ingrese un numero: ";
            cin>>n;
            miconversor.convDecBinI(n, binario);
            cout<<n<<" en binario es ";
            for(int i = 0; i < 32; i++){
                printf("%d", binario[i]);
                //printf("%d,", binario[i]);
            }
            cout<<endl;
            break;
        case 3:
            bandera = false;
            break;
        default:
            cout<<"Opcion no valida"<<endl;
            break;
        }
    }
    return 0;
}
