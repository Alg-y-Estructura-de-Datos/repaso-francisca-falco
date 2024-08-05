/*Imagina que tienes dos vasos, uno con jugo de naranja y otro con jugo de manzana.
Queremos escribir un programa en C++ que tenga una función llamada
intercambiarJugos que tome dos vasos (representados como variables) y los
intercambie. Luego, en la función main, pedimos al usuario que ingrese la cantidad
de jugo en cada vaso, llamamos a la función intercambiarJugos y mostramos las
cantidades después del intercambio.*/
#include <iostream>
using namespace std;

void intercambiarJugos(float &vaso1,float &vaso2);

int main() {
    float vaso1,vaso2;
    cout<<"Ingrese la cantidad de jugo en el vaso 1 (en litros): ";
    cin>>vaso1;
    cout<<"Ingrese la cantidad de jugo en el vaso 2 (en litros): ";
    cin>>vaso2;

    intercambiarJugos(vaso1,vaso2);

    cout<<"La cantidad de jugo en el vaso 1 luego del intercambio es: "<<vaso1<<endl;
    cout<<"La cantidad de jugo en el vaso 2 luego del intercambio es: "<<vaso2<<endl;
}
void intercambiarJugos(float &vaso1,float &vaso2){
    double temp=vaso1;
    vaso1=vaso2;
    vaso2=temp;
}
