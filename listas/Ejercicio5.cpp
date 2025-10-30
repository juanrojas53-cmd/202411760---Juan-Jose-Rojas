#include <iostream>

using namespace std;

void priceProducts()
{
    string products[4] = {"Boxer", "Medias", "Camisa", "Pantalon"};
    float prices[4] = {15000, 7000, 65000, 100000};

    cout << "Productos y precios:" << endl;
    
    for (int i = 0; i < 4; i++)
    {
        cout << products[i] << " - " << prices[i] << " pesos"<< endl;
    }
}

int main()
{
    priceProducts();
    return 0;
}
