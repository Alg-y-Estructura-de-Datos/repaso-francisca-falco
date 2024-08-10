/*Escribe un programa en C++ que tenga una función llamada marcarAsiento que
tome un puntero a un booleano y lo cambie a true para indicar que el asiento está
reservado. Luego, en la función main, crea un arreglo que represente los asientos
del teatro (inicialmente todos libres), pide al usuario que elija un asiento para
reservar, llama a la función marcarAsiento y muestra el estado de los asientos antes
y después de la reserva.*/
#include <iostream>
using namespace std;

void marcarAsiento(bool* asiento){
    *asiento=true;
}

int main(){
    const int totalAsientos=10;
    bool asientos[totalAsientos]={false}; // Todos los asientos están libres al inicio

    cout<<"Estado de los asientos antes de la reserva (0=Libre, 1=Reservado):"<<endl;
    for(int i=0;i<totalAsientos;i++){
        cout<<"Asiento "<<i+1<<": "<<asientos[i]<<endl;
    }

    int asientoElegido;
    cout<<"Elige un asiento para reservar (1-"<<totalAsientos<<"): ";
    cin>>asientoElegido;

    // Validar que el número de asiento esté en el rango permitido
    if(asientoElegido<1 || asientoElegido>totalAsientos){
        cout<<"Numero de asiento invalido"<<endl;
        return 1;
    }

    // Reservar el asiento
    marcarAsiento(&asientos[asientoElegido-1]);

    cout<<"Estado de los asientos despues de la reserva (0=Libre, 1=Reservado):"<<endl;
    for(int i=0;i<totalAsientos;i++){
        cout<<"Asiento "<<i+1<<": "<<asientos[i]<<endl;
    }
    return 0;
}
