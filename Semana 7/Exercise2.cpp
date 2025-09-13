#include <iostream>

using namespace std;

string clasificarNumero(int number) 
{
    if (number > 0) 
    {
        return "Positivo";
    } 
    else if (number < 0) 
    {
        return "Negativo";
    } 
    else 
    {
        return "Cero";
    }
}

int main() 
{
    int num;

    cout << "Ingrese un numero entero: ";
    cin >> num;

    cout << "El numero es: " << clasificarNumero(num)<< endl;

    return 0;
}
