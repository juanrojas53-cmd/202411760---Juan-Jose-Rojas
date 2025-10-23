# include <iostream>
using namespace std;
bool correctPasword(string pasword)
{
    bool hasUpper = false;
    bool hasdigit = false;
    
    if (pasword.length() < 8)
    {
        return false;
    }
    for (int i = 0; i < pasword.length(); i++)
    {
        if (isupper(pasword[i]))
        {
            hasUpper = true;
        }
        else if (isdigit(pasword[i]))
        {
            hasdigit = true;
        }
    }

    if (hasUpper && hasdigit)
    {
        return true;
    }
    else
    {
        return false;
    }

    
}
int main (){
    string pasword;
    cout << "ingrese una contrasena: " << endl;
    cin >> pasword;
    if (correctPasword(pasword))
    {
        cout << "contrasena segura ";
    }
    else
    {
        cout << "contrasena insegura ";
    }
    
    return 0;

}