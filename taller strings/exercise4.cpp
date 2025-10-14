#include <iostream>

using namespace std;


void counterWords() {
    int number, counter = 0;
    string palabra;

    cout << "Ingrese un numero: ";
    cin >> number;

    cout << "Ingrese palabras: " << endl;

    while (true) {
        cin >> palabra;
        if (palabra == "fin") break;
        if (palabra.size() >number)
            counter++;
    }

    cout << "Cantidad de palabras con as de " << number << "letras: " << counter << endl;
}


int main() {
 
    counterWords();

    return 0;
}

