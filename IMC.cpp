#include <iostream>
using namespace std;


int main(){
    
    //Variables
    int peso;
    float imc, est;
    
    //Informacion
    cout << "Peso (Kg): \n";
    cin >> peso;
    cout << "Estatura (M): \n";
    cin >> est;
    
    //IMC
    imc = peso / (est * est);
    
    //Resultado
    cout << "Tu IMC es: " << imc << endl;
    
    
    return 0;
}
