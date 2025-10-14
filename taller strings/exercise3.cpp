#include <iostream>

using namespace std;

void commonLetter() 
{
    string word1, word2;
    cout << "Ingrese la primera palabra: ";
    cin >> word1;
    cout << "Ingrese la segunda palabra: ";
    cin >> word2;

    int contador = 0;
    for (int i = 0; i < word1.size(); i++)
    {
        for (int j = 0; j < word2.size(); j++)
        {
            if (word1[i] == word2[j]) 
            {
                contador++;
                break;
            }
        }
    }
    

    cout << "Letras en común: " << contador << endl;
}


int main() 
{
    
    commonLetter();

    return 0;
}
