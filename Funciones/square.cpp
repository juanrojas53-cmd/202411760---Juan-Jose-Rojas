#include <iostream>
using namespace std;


int square(int number) {
    return number * number;
}

int main() {
    int num1, num2, option;

    cout << " CALCULADORA " << endl;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Seleccione una operacion:" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Cuadrado de un numero" << endl;
    cout << "Opcion: ";
    cin >> option;

    switch (option) {
        case 1:
            cout << "Resultado: " << (num1 + num2) << endl;
            break;
        case 2:
            cout << "Resultado: " << (num1 - num2) << endl;
            break;
        case 3:
            cout << "Resultado: " << (num1 * num2) << endl;
            break;
        case 4: {
            int number;
            cout << "Ingrese un numero para calcular su cuadrado: ";
            cin >> number;
            cout << "Resultado: " << square(number) << endl;
            break;
        }
        default:
            cout << "Opcion no valida." << endl;
    }

    return 0;
}
