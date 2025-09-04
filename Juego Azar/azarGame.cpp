#include <iostream>
using namespace std;

int main() {
    int secretNumber, numberPlayer;
   
    cout << "Jugador 1 ingrese el número secreto: ";
    cin >> secretNumber;

    
    cout << "Jugador 2 intenta adivinar el número" << endl;
    cout << "Ingresa tu número: ";
    cin >> numberPlayer;

    while (numberPlayer != secretNumber) {
        if (numberPlayer > secretNumber) 
        {
            cout << "El número secreto es más pequeño." << endl;
        } 
        else 
        {
            cout << "El número secreto es más grande." << endl;
        }

        cout << "Ingresa tu número: ";
        cin >> numberPlayer;
    }

    cout << "Felicidades has adivinado el número." << endl;

    return 0;
}
