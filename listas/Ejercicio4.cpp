#include <iostream>

using namespace std;

void pairNum()
{
    int values[8] = {0,8,12,18,15,23,40,55};

    int pairCount = 0;

    for (int i = 0; i < 8; i++)
    {
        if (values[i] % 2 == 0)
        {
            pairCount++;
        }
    }

    cout << "Hay " << pairCount <<" números pares en la lista:" <<endl;
}

int main()
{
    pairNum();
    return 0;
}
