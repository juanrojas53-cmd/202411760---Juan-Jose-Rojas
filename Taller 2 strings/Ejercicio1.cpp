#include <iostream>

using namespace std;

bool validateLength(string userName)
{
    for (int i = 0; i < userName.size(); i++)
    {
        if (userName.size()>=6 && userName.size()<=12 )
        {
            return true;
        }
    }
   
    return false;
    
}

bool initialLetter(string userName)
{
    for (int i = 0; i < userName.size(); i++)
    {
        if (userName[0]>= 97 && userName[0]<= 122 || userName[0]>=65 && userName[0]<=90)
        {
            return true;
        }
    }
    return false;
    
}

bool withoutSpace(string userName)
{
    for (int i = 0; i < userName.size(); i++) 
    {
        if (userName[i] == 32)
        {
            return false;
        }
    }
    return true;
}

void verifyUserName()
{
    string userName;
    cout << "Ingrese su nombre de usuario: ";
    getline (cin, userName); 

    if (validateLength (userName) && initialLetter(userName) && withoutSpace(userName) )
    {
    cout<<"nombre valido" <<endl;
    }
    else 
    {
        cout<<"intenta con otro nombre"<< endl;
    }
}
    

int main()
{
    verifyUserName();

    return 0;

}