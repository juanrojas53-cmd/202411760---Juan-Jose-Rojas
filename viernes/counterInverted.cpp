#include <iostream>

using namespace std;

void counter(int number)
{
    for (int i =number; i >=0; i--)
    {
        cout<< "valor: " <<i<<endl;
    }
    
}

void counterWhile(int number)
{
    int counter=number;
    while(counter>=number)
    {
        cout<<counter<<endl;
        counter--;
        
    }

}

int main(){
    int userNumber;
    cout<<"ingrese un numero: "<<endl;
    cin >>userNumber;
    counter(userNumber);

    return 0;
}