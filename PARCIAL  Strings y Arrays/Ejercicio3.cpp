#include<iostream>

using namespace std;

void multasCiudad()
{
    string placas[6] = {"ABC123", "XYZ789", "LMN456", "JKL321", "QWE654", "TYU999"};
    float multas[6] = {250000, 180000, 300000, 450000, 200000, 120000};
    string ciudades[6] = {"Tunja", "Bogotá", "Tunja", "Medellín", "Cali", "Tunja"};

    string ciudad;
    cout << "Ingrese la ciudad: ";
    cin >> ciudad;

    float totalMultas = 0;

    cout << "Multas registradas en " << ciudad << ":" << endl;

    for (int i = 0; i < 6; i++)
    {
        if (ciudades[i] == ciudad)
        {
            cout << placas[i] << " - " << multas[i] <<" pesos" << endl;
            totalMultas += multas[i];
        }
    }

    cout <<"Total de multas en " << ciudad <<": " << totalMultas <<" pesos" <<endl;
}

int main()
{
    multasCiudad();
    return 0;
}