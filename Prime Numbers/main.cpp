#include <iostream>
using namespace std;



int main(){
    int a=0,i,n, opcion = 1;
    cout<<"Ingrese numero: "<<endl;
    cin>>n;
    
    while(opcion != 0){
        
    
    for(i=1;i<(n+1);i++){
        if(n%i==0){
            a++;
        }
    }
    if(a!=2){
        cout<<"No es Primo \n"<<endl;
    }else{
        cout<<"Si es Primo \n"<<endl;
    }
        
        cout << "Oprime 0 para salir del programa o Ingrese otro numero que desee analizar: "<<endl;
        cin >> opcion;
        cout << "\n";
    
}
    cout << "Has salido del programa"<<endl;
    return 0;
}
