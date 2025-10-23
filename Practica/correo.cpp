#include <iostream>
using namespace std;

bool correoValido(string correo)
{
    bool tieneArroba = false;
    bool tienePunto = false;

    if (correo.size() < 5)
    {
        return false;
    }
    

    for (int i = 0; i < correo.size(); i++)
    {
        if (correo[i] == '@')
        {
            tieneArroba = true;

        }
            
        if (correo[i] == '.')
        {
            tienePunto = true;

        }
            
    }

    return (tieneArroba && tienePunto);
}

int main()
{
    string correo;
    cout << "Ingrese su correo: ";
    cin >> correo;

    if (correoValido(correo))
    {
        cout << "Correo válido" << endl;
    }
        
    else
    {
        cout << "Correo inválido " << endl;
    }
        

    return 0;
}