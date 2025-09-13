#include <iostream>

using namespace std;

int main() 
{
    string name;
    int age;
    double stature;

    cout << "Ingrese su nombre: ";
    cin >> name;
    cout << "Ingrese su edad: ";
    cin >> age;
    cout << "Ingrese su estatura en metros: ";
    cin >> stature;

    cout << "Hola " << name << ", tienes " << age << " años y mides " 
         << stature << " metros." << endl;

    return 0;
}
