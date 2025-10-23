#include <iostream>
using namespace std;


bool acceso(string posibleUser, string posiblePassword)
{
    string user = "admin";
    string password = "2025";

    if (posibleUser == user && posiblePassword == password)
        return true;
    else
        return false;
}

int main()
{
    string posibleUser,posiblePassword;
    cout << "Ingrese usuario: ";
    cin >> posibleUser;

    cout << "Ingrese contrasena: ";
    cin >> posiblePassword;
    int intentos = 0;
    const int MAX_INTENTOS = 3;
    while (!acceso(posibleUser,posiblePassword) && intentos  < MAX_INTENTOS - 1)
    {
        intentos ++;
        cout << "acceso denegado" << endl;
        cout << "intente de nuevo con el ususario" << endl;
        cin >> posibleUser;
        cout << "intente de nuevo con la contrasena" << endl;
        cin >> posiblePassword;
    
    }
    

    if (acceso(posibleUser,posiblePassword))
    {
        cout << "Bienvenido administrador";
    }
    else
    {
        cout << "acceso denegado";
    }
    return 0;
}