#include <iostream>
using namespace std;

int contarGuiones(string codigo)
{
    int guiones = 0;

    for (int i = 0; i < codigo.size(); i++)
    {
        if (codigo[i] == 45)
        {
            guiones++;
        }
    }
    return guiones;
}

int contarDigitos(string codigo)
{
    int digitos = 0;

    for (int i = 0; i < codigo.size(); i++)
    {
        if (codigo[i] >= 48 && codigo[i] <= 57)
        {
            digitos++;
        }
    }
    return digitos;
}

bool validarUltimaMayuscula(string codigo)
{
   for (int i = 0; i < codigo.size(); i++)
    {
        char c = codigo[codigo.size()-1];
        if (c >= 65 && c <= 90)
        {
            return true;
        }
    }
    return false;
}

void verificarCodigo()
{
    string codigo;
    cout << "Ingrese el codigo del producto: ";
    getline(cin, codigo);

    cout << "Cantidad de guiones: " << contarGuiones(codigo) << endl;
    cout << "Cantidad de digitos: " << contarDigitos(codigo) << endl;

    if (validarUltimaMayuscula(codigo))
    {
        cout << "El codigo termina con mayuscula" << endl;
    }
    else
    {
        cout << "El codigo no termina con mayuscula" << endl;
    }
}

int main()
{
    verificarCodigo();
    return 0;
}

