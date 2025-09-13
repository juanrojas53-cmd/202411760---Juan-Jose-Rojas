#include <iostream>
using namespace std;

int mayor(int firstNumber, int secondNumber) 
{
    if (firstNumber > secondNumber) 
    {
        return firstNumber;
    } 
    else 
    {
        return secondNumber;
    }
}

int main() 
{
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "El mayor es: " << mayor(num1, num2) << endl;

    return 0;
}
