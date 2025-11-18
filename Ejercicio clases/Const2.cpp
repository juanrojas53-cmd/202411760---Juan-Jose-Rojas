#include <iostream>
using namespace std;

class Persona {
public:
    string nombre;
    int edad;

    // Constructor vacío
    Persona() {
        nombre = "Desconocido";
        edad = 0;
    }

    // Constructor con datos
    Persona(string n, int e) {
        nombre = n;
        edad = e;
    }
};

int main() {
    Persona p1;
    Persona p2("Ana", 25);

    cout << p1.nombre << endl; // Desconocido
    cout << p2.nombre << endl; // Ana

    return 0;
}
