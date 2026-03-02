#include <iostream>
using namespace std;

int main() {

    int leer = 1;      // 001
    int escribir = 2;  // 010
    int ejecutar = 4;  // 100

    int permiso;

    cout << "Ingrese un numero entre 0 y 7: ";
    cin >> permiso;

    cout << "Permisos:\n";

    if (permiso == 0) {
        cout << "No tiene permisos\n";
    } else {

        if (permiso & leer)
            cout << "Leer\n";

        if (permiso & escribir)
            cout << "Escribir\n";

        if (permiso & ejecutar)
            cout << "Ejecutar\n";
    }

    return 0;
}
