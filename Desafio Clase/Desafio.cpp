#include <iostream>
#include <string>

using namespace std;

class SalesManager 
{
public:
    bool continueRunning = true;
    int salesCount = 0;
    string* salesNames;
    int* salesValues;

    void run() 
    {
        while (continueRunning) 
        {
            int option = getUserAction();

            if (option == 1) 
            {
                createSalesList();
            }
            else if (option == 2) 
            {
                printSales();
            }
            else if (option == 3) 
            {
                modifySale();
            }
            else if (option == 4) 
            {
                findSale();
            }
            else if (option == 5) 
            {
                showSalesInRange();
            }
            else if (option == 6) 
            {
                calculateTotal();
            }
            else if (option == 7) 
            {
                delete[] salesNames;
                delete[] salesValues;
                continueRunning = false;
                cout << "Programa finalizado correctamente.";
            }
            else 
            {
                cout << "Opcion no valida.";
            }
        }
    }

    int getUserAction() 
    {
        int action;
        cout << "-----------------------------" << endl;
        cout << "Selecciona una opcion:" << endl;
        cout << "1. Crear o reemplazar lista de ventas." << endl;
        cout << "2. Mostrar todas las ventas." << endl;
        cout << "3. Modificar una venta." << endl;
        cout << "4. Buscar una venta por nombre." << endl;
        cout << "5. Mostrar ventas dentro de un rango de valores." << endl;
        cout << "6. Calcular el total de ventas." << endl;
        cout << "7. Salir." << endl;
        cout << "Ingrese una opción: ";
        cin >> action;
        cin.ignore();

        return action;
    }

    void createSalesList() 
    {
        if (salesCount > 0) 
        {
            delete[] salesNames;
            delete[] salesValues;
        }

        cout << "Ingrese la cantidad de ventas a registrar: ";
        cin >> salesCount;
        cin.ignore();

        salesNames = new string[salesCount];
        salesValues = new int[salesCount];

        for (int i = 0; i < salesCount; i++) 
        {
            cout << "Nombre de la venta No." << i + 1 << ": ";
            getline(cin, salesNames[i]);
            cout << "Valor de la venta No." << i + 1 << ": ";
            cin >> salesValues[i];
            cin.ignore();
        }

        cout << "Lista creada exitosamente.\n";
    }

    void printSales() 
    {
        if (salesCount == 0) 
        {
            cout << "No hay ventas registradas.";
            return;
        }

        cout << "Lista actual de ventas:";
        cout << "1";
        for (int i = 0; i < salesCount; i++) 
        {
            cout << "Posicion " << i + 1 << " -> " << salesNames[i]
                 << " ($" << salesValues[i] << ")";
        }
    }

    void modifySale() 
    {
        if (salesCount == 0) 
        {
            cout << "No hay ventas registradas.";
            return;
        }

        printSales();
        int position;
        cout << "Ingrese la posicion de la venta que desea modificar: ";
        cin >> position;

        if (position < 1 || position > salesCount) 
        {
            cout << "Posicion invalida.";
            return;
        }

        cout << "Nuevo valor para \"" << salesNames[position - 1] << "\": ";
        cin >> salesValues[position - 1];
        cout << "Venta modificada correctamente.\n";
    }


    void findSale() 
    {
        if (salesCount == 0) 
        {
            cout << "No hay ventas registradas.";
            return;
        }

        string searchName;
        cout << "Ingrese el nombre de la venta a buscar: ";
        getline(cin, searchName);

        bool found = false;
        for (int i = 0; i < salesCount; i++) 
        {
            if (salesNames[i] == searchName) 
            {
                cout << "Venta encontrada: " << salesNames[i]
                     << " ($" << salesValues[i] << ")";
                found = true;
            }
        }

        if (!found) cout << "No se encontró la venta.\n";
    }

    void showSalesInRange() 
    {
        if (salesCount == 0) 
        {
            cout << "No hay ventas registradas.";
            return;
        }

        int minValue, maxValue;
        cout << "Ingrese el valor mínimo: ";
        cin >> minValue;
        cout << "Ingrese el valor máximo: ";
        cin >> maxValue;

        bool found = false;
        cout << "Ventas entre $" << minValue << " y $" << maxValue << ":";
        for (int i = 0; i < salesCount; i++) 
        {
            if (salesValues[i] >= minValue && salesValues[i] <= maxValue) 
            {
                cout << salesNames[i] << " ($" << salesValues[i] << ")";
                found = true;
            }
        }

        if (!found) cout << "No hay ventas dentro del rango indicado.";
    }

    void calculateTotal() 
    {
        if (salesCount == 0) 
        {
            cout << "No hay ventas registradas.";
            return;
        }

        int total = 0;
        for (int i = 0; i < salesCount; i++) 
        {
            total += salesValues[i];
        }

        cout << "Total de todas las ventas: $" << total << endl;
    }
};

int main() 
{
    SalesManager manager;

    manager.run();

    return 0;
}