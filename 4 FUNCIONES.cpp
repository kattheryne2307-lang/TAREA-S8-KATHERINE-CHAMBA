#include <iostream>
using namespace std;

void ingresarDatos(float arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Ingrese el precio " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void encontrarMayorMenor(float arr[], int tam, float &mayor, float &menor) {
    mayor = arr[0];
    menor = arr[0];

    for (int i = 1; i < tam; i++) {
        if (arr[i] > mayor) mayor = arr[i];
        if (arr[i] < menor) menor = arr[i];
    }
}

void mostrarDatosProgramador() {
    cout << "\nPROGRAMADOR: Katherine Chamba\n";
    cout << "Carrera: Desarrollo de Software\n";
    cout << "Universidad: EPN - ESFOT\n";
}

void calcularDescuento() {
    string producto;
    float precio;

    cout << "\nIngrese el nombre del producto: ";
    cin >> producto;
    cout << "Ingrese el precio: ";
    cin >> precio;

    if (precio > 1000) {
        float desc = precio * 0.10;
        cout << "Descuento aplicado: $" << desc << endl;
        cout << "Precio final: $" << precio - desc << endl;
    } else {
        cout << "No aplica descuento. Precio final: $" << precio << endl;
    }
}

int main() {
    float precios[8];
    float mayor, menor;

    ingresarDatos(precios, 8);
    encontrarMayorMenor(precios, 8, mayor, menor);

    cout << "\nMayor precio ingresado: " << mayor;
    cout << "\nMenor precio ingresado: " << menor << endl;

    mostrarDatosProgramador();
    calcularDescuento();

    return 0;
}
