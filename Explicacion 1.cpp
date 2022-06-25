// Codigo número 1
#include <iostream>

using namespace std;

int main() 
{
    //Se declaran las variables
    int i = 10;
    float a = 1000.0; //a se declara como float para los decimales
    
    while(i > 0)//Se dividen las variables i y a hasta que i = 0
    {
        i /= 2;
        a /= 10; 
    }
    
    cout<<"El valor final de la variable 'a' es: "<<a<<endl;//Imprime el valor final de a y hace un salto de linea
    return 0;
}
