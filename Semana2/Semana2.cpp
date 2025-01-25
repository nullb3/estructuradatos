// Realice un programa que lea de
// la entrada estándar los siguientes datos de
// una persona :
// ▫ Edad : dato de tipo entero.
// ▫ Sexo : dato de tipo carácter.
// ▫ Altura en metros : dato de tipo real.

#include <iostream>

using namespace std;

int main()
{
    int edad;
    char sexo;
    double altura;

    cout << "Digita tu edad:" << endl;
    cin >> edad;
    cout << "Digita tu sexo (M o F):" << endl;
    cin >> sexo;
    cout << "Digita tu altura en metros:" << endl;
    cin >> altura;

    system("cls");

    cout << "Edad: " << edad << " anos." << endl;
    cout << "Sexo: " << sexo << "." << endl;
    cout << "Altura en metros: " << altura << "m." << endl;

    return 0;
}