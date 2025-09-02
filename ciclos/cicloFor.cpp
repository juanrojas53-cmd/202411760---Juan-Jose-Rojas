#include <iostream>
using namespace std;

int main() {
    int table;

    cout << "Tablas de multiplicar" << endl;
    cout << "Ingrese el número de la tabla que desea ver (1 - 10): ";
    cin >> table;

    if (table >= 1 && table <= 10) {
        cout << "\nTabla del " << table << ":" << endl;
        for (int i = 1; i <= 10; i++) 
        {
            cout << table << " x " << i << " = " << table * i << endl;
        }
    } else {
        cout << "Solo se permiten tablas del 1 al 10." << endl;
    }

    return 0;
}
