#include <iostream>
using namespace std;


void sumar(int num, double b) {
    return a + b;
}

void restar(double a, double b) {
    return a - b;
}

// Funciones sin retorno (void)
void multiplicar(double a, double b) {
    cout << "Resultado: " << (a * b) << endl;
}

void dividir(double a, double b) {
    if (b != 0) {
        cout << "Resultado: " << (a / b) << endl;
    } else {
        cout << "Error, no se puede dividir entre 0." << endl;
    }
}

void modulo(int a, int b) {
    if (b != 0) {
        cout << "Resultado: " << (a % b) << endl;
    } else {
        cout << "Error, no se puede calcular modulo con divisor 0." << endl;
    }
}

int main() {
    double num1, num2;
    int option;

    cout << "===== CALCULADORA CON FUNCIONES =====" << endl;
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
    cin >> option;

    switch (option) {
        case 1:
            cout << "Resultado: " << sumar(num1, num2) << endl;
            break;
        case 2:
            cout << "Resultado: " << restar(num1, num2) << endl;
            break;
        case 3:
            multiplicar(num1, num2);
            break;
        case 4:
            dividir(num1, num2);
            break;
        case 5:
            modulo((int)num1, (int)num2);
            break;
        default:
            cout << "Opcion no valida." << endl;
            break;
    }

    return 0;
}
