#include <iostream>

using namespace std;
#include <stdlib.h>
#include <time.h>

//void asignarNumeros(int *v);

void asignarNumeros(int *v){
//void asignarNumeros(int v[]){
//void asignarNumeros(int v[5]){
    srand(time(NULL));
    for(int i = 0; i < 5; i++){
        //v[i] = rand()%90+10;
        *(v+i) = rand()%90+10;
        cout<<v[i]<<endl;
    }
}

int main()
{
    int vec[5];
    cout<<"Dirección: "<<hex<<&vec<<dec<<endl;
    asignarNumeros(vec);

    for(int i = 0; i < 10; i++){
        cout<<vec[i]<<endl;
    }

//    int a = 0;
//    cout<<"Valor de a: "<<a<<endl;//endl = salto de linea '\n'
//    cout<<"Direccion de a: "<<&a<<endl;
//    printf("Direccion de a: %x\n", &a);

//    //Declaracion de un puntero
//    int *pa = &a; //& proporciona la direccion de una variable en memoria

//    *pa += 15;

//    cout<<"Valor de a: "<<a<<'\n'<<endl;
//    cout<<"Valor de *pa: "<<*pa<<'\n'<<endl;
//    cout<<"Direccion de pa: "<<pa<<endl; //La direccion de un puntero no se le debe de anteponer un &, ya que esta implicito
//    printf("Direccion de pa: %x\n", pa);


    //Inicializar la semilla
//  void asignarNumeros(int *v){
//    srand(time(NULL));
//    for(int i = 0; i < 10; i++){
//        v[i] = rand()%90+10;
//        cout<<v[i]<<endl;
//    }
//  }

    //Utilizando notacion de puntero
//    int *pvec = vec;
//    for(int i = 0; i < 10; i++){
//        pvec[i] = rand()%90+10;
//        cout<<vec[i]<<endl;
//    }

    //Utilizando un metodo para asignar los valores


//    pvec=vec;
//    cout<<"<-------"<<endl;
//    for(int i = 0; i < 10; i++){
//        *pvec++= rand()%90+10;
//        cout<<*(pvec+i)<<endl;
//    }
//    cout<<"<-------"<<endl;
//    for(int i = 0; i < 10; i++){
//        *pvec= rand()%90+10;
//        cout<<*pvec++<<endl;
//    }
    return 0;
}

//void asignarNumeros(int *v){
//    srand(time(NULL));
//    for(int i = 0; i < 10; i++){
//        v[i] = rand()%90+10;
//        cout<<v[i]<<endl;
//    }
//}
