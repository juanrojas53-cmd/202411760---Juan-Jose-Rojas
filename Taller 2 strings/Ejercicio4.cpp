#include <iostream>

using namespace std;

int contarPalabras(string frase)
{
    int contador = 1;

    for (int i = 0; i < frase.size(); i++) {
        if (frase[i] == 32) {
            contador++;
        }
    }
    return contador; 
}

int contarPuntuacion(string frase)
{
    int signos = 0;

    for (int i = 0; i < frase.size(); i++)
    {
        if (frase[i]==46 || frase[i]==44 || frase[i]==59 || frase[i]==33 || frase[i]==63)
        {
            signos++;
        }
    }
    return signos;
}

bool terminaEnPunto(string frase)
{
    for (int i = 0; i < frase.size(); i++)
    {
        char p = frase[frase.size()-1];
        if (p == '.')
        {
            return true;
        }
    }
    return false;
}

void analizarFrase()
{
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    cout << "Palabras: " << contarPalabras(frase) << endl;
    cout << "Signos de puntuacion: " << contarPuntuacion(frase) << endl;

    if (terminaEnPunto(frase))
    {
        cout << "La frase termina con punto" << endl;
    }
    else
    {
        cout << "La frase no termina con punto" << endl;
    }
}

int main()
{
    analizarFrase();
    return 0;
}
