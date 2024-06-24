//
//  main.cpp
//  Sumatoria de numeros
//
//  Created by Kennia Sanchez on 2/14/19.
//  Copyright © 2019 Kennia Sanchez. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int aSumar,num,sumatoria=0;
    cout<<"Cuantos numeros quieres sumar? ";
    cin>>aSumar;
    for(int i=1; i<=aSumar; i++){
        cout<<"Ingresa el numero a sumar ";
        cin>>num;
        sumatoria=sumatoria+num;
    }
    cout<<"Tu suma es: "<<sumatoria<<endl;
    return 0;
}
