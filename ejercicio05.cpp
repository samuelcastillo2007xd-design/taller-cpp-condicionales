#include <iostream>
#include <string>
using namespace std;

int main() {

    int nota;
    char letra;
    string estado;

    cout << "Ingrese una nota entre 0 y 100: ";
    cin >> nota;

    if (nota < 0 || nota > 100) {
        cout << "Nota no valida\n";
        return 0;
    }

    if (nota >= 90) {
        letra = 'A';
    }
    else if (nota >= 80) {
        letra = 'B';
    }
    else if (nota >= 70) {
        letra = 'C';
    }
    else if (nota >= 60) {
        letra = 'D';
    }
    else {
        letra = 'F';
    }

    if (letra == 'F')
        estado = "Reprobado";
    else
        estado = "Aprobado";

    cout << "Calificacion en letra: " << letra << endl;
    cout << "Estado: " << estado << endl;

    return 0;
}
