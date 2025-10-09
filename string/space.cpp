#include <iostream>
#include <string>
#include <cctype>  
using namespace std;


void replaceSpaceWithMiddleGuiderString() 
{
    string originalString = "Hola soy Juan";
    string newString = "";

    for (size_t i = 0; i < originalString.size(); i++) 
    {
        char letter = originalString[i];
        if (letter == ' ') 
            newString += "-";
        else 
            newString += letter;
    }

    cout << newString << endl;
}


void duplicateString()
{
    string originalString = "Hola soy Juan";
    string newString = "";

    for (size_t i = 0; i < originalString.size(); i++)
    {
        char letter = originalString[i];
        newString += letter;
        newString += letter; // se repite el carácter
    }

    cout << newString << endl;
}


void removeVowel()
{
    string originalString = "Hola soy Juan";
    string newString = "";

    for (size_t i = 0; i < originalString.size(); i++)
    {
        char c = tolower(originalString[i]);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
            newString += originalString[i];
    }

    cout <<  newString << endl;
}


void invertString()
{
    string originalString = "Hola soy Juan";
    string newString = "";

    for (int i = originalString.size() - 1; i >= 0; i--)
        newString += originalString[i];

    cout <<  newString << endl;
}


void wordsCounter()
{
    string originalString = "Hola soy Juan";
    int count = 1; 

    for (size_t i = 0; i < originalString.size(); i++)
    {
        if (originalString[i] == ' ')
            count++;
    }

    cout << "Número de palabras: " << count << endl;
}


void verifyPasswordIsSecure()
{
   
}

int main() 
{
    replaceSpaceWithMiddleGuiderString();
    duplicateString();
    removeVowel();
    invertString();
    wordsCounter();
    verifyPasswordIsSecure();

    return 0;
}