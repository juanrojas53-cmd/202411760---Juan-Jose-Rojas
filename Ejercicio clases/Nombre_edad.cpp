#include <iostream>

using namespace std;

class Persona 
{
public:
    string nombre;
    int edad;

    void saludar() 
    {
        cout << "Hola, soy " << nombre << "!" << endl;
    }
};

int main() 
{
    Persona p;
    p.nombre = "Ana";
    p.edad = 18;

    p.saludar();

    return 0;
}
