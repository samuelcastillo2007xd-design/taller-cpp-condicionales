#include <iostream>
using namespace std;

int main() {

    double num1, num2;
    char op;

    cout << "Digite el primer numero: ";
    cin >> num1;

    cout << "Digite el segundo numero: ";
    cin >> num2;

    cout << "Digite el operador (+, -, *, /): ";
    cin >> op;

    switch(op) {

        case '+':
            cout << "Resultado = " << num1 + num2;
            break;

        case '-':
            cout << "Resultado = " << num1 - num2;
            break;

        case '*':
            cout << "Resultado = " << num1 * num2;
            break;

        case '/':
            if(num2 != 0)
                cout << "Resultado = " << num1 / num2;
            else
                cout << "No se puede dividir entre 0";
            break;

        default:
            cout << "Operador incorrecto";
    }

    return 0;
}
