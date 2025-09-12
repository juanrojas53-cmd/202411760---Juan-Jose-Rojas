#include<iostream>

using namespace std;

bool esPar(int num) 
{
    if (num%2 = 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main() {
    int userNumber;
    bool isUserNumberPair;
    cout << "Ingresa tu valor " << endl;
    cin >> userNumber;
    isUserNumberPair = esPar(userNumber);
    if (isUserNumberPair)
    {
        cout << "El numero es par: " << endl;
    }
    else
    {
        cout << "El numeero es impar: " << endl;
    }

    return 0;

}