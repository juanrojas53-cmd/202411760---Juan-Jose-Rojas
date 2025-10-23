#include <iostream>
using namespace std;

bool correctPassword(string posiblePassword) {
    string password1 = "1234";
    string password2 = "clave123";

    if (posiblePassword == password1 || posiblePassword == password2) 
    {
        return true;
    } 
    return false;
}

int main() {
    string posiblePassword;

    cout << "Ingrese su contrasena: "<< endl;
    cin >> posiblePassword;

    while (!correctPassword(posiblePassword)) {
        cout << "Acceso denegado. Intente de nuevo: ";
        cin >> posiblePassword;
    }

    cout << "Acceso concedido " << endl;

    return 0;
}