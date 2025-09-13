#include <iostream>

using namespace std;

void  contarDescendente(int number)
{
    int counter=number;
    while(counter>=0)
    {
        cout<<counter<<endl;
        counter--;
        
    }

}

int main()
{
    int userNumber;
    cout<<"ingrese un numero: ";
    cin >>userNumber;
    contarDescendente(userNumber);

    return 0;
}