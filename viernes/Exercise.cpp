#include <iostream>

using namespace std;

void weather(int temperature)
{
    if (temperature < 15)
    
    {
        cout << "Esta haciendo frio" << std::endl;
    }
    else if (temperature >25)
    {
        cout << "Esta calieeeeeeeeente" << std::endl;
    }
    else 
    {
        cout << "Que bueen clima";
        
    }
}

int main(){
    int userTemperature;
    cout << "Ingrese un valor de la temperatura: " << endl;
    cin >>  userTemperature;
    weather (userTemperature);
    
    return 0;
}