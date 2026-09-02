#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre, apellido;
    int edad;

    cout << "Ingresa tu nombre: ";
    getline(cin, nombre);

    cout << "Ingresa tu apellido: ";
    getline(cin, apellido);
    
    cout <<"ingrese la edad: ";
    cin >>edad;

    cout << "\nNombre completo: " << nombre << " " << apellido << endl;
    cout << "La edad es: " <<edad << endl;

    return 0;
}
