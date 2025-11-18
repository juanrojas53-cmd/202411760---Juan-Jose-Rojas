#include <iostream>
using namespace std;

class Persona {
public:
    string nombre;
    int edad;

    // Constructor con parámetros
    Persona(string n, int e) {
        nombre = n;
        edad = e;
    }
};

int main() {
    Persona p("Juan", 20); // Aquí se llama el constructor

    cout << p.nombre << endl;  // Juan
    cout << p.edad << endl;    // 20

    return 0;
}
