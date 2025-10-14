#include <iostream>

using namespace std;

void removeVowel()
{
    string originalString = "Hola soy Juan";
    string newString = "";

    for (size_t i = 0; i < originalString.size(); i++)
    {
        char c (originalString[i]);
        if (c!= 'a' && c!= 'e' && c!= 'i' && c!= 'o' && c!= 'u' )
            newString += originalString[i];
    }

    cout <<  newString << endl;
}

int main() 
{

    removeVowel();

    return 0;
}