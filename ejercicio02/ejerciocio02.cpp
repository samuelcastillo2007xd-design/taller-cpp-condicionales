#include <iostream>
using namespace std;

int main() {

    double a, b, c;

    cout << "Ingrese lado A: ";
    cin >> a;

    cout << "Ingrese lado B: ";
    cin >> b;

    cout << "Ingrese lado C: ";
    cin >> c;

    if (a + b > c && a + c > b && b + c > a) {

        cout << "Si es triangulo\n";

        if (a == b && b == c)
            cout << "Equilatero\n";
        else if (a == b || a == c || b == c)
            cout << "Isoceles\n";
        else
            cout << "Escaleno\n";

        double mayor = a;
        if (b > mayor) mayor = b;
        if (c > mayor) mayor = c;

        double suma = a*a + b*b + c*c - mayor*mayor;

        if (mayor*mayor == suma)
            cout << "Rectangulo\n";
        else if (mayor*mayor > suma)
            cout << "Obtusangulo\n";
        else
            cout << "Acutangulo\n";

    } else {
        cout << "No es triangulo\n";
    }

    return 0;
}
