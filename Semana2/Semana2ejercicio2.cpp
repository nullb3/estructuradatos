// Escribe la siguiente expresión
// como expresión en C++: (a + (b / c)) / (d + (e / f))

#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
 
    cout << "Digita un numero a: ";
    cin >> a;
    cout << "Digita un numero b: ";
    cin >> b;
    cout << "Digita un numero c: ";
    cin >> c;
    cout << "Digita un numero d: ";
    cin >> d;
    cout << "Digita un numero e: ";
    cin >> e;
    cout << "Digita un numero f: ";
    cin >> f;

    cout << "El resultado para (a+(b/c))/(d+(e/f)) es: " << (a + (b / c)) / (d + (e / f));

    return 0;
}
