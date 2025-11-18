#include <iostream>
using namespace std;

class Lista {
public:
    int* numeros;
    int tamano;

    // Constructor que pide el tamaño
    Lista(int t) {
        tamano = t;
        numeros = new int[tamano];

        for (int i = 0; i < tamano; i++) {
            numeros[i] = 0; // inicializamos
        }
    }

    void imprimir() {
        for (int i = 0; i < tamano; i++) {
            cout << numeros[i] << " ";
        }
    }
};

int main() {
    Lista lista(5);

    lista.imprimir();

    return 0;
}
