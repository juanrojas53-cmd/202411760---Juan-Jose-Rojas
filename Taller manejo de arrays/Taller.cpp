#include <iostream>

using namespace std;

int selectUser() /*menu de selecciones*/
{
    int userAction;
    cout << "-----------------------------" << endl;
    cout << "Seleccione una opcion:" << endl;
    cout << "1. Registrar o reiniciar las ventas." << endl;
    cout << "2. Mostrar las ventas." << endl;
    cout << "3. Modificar una venta." << endl;
    cout << "4. Buscar una venta por nombre." << endl;
    cout << "5. Mostrar ventas dentro de un rango." << endl;
    cout << "6. Calcular el total de ventas." << endl;
    cout << "7. Salir." << endl;
    cout << "Ingrese una opcion: ";
    cin >> userAction;

    return userAction;
}


void recordSales(string*& names, int*& values, int& size) /*Funcion para registar las ventas, o reiniciar una ya hecha*/
{
    if (names != nullptr) /*caso en el que el puntero ya contenga datos*/
    {
        delete[] names;/*si ya habia una lista de ventas se eliminan para crear una nueva*/
        delete[] values;
    }

    cout << "Ingrese la cantidad de ventas a registrar: ";
    cin >> size;
    cin.ignore();

    names = new string[size];
    values = new int[size];

    /*se le dan nombres y valores a las ventas*/
    for (int i = 0; i < size; i++) 
    {
        cout << "Nombre de la venta No." << i + 1 << ": ";
        getline(cin, names[i]);
        cout << "Valor de la venta No." << i + 1 << ": ";
        cin >> values[i];
        cin.ignore();
    }

    cout << "Lista creada correctamente." << endl;
}


void printSales(string names[], int values[], int size) /*Mostrar las ventas que se han registrado*/
{
    if (size == 0) /*si no hay ventas, se le dice al usuario*/
    {
        cout << "No hay ventas registradas." << endl;
        return;
    }

    cout << "Lista actual de ventas:" << endl;

    for (int i = 0; i < size; i++) 
    {
        cout << "Posicion " << i + 1 << " -> " << names[i] << " ($" << values[i] << ")" << endl;
    }
}


void modifySale(string names[], int values[], int size) /*Funcion para modificar las ventas registradas*/
{
    if (size == 0) /*caso en el que no hay ventas*/
    {
        cout << "No hay ventas registradas." << endl;
        return;
    }

    printSales(names, values, size);

    int position;

    cout << "Ingrese la posicion de la venta a modificar: ";
    cin >> position;

    if (position < 1 || position > size) /*caso de que la posicion que se ingresa no se encuentre*/
    {
        cout << "Posicion no valida." << endl;
        return;
    }
    
    /*se lee el nuevo valor*/
    cout << "Nuevo valor para \"" << names[position - 1] << "\": ";
    cin >> values[position - 1];
    cout << "Venta modificada correctamente." << endl;
}


void findSale(string names[], int values[], int size) /*Buscar la venta con el nombre*/
{
    if (size == 0) 
    {
        cout << "No hay ventas registradas." << endl;
        return;
    }
    
    /*compara lo que ingresa el ususario con los arreglos y muestra las que coinciden*/
    string search;
    cout << "Ingrese el nombre de la venta a buscar: ";
    cin.ignore();
    getline(cin, search);

    bool found = false;

    for (int i = 0; i < size; i++) 
    {
        if (names[i] == search) 
        {
            cout << "Venta encontrada -> " << names[i] << ": $" << values[i] << endl;
            found = true;
        }
    }

    if (!found) cout << "No se encontro una venta con ese nombre." << endl;/*si no se encuentra coincidencias se le dice al usuario*/
}


void showSalesInRange(string names[], int values[], int size) /*Mostar las ventas dentro de un rango*/
{
    if (size == 0) 
    {
        cout << "No hay ventas registradas." << endl;
        return;
    }

    int minValue, maxValue;
    cout << "Ingrese valor minimo: ";
    cin >> minValue;
    cout << "Ingrese valor maximo: ";
    cin >> maxValue;

    /*analiza lo que ingresa el usuario y muestra los valores dentro del rango*/
    bool found = false;

    cout << "Ventas entre $" << minValue << " y $" << maxValue << ":" << endl;

    for (int i = 0; i < size; i++) 
    {
        if (values[i] >= minValue && values[i] <= maxValue) 
        {
            cout << names[i] << " -> $" << values[i] << endl;
            found = true;
        }
    }

    if (!found) cout << "No hay ventas dentro del rango." << endl;/*caso en el que no haya ventas en el rango*/
}


void calculateTotal(int values[], int size) /*Sumar todas las ventas*/
{
    if (size == 0) 
    {
        cout << "No hay ventas registradas." << endl;

        return;
    }

    int total = 0;

    for (int i = 0; i < size; i++) 
    {
        total += values[i];
    }

    cout << "Total de las ventas: $" << total << endl;
}


void run() /*Funcion para cada seleccion del usuario*/
{
    bool continueRunning = true;
    string* names = nullptr;
    int* values = nullptr;
    int size = 0;

    while (continueRunning) 
    {
        int option = selectUser();

        switch (option) 
        {
        case 1:
            recordSales(names, values, size);
            break;
        case 2:
            printSales(names, values, size);
            break;
        case 3:
            modifySale(names, values, size);
            break;
        case 4:
            findSale(names, values, size);
            break;
        case 5:
            showSalesInRange(names, values, size);
            break;
        case 6:
            calculateTotal(values, size);
            break;
        case 7:/*opcion salir, se eliminan todos los datos registrados y finaliza el programa*/
            continueRunning = false;
            delete[] names;
            delete[] values;
            cout << "Programa finalizado." << endl;
            break;
        }
    }
}

int main() 
{
    run();

    return 0;
}
