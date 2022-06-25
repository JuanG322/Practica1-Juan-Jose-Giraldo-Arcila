#include <iostream>
using namespace std;

int main() {
    int N;
    
    cout<<"Ingrese un Numero: ";
    cin>>N;
    
    if(N%2 == 0){
        cout<<N<<" es par";
    }
    else{
        cout<<N<<" es impar";
    }
    return 0;
}