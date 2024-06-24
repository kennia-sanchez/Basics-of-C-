#include <iostream>
using namespace std;

int main(){
    double c,f,k;
    
    cout<<"Ingrese los grados Celsius que desea convertir: ";
    cin>>c;
    
    f= (c * 9 )/5 + 32;
    k= c + 274.15;
    
    cout<<"Grados Fahrenheit: "<<f<<endl;
    cout<<"Grados Kelvin: "<<k<<endl;
    
    return 0;
}
