#include<iostream>

using namespace std;

int contarPalabras(string frase)
{
    int contador = 1;

    for (int i = 0; i < frase.size(); i++) 
    {
        if (frase[i] == 32) 
        {
            contador++;
        }
    }
    return contador; 
}

string palabraLarga(string frase)
{
    
}

void analizarFrase()
{
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    cout << "Palabras: " << contarPalabras(frase) << endl;
    cout << "Palabra mas larga: " << palabraLarga(frase) << endl;

}

int main()
{
    analizarFrase();
    return 0;
}