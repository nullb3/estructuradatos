// Escribir un programa que de la entrada estándar el precio de un producto y
// muestre en la salida estándar el precio del
// producto al aplicarle el IVA.

#include <iostream>

using namespace std;

int main()
{
    const double iva = 0.13;
    double precio1;
    double precioIva;

    cout << "Digita el precio del producto sin: " << endl;
    cin >> precio1;

    precioIva = precio1 + (precio1 * iva);

    system("cls");

    cout << "El precio final del producto es de :" << precioIva ;

    return 0;
}