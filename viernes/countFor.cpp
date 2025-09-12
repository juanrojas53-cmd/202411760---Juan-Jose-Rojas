#include <iostream>

using namespace std;

void counter(int number)
{
    for (int i = 0; i <=number; i++)
    {
        cout<< "valor: " <<i<<endl;
    }
    
}

void counterWhile(int number)
{
    int counter=0;
    while(counter<=number)
    {
        cout<<counter<<endl;
        counter++;
        
    }

}

int main(){
    int userNumber;
    cout<<"ingrese un numero: "<<endl;
    cin >>userNumber;
    counter(userNumber);

    return 0;
}