/* Crear un programa con un menú de opciones visible por terminal, que
tenga los métodos sumarEnteros, calcularAreaCirculo y calcular potencia
de un número. El menú deberá solicitar los parámetros al usuario de acuerdo
a la opción seleccionada.
*/
#include <iostream>
#include <cmath>
using namespace std;

int sumarEnteros(int,int);
int calcularAreaCirculo(double);
int calcularPotencia(double,int);

int main(){
    int opcion;

    do {
        cout<<"Menu"<<endl;
        cout<<"1. Sumar enteros"<<endl;
        cout<<"2. Calcular area de un circulo"<<endl;
        cout<<"3. Calcular potencia de un numero"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Seleccione una opcion (1-4): ";
        cin>>opcion;

        switch(opcion) {
            case 1: {
                int a,b;
                cout<<"Ingrese un numero: ";
                cin>>a;
                cout << "Introduce el segundo numero entero: ";
                cin>>b;
                cout<<"La suma de "<<a<<" y "<<b<<" es "<<sumarEnteros(a,b)<<endl;
                break;
            }
            case 2: {
                double radio;
                cout<<"Ingrese el radio del circulo: ";
                cin>>radio;
                cout<<"El area del circulo con radio "<<radio<<" es "<<calcularAreaCirculo(radio)<<endl;
                break;
            }
            case 3: {
                double base;
                int exponente;
                cout<<"Introduce la base: ";
                cin>>base;
                cout<<"Introduce el exponente: ";
                cin>>exponente;
                cout<<base<<" elevado a la "<<exponente<<" es "<<calcularPotencia(base, exponente)<<endl;
                break;
            }
            case 4:
                cout<<"Salir"<<endl;
                break;
            default:
                cout<<"Opcion no valida"<<endl;
                break;
        }
        cout<<endl;
    } while(opcion !=4);
}
int sumarEnteros(int a,int b){
    return a+b;
}
int calcularAreaCirculo(double radio){
    const double PI=3.14159265358979323846;
    return PI*radio*radio;
}
int calcularPotencia(double base, int exponente){
    return pow(base,exponente);
}