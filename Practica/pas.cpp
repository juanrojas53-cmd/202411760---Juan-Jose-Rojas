#include <iostream>
using namespace std;

bool sizeeMin( string pasword)
{
    if (pasword.size() < 8)
    {
        return false;

    }
    return true;
}
bool charSpecials(string pasword)
{
    int especiales = 0;
    for (int i = 0; i < pasword.size(); i++)
    {
        if (pasword[i] >= '!' && pasword[i] <= '/' )
        {
            especiales++;
        }
    }
    return especiales >= 3;

}
bool hasMIn(string pasword)
{
    int minusculas = 0;
    for (int i = 0; i < pasword.size(); i++)
    {
        if (  pasword[i]>='a' &&  pasword[i] <= 'z')
        {
            minusculas++;
            return true;
        }
    }
    return false;
    

}
bool hasMay( string pasword)
{
    int mayusculas = 0;
    for (int i = 0; i < pasword.size(); i++)
    {
        if (  pasword[i]>= 'A' &&  pasword[i] <= 'Z')
        {
            mayusculas++;
            return true;
        }
    }
    return false;


}
void validPasw() {
    string pasword;
    cout << "Ingrese una contrasena (sin espacios): ";
    cin >> pasword;
    if (sizeeMin(pasword) && charSpecials( pasword) && hasMIn( pasword) && hasMay( pasword))
    {
        cout << " contrasena valida." << endl;
    }
    
    else
    {
        cout << " Contrasena invalida." << endl;
    }

}
int main (){
    validPasw();
    return 0;
}