
#include<iostream>
using namespace std;

int main() {
	float iC;
	float iF;
	int iopcion;
    
	// Definir variables
	
    // Ingresar valores
	cout << "1.Centigrados a Farenheit" << endl;
	cout << "2.Farenheit a Centigrados" << endl;
	cout << "Ingresa la opcion a realizar: ";
	cin >> iopcion;
	
    // Condicion
	if (iopcion==1) {
		
        // Ingresar valores
		cout << "Ingresa los grados Centigrados:" << endl;
		cin >> iC;
		
        // Realizar calculos
		iF = 9/5*iC+32;
		
        // Desplegar resultados
		cout << "Grados Farenheit: " << iF << " F" << endl;
	} else {
		if (iopcion==2) {
			
            // Ingresar valores
			cout << "Ingresa los grados Farenheit:" << endl;
			cin >> iF;
			
            // Realizar calculos
			iC = (iF-32)*5/9;
			
            // Desplegar resultados
			cout << "Grados Centigrados: " << iC << " C" << endl;
		} else {
			cout << "Ingresaste una opcion invalida" << endl;
		}
	}
	return 0;
}

