#include <iostream>
using namespace std;
  

    int mayusculas = 0;
    int minusculas = 0;
    int spetials = 0;
     
bool passwordLenght(string password)
    {
        for (int i = 0; i < password.size(); i++)
        {
            if(password.size()>=8)
            return true;
        }
        return false;

    }

bool mayusculaLetters(string password)
    {
        for (int i = 0; i < password.size(); i++)
        {
            if(password[i]>= 65 && password[i]<= 90)
            return true;
        }
        return false;
    }
    
bool minuscula(string password)
    {
        for (int i = 0; i < password.size(); i++)
        {
            if(password[i]>= 97 && password[i]<= 122)
            return true;
        }
        return false;
    }

bool espetialCharacter(string password)
    {
        for (int i = 0; i < password.size(); i++)
        {
            if(password[i]>= 33 && password[i]<= 47)
            spetials++;
        }
        return spetials >=3 ;
    }

void verifyPassword()
{
    string password;
    cout << "Ingrese una contraseña: ";
    cin >> password; 

    if (passwordLenght (password) && mayusculaLetters(password) && minuscula(password) && espetialCharacter(password))
    {
    cout<<"contraseña valida" <<endl;
    }
    else 
    {
        cout<<"contraseña invalida"<< endl;
    }
}

int main()
{
    verifyPassword();
    return 0;
}

