# include <iostream>
using namespace std;

int main(){
    string text1,text2,text3;
    int text1zise1, textzise2;
    text2 = " otorrinolaringologo";
    
    textzise2 = text2.size();
    cout << "ingrese una palabra:"  << endl;
    cin >> text1;
    text3 = text1 + text2;
    text1zise1 = text1.size();
    cout <<"la palabra " << text1 << " tiene: "<< text1zise1 << " letras "<< endl;
    cout << textzise2 << endl;
    cout << text2[0];
    cout << text3 << endl;
    text2[19] = 'w';
    cout << text2;
    return 0;
}