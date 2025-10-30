#include <iostream>

using namespace std;

void valueMax()
{
    int numbers[6] = {0,8,77,65,47,30};

    int maxValue = 0;

    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] > maxValue)
        {
            maxValue = numbers[i];
        }
    }

    cout << "El valor máximo dela lista es: " << maxValue << endl;
}


int main()
{
    valueMax();
    return 0;
}
