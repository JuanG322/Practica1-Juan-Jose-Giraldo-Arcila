/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    bool i = true;
    int Numero = 0, Suma = 0;

    
    while(i){
        cout << "Ingresa un Numero: ";
        cin >> Numero;
        Suma = Suma + Numero;
        
        if(Numero == 0){
            i = false;
        }
    }
    
    cout << "El resultado de la sumatoria es: " << Suma << endl;
    return 0;
}
