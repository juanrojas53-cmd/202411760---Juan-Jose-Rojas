#include <iostream>
using namespace std;

void letrasRepetidas() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;
    for (int i = 0; i < palabra.size(); i++) {
        int contador = 1;
        if (palabra[i] == '0')
            continue;

        for (int j = i + 1; j < palabra.size(); j++) {
            if (palabra[i] == palabra[j]) {
                contador++;
                palabra[j] = '0'; 
            }
        }

        if (contador > 1) {
            cout << "La letra '" << palabra[i] << "' se repite " << contador << " veces." << endl;
        }
    }
}

int main() {
    letrasRepetidas();
    return 0;
}