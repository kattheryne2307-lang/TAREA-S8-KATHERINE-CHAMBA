#include <iostream>
using namespace std;

float calcularDescuento(float precio, float porcentaje) {
    return precio * (porcentaje / 100.0);
}

float calcularTotalPagar(float precioBase, float d1, float d2) {
    float desc1 = calcularDescuento(precioBase, d1);
    float desc2 = calcularDescuento(precioBase, d2);
    return precioBase - desc1 - desc2;
}

int main() {
    float precio, d1, d2;

    cout << "Ingrese precio del plan: ";
    cin >> precio;
    cout << "Ingrese porcentaje de descuento por fidelidad: ";
    cin >> d1;
    cout << "Ingrese porcentaje de descuento promocional: ";
    cin >> d2;

    float total = calcularTotalPagar(precio, d1, d2);

    cout << "\nMonto final a pagar: $" << total << endl;

    return 0;
}
