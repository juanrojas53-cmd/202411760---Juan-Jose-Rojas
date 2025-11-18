#include <iostream>
using namespace std;

class Lista {
public:
    int* numeros;
    int tamano;

    Lista(int t) {
        tamano = t;
        numeros = new int[tamano];

        cout << "Ingrese los valores:\n";
        for (int i = 0; i < tamano; i++) {
            cout << "Valor " << i + 1 << ": ";
            cin >> numeros[i];
        }
    }

    void imprimir() {
        cout << "Lista: ";
        for (int i = 0; i < tamano; i++) {
            cout << numeros[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Lista lista(3);
    lista.imprimir();

    return 0;
}
