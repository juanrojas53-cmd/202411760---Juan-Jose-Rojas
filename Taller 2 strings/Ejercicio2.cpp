
#include <iostream>

using namespace std;

bool esVocal(char vocal)
{
    if (vocal=='a'||vocal=='e'||vocal=='i'||vocal=='o'||vocal=='u'||vocal=='A'||vocal=='E'||vocal=='I'||vocal=='O'||vocal=='U')
    {
        return true;
    }
    return false;
}

int contarVocales(string texto)
{
    int vocales = 0;

    for (int i = 0; i < texto.size(); i++)
    {
        if (esVocal(texto[i]))
        {
            vocales++;
        }
    }
    return vocales;
}

int contarConsonantes(string texto)
{
    int consonantes = 0;

    for (int i = 0; i < texto.size(); i++)
    {
        if ((texto[i] >= 65 && texto[i] <= 90) || (texto[i] >= 97 && texto[i] <= 122))
        {
            if (!esVocal(texto[i]))
            {
                consonantes++;
            }
        }
    }
    return consonantes;
}

int contarNoAlfabeticos(string texto)
{
    int otros = 0;

    for (int i = 0; i < texto.size(); i++)
    {
        if (!((texto[i] >= 65 && texto[i] <= 90) || (texto[i] >= 97 && texto[i] <= 122)))
        {
            otros++;
        }
    }
    return otros;
}

void analizarTexto ()
{
    string texto;
    cout << "Ingrese su texto: ";
    getline(cin, texto);

    cout << "Vocales: " << contarVocales(texto) << endl;
    cout << "Consonantes: " << contarConsonantes(texto) << endl;
    cout << "No alfabeticos: " << contarNoAlfabeticos(texto) << endl;
}

int main()
{
    analizarTexto();
    return 0;
}
