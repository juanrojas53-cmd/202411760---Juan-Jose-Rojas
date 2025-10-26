#include <iostream>

using namespace std;

bool tieneDigito(string codigo)
{
    for (int i = 0; i < codigo.size(); i++)
    {
        if (codigo[i] >= 48 && codigo[i] <= 57)
        {
            return true;
        }
    }
    return false;
}

bool tieneSimboloEspecial(string codigo)
{
    for (int i = 0; i < codigo.size(); i++)
    {
        if (codigo[i] ==64 || codigo[i] ==35 || codigo[i] ==36 || codigo[i] ==37)
        {
            return true;
        }
    }
    return false;
}

bool sinEspacios(string codigo)
{
    for (int i = 0; i < codigo.size(); i++)
    {
        if (codigo[i] == 32)
        {
            return false;
        }
    }
    return true;
}

void verificarAcceso()
{
    string codigo;
    cout << "Ingrese el codigo de acceso: ";
    getline(cin, codigo);

    if (tieneDigito(codigo) && tieneSimboloEspecial(codigo) && sinEspacios(codigo))
    {
        cout << "Codigo valido" << endl;
    }
    else
    {
        cout << "Codigo invalido" << endl;
    }
}

int main()
{
    verificarAcceso();
    return 0;
}
