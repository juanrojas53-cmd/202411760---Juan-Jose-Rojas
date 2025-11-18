#include <iostream>
using namespace std;

class Lista {
public:
    int* numeros;
    int tamano;

    Lista(int t) {
        tamano = t;
        numeros = new int[t];
        for (int i = 0; i < t; i++) {
            numeros[i] = i+1;
        }
    }

    ~Lista() {
        delete[] numeros;
        cout << "\nMemoria liberada correctamente";
    }
};

int main() {
    Lista lista(5);

    return 0;
}
