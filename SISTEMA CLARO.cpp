#include <iostream>
using namespace std;

int main() {
    int opcion, edad, metodo;
    float base, iva, ice = 0, totalMensual, descEdad = 0;
    float costoInstalacion = 120.00, descInst = 0;

    do {
        cout << "\n=== SERVICIOS CLARO EP ===\n";
        cout << "1. Telefonia Fija ($7.99)\n";
        cout << "2. TV Satelital ($28.50)\n";
        cout << "3. Internet Hogar ($18.00)\n";
        cout << "4. Salir\n";
        cout << "Seleccione opcion: ";
        cin >> opcion;

        if (opcion == 4) break;

        switch (opcion) {
        case 1: base = 7.99; break;
        case 2: base = 28.50; break;
        case 3: base = 18.00; break;
        default:
            cout << "Opcion invalida.\n";
            continue;
        }

        iva = base * 0.15;
        if (opcion == 2) ice = base * 0.15;

        cout << "Ingrese la edad del cliente: ";
        cin >> edad;

        if (edad > 65) {
            descEdad = base * 0.50;
        }

        totalMensual = (base - descEdad) + iva + ice;

        cout << "\nMetodo de pago instalacion:\n";
        cout << "1. Tarjeta de credito (50% desc)\n";
        cout << "2. Efectivo (10% desc)\n";
        cout << "3. Otro (sin descuento)\n";
        cin >> metodo;

        if (metodo == 1) descInst = costoInstalacion * 0.50;
        else if (metodo == 2) descInst = costoInstalacion * 0.10;

        cout << "\n=== RESUMEN ===\n";
        cout << "Precio base: $" << base << endl;
        cout << "IVA: $" << iva << endl;
        if (opcion == 2) cout << "ICE: $" << ice << endl;
        cout << "Descuento tercera edad: $" << descEdad << endl;
        cout << "Precio mensual final: $" << totalMensual << endl;
        cout << "Costo final instalacion: $" << costoInstalacion - descInst << endl;

    } while (opcion != 4);

    return 0;
}
