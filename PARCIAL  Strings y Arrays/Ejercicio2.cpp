#include<iostream>

using namespace std;

void temperaturaCiudad()
{
    string ciudades[10] = {"Bogotá", "Medellín", "Cali", "Cartagena", "Pereira", "Bucaramanga","Manizales", "Tunja", "Santa Marta", "Villavicencio"};
    float temperaturas[10] = {18.5, 25.1, 27.8, 31.3, 22.7, 26.2, 19.0, 16.4, 30.5, 29.0};

    float temperaturaMin, temperaturaMax;
    cout << "Ingrese temperatura minima: ";
    cin >> temperaturaMin;
    cout << "Ingrese temperatura maxima: ";
    cin >> temperaturaMax;

    float sumaTem = 0;
    int numCiudades = 0;

    cout << "Ciudades dentro del rango (" << temperaturaMin << " - " << temperaturaMax << " °C):" << endl;

    for (int i = 0; i < 10; i++)
    {
        if (temperaturas[i] >= temperaturaMin && temperaturas[i] <= temperaturaMax) 
        {
            cout << ciudades[i] << " - " << temperaturas[i] << " °C" << endl;
            numCiudades++;
            sumaTem += temperaturas[i];
        }
    }

    float promedio = sumaTem / numCiudades;
    cout << "Promedio de temperaturas dentro del rango: " << promedio << " °C" << endl;
}


int main()
{
    temperaturaCiudad();
    return 0;
}




