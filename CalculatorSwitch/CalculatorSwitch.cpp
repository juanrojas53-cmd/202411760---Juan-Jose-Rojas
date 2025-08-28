#include <iostream>
using namespace std;

int main() {
    double num1, num2, resultado;
    int opcion;

    cout << "Bienvenido a la calculadora\n";
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "\nSeleccione una operacion:\n";
    cout << "1. Sumar\n";
    cout << "2. Restar\n";
    cout << "3. Multiplicar\n";
    cout << "4. Dividir\n";
    cout << "5. Modulo\n";
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            resultado = num1 + num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case 2:
            resultado = num1 - num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case 3:
            resultado = num1 * num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "Resultado: " << resultado << endl;
            } else {
                cout << "Error, no se puede dividir entre 0." << endl;
            }
            break;
        case 5:
            if ((int)num2 != 0) {
                cout << "Resultado: " << (int)num1 % (int)num2 << endl;
            } else {
                cout << "Error, no se puede calcular modulo con divisor 0." << endl;
            }
            break;
        default:
            cout << "Opcion no valida." << endl;
            break;
    }

    return 0;
}
