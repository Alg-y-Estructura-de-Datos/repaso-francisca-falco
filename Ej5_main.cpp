/* Crear una clase calculadora, dicha clase debe tener los métodos sumar,
restar, dividir y multiplicar que realizarán operaciones en dos propiedades
A y B. En el método dividir verifique que el divisor no es 0. Si el divisor
es 0, arroje una excepción.
*/
#include "Calculadora.h"

int main(){
    try{
        double a,b;
        cout<<"Ingresa el valor de A: ";
        cin>>a;
        cout<<"Ingrese el valor de B: ";
        cin>>b;

        Calculadora calcule(a,b);

        cout<<"Suma: "<<calcule.sumar()<<endl;
        cout<<"Resta: "<<calcule.restar()<<endl;
        cout<<"Multiplicacion: "<<calcule.multiplicar()<<endl;
        cout<<"Division: "<<calcule.dividir()<<endl;
    }catch(const invalid_argument& e){
            cout<<"Error: "<<e.what()<<endl;
        }return 0;
    }
