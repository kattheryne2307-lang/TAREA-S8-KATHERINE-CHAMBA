#include <iostream>
using namespace std;

int main() {
    int arreglo[5];
    bool lleno = false;
    int opcion;

    do {
        cout << "\n=== MENU PRINCIPAL ===\n";
        cout << "1. Llenar el arreglo\n";
        cout << "2. Sumar elementos\n";
        cout << "3. Modificar una posicion\n";
        cout << "4. Salir\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Ingrese 5 valores enteros:\n";
            for (int i = 0; i < 5; i++) {
                cout << "Valor [" << i << "]: ";
                cin >> arreglo[i];
            }
            lleno = true;
            cout << "Arreglo llenado correctamente.\n";
            break;

        case 2:
            if (!lleno) {
                cout << "Error: El arreglo no ha sido llenado.\n";
            } else {
                int suma = 0;
                for (int i = 0; i < 5; i++)
                    suma += arreglo[i];
                cout << "La suma total es: " << suma << endl;
            }
            break;

        case 3:
            if (!lleno) {
                cout << "Error: El arreglo no ha sido llenado.\n";
            } else {
                int pos, nuevo;
                cout << "Ingrese la posicion (0-4): ";
                cin >> pos;

                if (pos >= 0 && pos < 5) {
                    cout << "Ingrese el nuevo valor: ";
                    cin >> nuevo;
                    arreglo[pos] = nuevo;
                    cout << "Modificacion realizada.\n";
                } else {
                    cout << "Posicion invalida.\n";
                }
            }
            break;

        case 4:
            cout << "Saliendo...\n";
            break;

        default:
            cout << "Opcion invalida.\n";
        }

    } while (opcion != 4);

    return 0;
}
