
// Codigo número 2
#include <iostream>

using namespace std;

int main() 
{
    int i = 1, j = 2; //Se declaran las variables
    
   //Ninguno de los if se ejecuta ya que no se usa {} para el bloque de funciones 
   //Todos los i++ y j++ se ejecutan ya que estan fuera de los if   
    
    if(i > j && j > i) //si i es mayor a j y j mayor a i
        i++;
    if(i > j || j > i) //si i es mayor a j o j mayor a i
        j++;
    if(i | j)
        i++;
    if(i & j)
        j++;
    
    cout<<i * j<<endl;//Multiplica i * j
    return 0;
}