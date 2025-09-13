#include <iostream>

using namespace std;

void mostrarTabla(int number) 
{
    for (int i = 1; i <= 10; i++) 
    {
        int resultado = number * i; 
        cout << number << " x " << i << " = " << resultado << endl;
    }
}

int main() 
{
    int num;
    cout << "Ingrese un numero para mostrar su tabla de multiplicar: ";
    cin >> num;

    mostrarTabla(num);

    return 0;
}
