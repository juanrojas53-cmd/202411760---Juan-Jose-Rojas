#include <iostream>

using namespace std;


bool requiresMaintenance(int sheets, int interval) 
{
    return (sheets % interval == 0);
}

int main() {
    int sheetsProduced, maintenanceInterval;

    cout << "Ingrese el numero de hojas producidas: ";
    cin >> sheetsProduced;

    cout << "Ingrese el intervalo de mantenimiento: ";
    cin >> maintenanceInterval;

    if (requiresMaintenance(sheetsProduced, maintenanceInterval)) 
    {
        cout << "La maquina requiere mantenimiento." << endl;
    } 
    else 
    {
        cout << "La maquina no requiere mantenimiento." << endl;
    }

    return 0;
}
