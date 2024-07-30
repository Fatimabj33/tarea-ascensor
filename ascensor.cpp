#include <iostream>
using namespace std;

// Función para mostrar el estado del ascensor en un piso dado
void mostrarEstadoAscensor(int piso) {
    cout << "El ascensor se encuentra en el piso " << piso << endl;
}

// Función para simular la apertura de las puertas del ascensor
void abrirPuertas() {
    cout << "Se han abierto las puertas del ascensor" << endl;
}

// Función para simular el cierre de las puertas del ascensor
void cerrarPuertas() {
    cout << "Se han cerrado las puertas del ascensor" << endl;
}

int main() {
    int pisoActual = 1; // El ascensor comienza en el piso 1
    int pisoDeseado;
    char continuar;

    do {
        abrirPuertas(); // Acción de abrir la puerta

        cout << "Ingrese el piso al que desea ir: ";
        cin >> pisoDeseado;
        cerrarPuertas(); // Acción de cerrar la puerta
        if (pisoDeseado > pisoActual) {
            cout << "El ascensor va subiendo..." << endl;
            for (int piso = pisoActual + 1; piso <= pisoDeseado; ++piso) {
                mostrarEstadoAscensor(piso);
                pisoActual = piso;
            }
        } else if (pisoDeseado < pisoActual) {
            cout << "El ascensor va bajando..." << endl;
            for (int piso = pisoActual - 1; piso >= pisoDeseado; --piso) {
                mostrarEstadoAscensor(piso);
                pisoActual = piso;
            }
        } else {
            cout << "Ya estás en el piso deseado." << endl;
        }
        abrirPuertas(); // Acción de abrir la puerta

        cout << "¿Desea continuar usando el ascensor? (S/N): ";
        cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    cout << "El ascensor se ha apagado. ¡Hasta luego!" << endl;

    return 0;
}
