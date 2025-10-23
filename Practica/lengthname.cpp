
# include <iostream>
using namespace std;

int main() {
    string name;
    int size;

    cout << "Ingrese su nombre completo: " << endl;
    getline(cin, name); // permite leer todo, incluso espacios

    size = name.size(); // obtiene la longitud del string

    cout << "Tu nombre es: " << name << endl;
    cout << "El tamano de tu nombre es: " << size << " caracteres." << endl;

    return 0;
}