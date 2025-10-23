# include <iostream> 
using namespace std;


bool soloVocales(string palabra){
    for (int i = 0; i < palabra.size(); i++)
    {
        if (palabra[i] != 97 && palabra[i] != 101 && palabra[i] != 105 && palabra[i] != 111 && palabra[i] != 117 )
        {
            return false;
        }
        
    }
    return true;
    
}


void comprobar()
{
    string palab;
    cout << "ingrese: " ;
    cin >> palab;
    if (soloVocales(palab))
    {
        cout << " corectooooooo";
    }
    else
    {
        cout << "nadaaaaaa" ;
    }
    

}

int main()
{
    comprobar();
    return 0;
}