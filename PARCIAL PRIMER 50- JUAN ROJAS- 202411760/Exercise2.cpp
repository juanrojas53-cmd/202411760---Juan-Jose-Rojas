#include <iostream>

using namespace std;

void printShifts(int initialShift, int endShift) 
{
    if (initialShift > endShift) 
    {
        cout << "Error: el turno inicial no puede ser mayor que el final" << endl;
    } 
    else 
    {
        cout << "La maquina trabajo en los turnos: ";
        int currentShift = initialShift;
        while (currentShift <= endShift) 
        {
            cout << currentShift << " ";
            currentShift++;
        }
        cout << endl;
    }
}

int main() {
    int start, end;

    cout << "Ingresa el primer turno: ";
    cin >> start;

    cout << "Ingresa el ultimo turno: ";
    cin >> end;

    printShifts(start, end);

    return 0;
}
