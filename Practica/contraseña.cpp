# include <iostream>
using namespace std;

bool sizeOK(string user)
{
    if (user.size() >= 5 && user.size() <= 9)
    {
        return true;
    }
    return false; 

}
bool onlyLetters(string user)
{
    for (int i = 0; i < user.size(); i++)
    {
        if (user[i] < 97 || user[i] > 122)
        {
            return false;
        }
        
    }
    return true;
    

}
bool onlyDigits(string user)
{
    for (int i = 0; i < user.size(); i++)
    {
        if (user[i] < 48 || user[i] > 57)
        {
            return false;
        }
        
    }
    return true;

}

void comprobarContrasena()
{
    string user;
    cout << "ingrese una contrasena: " << endl;
    cin >> user;
    if (onlyDigits(user) && onlyLetters(user) && sizeOK(user))
    {
        cout << "contrasena valida " << endl;
    }
    else 
    {
        cout << "contrasena invalida";
    }
    

}
int main (){
    comprobarContrasena();
    return 0;
}