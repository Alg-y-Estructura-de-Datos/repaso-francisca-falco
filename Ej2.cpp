/*Escribe un programa en C++ que calcule el factorial de un número entero positivo
usando un bucle.*/
#include <iostream>
using namespace std;

unsigned factorial(int numero){
    if (numero==0)
        return 1;
    else
        return numero*factorial(numero-1);
    }

    int main() {
        int numero;
        unsigned factorial=1;
        cout<<"Ingrese un numero: ";
        cin>>numero;

        for (int i=1;i<=numero;i++) {
            factorial*=i;
        }

        cout<<"El factorial de "<<numero<<" es "<<factorial<<endl;

        return 0;
    }
