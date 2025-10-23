# include <iostream>
using namespace std;
int verifyPassword(){
    string password;
    cout << "escriba una contrasena: " << endl;
    getline(cin,password);
    if (password.size() >= 8)
    {
        cout << "contrasena valida" << endl;
    }
    else 
    {
        cout << "contrasena invalida" << endl;
    }

}
int main() {
    verifyPassword();
    return 0;
}