#include <iostream>

using namespace std;

void changeLetters()
{
    string word, newWord = "";
    cout << "Ingrese una palabra (sin espacios): ";
    cin >> word;

    for (int i = 0; i < word.size(); i++) 
    {
        char c = word[i];
        if (i % 2 == 0) 
        {
            if (c >= 'a' && c <= 'z') c -= 32;
        } 
        else 
        { 
            if (c >= 'A' && c <= 'Z') c += 32;
        }
        newWord += c;
    }

    cout << "Resultado: " << newWord << endl;
}

int main() 
{
   
   changeLetters();

    return 0;
}

