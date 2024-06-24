#include<iostream>
using namespace std;


int lados, largo, perimetro,x;
double apotema, resultado;
double area(int,double,double);


int main(){
    
    while(x !=0 ){
    
    cout << "Calculadora de Area\n"<<endl;
    
    cout << "Ingresa el numero de lados de la figura:  ";
    cin >> lados;
    cout << "Ingresa el largo de los lados:  ";
    cin >> largo;
    cout << "Ingresa el apotema: ";
    cin >> apotema;
    
    
    switch(lados){
        case 5:
            cout<<"La figura es un 'Pentagono' "<<endl;
            break;
        case 6:
            cout<<"La figura es un 'Hexagono' "<<endl;
            break;
        case 7:
            cout<<"La figura es un 'Heptagono' "<<endl;
            break;
        case 8:
            cout<<"La figura es un 'Octagono' "<<endl;
            break;
        case 9:
            cout<<"La figura es un 'Nonagono' "<<endl;
            break;
        case 10:
            cout<<"La figura es un 'Decagono' "<<endl;
            break;
        case 11:
            cout<<"La figura es un 'Undecagono' "<<endl;
            break;
        case 12:
            cout<<"La figura es un 'Dodecagono' "<<endl;
            break;
    }
    
    
     resultado = area(lados,largo,apotema);
    
    cout <<"El area es: "<< resultado<<endl;
    
    
    
    
    cout<<"Oprima 0 para salir del programa/n Para continuar oprima calquier tecla ";
    cin>>x;
    
        
    return 0;
}

}

double area (int x, double y, double z){
    perimetro = lados * largo;
    
    
    return (perimetro * apotema)/2;
}


