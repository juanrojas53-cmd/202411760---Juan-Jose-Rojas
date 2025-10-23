#include <iostream>
using namespace std;

        

void forWithString() {
    string exampleText;
    int textsize;
    exampleText = "otorrinolaringologo";
    textsize = exampleText.size();
    cout <<" size(): " << textsize << endl;

    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;
    int counter4 = 0;
    int counter5 = 0;
    for (int i = 0; i < textsize; i++)
    {
        char textCharacter = exampleText[i];
        
        if (textCharacter == 'o')
        {  
            counter1++ ;
        }
        
        else if (textCharacter == 'a')
        {
            counter2++ ;
        }
        else if (textCharacter == 'e')
        {   
            counter3++ ;
        }
        else if (textCharacter == 'i')
        { 
            counter4++ ;
        }
        else if (textCharacter == 'u')
        {   
            counter5++ ;
        }
}
    cout << "hay " << counter1 << " letras o" << endl;
    cout << "hay " << counter2 << " letras a" << endl;
    cout << "hay " << counter3 << " letras e" << endl;
    cout << "hay " << counter4 << " letras i" << endl;
    cout << "hay " << counter5 << " letras u" << endl;

}
int main(){
    forWithString();
    return 0; 
}