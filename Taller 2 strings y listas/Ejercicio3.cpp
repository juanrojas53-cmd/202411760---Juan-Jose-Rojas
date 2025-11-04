#include <iostream>

using namespace std;

void averageAge()
{
    int ages[6] = {18, 21, 25, 30, 27, 22};
    int suma = 0;

    cout << "Edades:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << ages[i] << " ";
        suma += ages[i];
    }

    float average = (float)suma / 6;
    cout << "Promedio de edades: " << average << endl;
}

int main()
{
    averageAge();

    return 0;
}
