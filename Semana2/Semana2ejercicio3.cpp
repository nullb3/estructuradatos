// Escribe un programa que lea de la entrada estándar dos números y muestre
// en la salida estándar su suma, resta, multiplicación y división.

#include <iostream>

using namespace std;

int main()
{
    double a;
    double b;
    double suma;
    double resta;
    double mult;
    double div;

    cout << "Digita un numero a: ";
    cin >> a;
    cout << "Digita un numero b: ";
    cin >> b;

    suma = a + b;
    resta = a - b;
    mult = a * b;
    div = a / b;

    cout << "\nLa suma de " << a << " + " << b << " es : " << suma;
    cout << "\nLa resta de " << a << " - " << b << " es : " << resta;
    cout << "\nLa multiplicacion de " << a << " * " << b << " es : " << mult;
    cout << "\nLa division de " << a << " / " << b << " es : " << div;

    return 0;
}