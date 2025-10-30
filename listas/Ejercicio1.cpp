#include <iostream>

using namespace std;

void showEmployees()
{
    string employees[4] = {"Juan", "Daniel", "Osman", "Pedro"};

    cout << "Lista de empleados:" << endl;
    
    for (int i = 0; i < 4; i++)
    {
        cout << "- " << employees[i] << endl;
    }
}

int main()
{
    showEmployees();
    return 0;
}
