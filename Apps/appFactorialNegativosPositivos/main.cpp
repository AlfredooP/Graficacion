#include <iostream>

using namespace std;

int factorial (int n){
    int fact = 1;
    bool neg = false;
    if(n < 0){
        n *= (-1);
        neg = true;
    }
    for(int i = n; i > 0; i--){
        fact *= i;
    }

    if(neg == true)
        return fact * -1;
    return fact;
}

int main()
{
    int num;
    cout << "Ingrese un numero: " << endl;
    cin  >> num;
    if(num < 13)
        cout << "El factorial de " << num << " es " << factorial(num) << endl;
    return 0;
}
