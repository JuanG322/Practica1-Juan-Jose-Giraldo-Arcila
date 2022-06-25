#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double A,B;
    
    cout<<"Ingrese 2 Numeros: \n";
    cin>>A>>B;
    
    cout<<A<<"/"<<B<<" = "<<lround(A/B);
    
    return 0;
}

