#include <iostream>

using namespace std;

void showAverage()
{
    float grades[5] = {3.5, 4.0, 2.8, 3.9, 4.2};

    float sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += grades[i];
    }

    float average = sum / 5;
    cout << "El promedio es: " << average << endl;
}

int main()
{
    showAverage();
    return 0;
}
