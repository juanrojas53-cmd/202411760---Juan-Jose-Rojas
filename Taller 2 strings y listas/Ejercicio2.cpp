#include <iostream>

using namespace std;

void analiseText()
{
    string text = "Desarrollo de Software";
    int vowels = 0;
    int consonants = 0;

    for (int i = 0; i < text.size(); i++)
    {
        char c = text[i];

        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
                c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    cout << "Texto: " << text << ", tiene:"<< endl;
    cout << "Vocales: " << vowels << endl;
    cout << "Consonantes: " << consonants << endl;

}

int main()
{
    analiseText();
    
    return 0;
}
