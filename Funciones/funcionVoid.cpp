#include <iostream>

using namespace std;

void userNote () 
{
    int note;
    cout<<"Ingrese la nota que obtuvo en la materia"<<endl;
    cin>>note;

    if(note >=30){
        cout<<"Pasaste la materia"<<endl;
    }

    else {
        cout<<"No pasaste la materia"<<endl;
    }
    

}

int main(){
    userNote();
    return 0;
}