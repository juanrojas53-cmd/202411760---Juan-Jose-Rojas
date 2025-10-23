#include <iostream>
using namespace std;

bool correctPassword(string password)
{
    bool hasUpper = false;
    bool hasDigit = false;

    if (password.length() < 8)
    {
        return false;
    }
    for (int i = 0; i < password.length(); i++)
    {
        if (isupper(password[i])) 
        {
            hasUpper = true;
        }
        else if (isdigit(password[i])) 
        {
            hasDigit = true;
        }
    }
    if (hasUpper && hasDigit)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string password;
    int intentos = 0;
    const int MAX_INTENTOS = 3;
    while (intentos < MAX_INTENTOS)
    {
        cout << "Ingrese una contrasena "<< endl;
        cin >> password;

        if (correctPassword(password))
        {
            cout << " Contrasena segura" << endl;
        }
        else
        {
            intentos++;
            cout << intentos;
            cout << "Contrasena insegura" << endl;
            cout << "**************************" << endl;

            if (intentos < MAX_INTENTOS)
            {
                cout << "intente de nuevo" << endl;
            }
            else
            {
                cout << " Acceso bloqueado ";
            }
        }
    }

    return 0;
}