


#include <iostream>
using namespace std;

bool passwordSecurity(string password)
{
    bool hasDigit = false;
    bool hasUpper = false;
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
    if (hasDigit && hasUpper)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main ()
{
    string password;
    cout << "ingrese una contrasena para saber si es segura" << endl;
    cin >> password;
    int intentos = 0;
    int MAX_INTENTOS = 3;
    if (passwordSecurity(password))
        {
            cout << "contrasena segura " << endl;
        }
        else
        {
            cout << "contraseña insegura";
            intentos++;
            while (intentos <= MAX_INTENTOS)
                {
                    cout << "intente de nuevo"<< endl;
                    cin >> password; 
                }
    

    }
    
}