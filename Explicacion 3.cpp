/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main() 
{
    //Se declara i dentro del for
    for(int i = 0; i < 4; ++i)//Cuando i sea menor a , i+1
    {
        switch(i)
        {
            case 0: cout<<"0"; //Si i es = 0 se imprime 0
            case 1: cout<<"1"; continue; //Si i es = 1 se imprime 1 y continua en el for
            case 2: cout<<"2"; break; //Si i es = 2 se imprime 1 y sale del for
            default: cout<<"D"; break; //Si niguno de los casos se cumple sale del for
        }
        
        cout<<"*";//imprime un *
    }
    return 0;
}