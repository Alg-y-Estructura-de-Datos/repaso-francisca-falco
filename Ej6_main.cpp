/* Escribe un programa en C++ que tenga una función llamada agregarContacto
que tome un vector<string> por referencia y dos string (uno para el nombre y
otro para el número de teléfono) y los agregue a la lista de contactos en
formato "Nombre: Número". También tendrá una función llamada mostrarContactos
que tome un vector<string> por referencia y muestre todos los contactos en la
lista. En la función main, permite al usuario agregar contactos y mostrar la
lista de contactos hasta que decida salir mediante el uso de menú.
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void agregarContacto(vector<string> &contactos,const string &nombre,const string &numero);
void mostrarContactos(const vector<string> &contactos);

int main(){
    vector<string> contactos;
    int opcion;

    do {
        cout<<"MENU"<<endl;
        cout<<"1. Agregar contacto"<<endl;
        cout<<"2. Mostrar contactos"<<endl;
        cout<<"3. SALIR"<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>opcion;

        if(cin.fail()){
            cout<<"Ingrese una opcion valida"<<endl;
            break;
        }

        switch (opcion){
            case 1:{
                string nombre,numero;
                cout<<"Ingrese el nombre: ";
                cin>>nombre;
                cout<<"Ingrese el numero de telefono: ";
                cin>>numero;
                agregarContacto(contactos,nombre,numero);
                break;
            }
            case 2:
                mostrarContactos(contactos);
                break;
            case 3:
                cout<<"Saliendo"<<endl;
                break;
        }
    } while(opcion != 3);

    return 0;
}

void agregarContacto(vector<string> &contactos,const string &nombre,const string &numero){
    contactos.push_back(nombre+": "+numero);
    cout<<"Contacto agregado: "<<nombre<<": "<<numero<<endl;
}

void mostrarContactos(const vector<string> &contactos){
    if (contactos.empty()){
        cout<<"No hay contactos en la lista"<<endl;
    }else{
        cout<<"Lista de contactos:"<<endl;
        for(const auto &contacto:contactos){
            cout<<contacto<<endl;
        }
    }
}