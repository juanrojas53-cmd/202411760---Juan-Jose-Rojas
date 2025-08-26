#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    int option;

    cout << "Bienvenido a la calculadora\n";
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "\nSeleccione una operacion:\n";
    cout << "1. Sumar\n";
    cout << "2. Restar\n";
    cout << "3. Multiplicar\n";
    cout << "4. Dividir\n";
    cout << "Opcion: ";
    cin >> option;



  if(option ==1) {
    
            result = num1 + num2;
            cout << "Resultado: " << result << endl;
  }

         else if( option ==2){
            result = num1 - num2;
            cout << "Resultado: " << result << endl;
         }

         else if(option ==3){
            result = num1 * num2;
            cout << "Resultado: " << result << endl;
         }
           
        else if (option==4)
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Resultado: " << result << endl;
            } else {
                cout << "Error: no se puede dividir entre 0." << endl;
            }
         
            else {
            cout << "Opcion no valida." << endl;
            }
          
    

    return 0;

}
