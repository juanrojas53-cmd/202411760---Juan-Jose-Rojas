#include <iostream>

using namespace std;

void semaforo(string colour)
{
    if (colour == "rojo")
    
    {
        cout << "Detenerse" << std::endl;
    }
    else if (colour == "amarillo")
    {
        cout << "Precaucion" << std::endl;
    }
    else if (colour == "verde")
    {
        cout << "Siga" << std::endl;
        
    }
    else
    {
        cout << "El valor ingresado es erroneo"  << std::endl;
    }
}

int main (){
    string userColour;
    cout << "Ingrese un color: " << endl;
    cin >>  userColour;
    semaforo (userColour);
    
    return 0;
    
}