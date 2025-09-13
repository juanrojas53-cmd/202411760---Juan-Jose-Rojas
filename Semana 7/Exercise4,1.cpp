#include <iostream>

using namespace std;

void contarAscendete(int number)
{
    int counter=0;
    while(counter<=number)
    {
        cout<<counter<<endl;
        counter++;
        
    }

}

int main()
{
    int userNumber;
    cout<<"ingrese un numero: ";
    cin >>userNumber;
    contarAscendete(userNumber);

    return 0;
}