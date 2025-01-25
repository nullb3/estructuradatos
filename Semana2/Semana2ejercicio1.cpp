// Escribir un programa que lea el nombre, la edad y el número de teléfono de
// un usuario y los muestre en pantalla.

#include <iostream>

using namespace std;

int main()
{
    // Declaracion de Variables
    string nombre;
    int edad;
    string telefono;

    //Entrada y Salida
    cout << "Por favor, digita tu nombre: ";
    cin >> nombre;
    cout << "Por favor, digita el tu edad en numeros: ";
    cin >> edad;
    cout << "Por favor, digita tu telefono: ";
    cin >> telefono;

    system("cls"); //Limpiar la pantalla

    cout << "Tu nombre es: " << nombre << "\nTu edad es: " << edad << "\nTu telefono es: " << telefono;

    return 0;
}