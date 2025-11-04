#include <iostream>

using namespace std;

void letterCount()
{
    string text = "Programacion en C++";
    int total = 0, whithoutSpaces = 0;

    for (int i = 0; i < text.size(); i++)
    {
        total++;
        if (text[i] != ' ')
        {
            whithoutSpaces++;
        }
    }

    cout << "Texto original: " << text << endl;
    cout << "Total de caracteres: " << total << endl;
    cout << "Caracteres sin espacios: " << whithoutSpaces << endl;
}
int main()
{
    letterCount();

    return 0;
}
