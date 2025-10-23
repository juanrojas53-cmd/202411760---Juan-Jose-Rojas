# include <iostream>
using namespace std;
    

int main() {
string name2;
cout << "dime una frase para saber cuantas letras tiene: " << endl;
getline(cin,name2);
cout << "la frase tiene: " << name2.size() << " letras" << endl;
cout <<"la primer letra es: " << name2[0]<< endl;
cout <<"la ultima letra es: " << name2[name2.size()-1]<< endl;


return 0;
}