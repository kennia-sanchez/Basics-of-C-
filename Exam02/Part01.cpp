#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string matriz [5][3];
    int edad, pref, ya;
    string nombre,genero;
    
    cout<<"Ingresa tu nombre: ";
    cin>>nombre;
    cout<<"Ingresa tu edad: ";
    cin>>edad;
    cout<<"Ingresa tu genero: ";
    cin>>genero;
    cout<<"Ingresa tu preferencia en el cine (1- Comedia, 2- Suspenso, 3- Accion, 4- Drama, 5- Infantil): ";
    cin>>pref;
    
    //comedia//
    matriz[0][0]= "Grown ups";
    matriz[0][1]= "Click";
    matriz[0][2]= "Scooby doo";
    
    //suspenso//
    matriz[1][0]= "Insidious";
    matriz[1][1]= "Hush";
    matriz[1][2]= "Zombieland";
    
    //accion//
    matriz[2][0]= "Avengers";
    matriz[2][1]= "Black Panther";
    matriz[2][2]= "Resident Evil";
    
    //drama//
    matriz[3][0]= "To all the boys i love before";
    matriz[3][1]= "Titanic";
    matriz[3][2]= "Forrest Gump";
    
    //infantil//
    matriz[4][0]= "Shrek 2";
    matriz[4][1]= "Coco";
    matriz[4][2]= "Mi villano favorito";
    
    if (edad<=12){
        cout<<" "<<matriz[4][0]<<endl;
        cout<<"Ya viste esta pelicula? (1= si, 0=  no) ";
        cin>>ya;
        
        if (ya==1){
            cout<<"Te recomendamos: "<<matriz[4][1]<<endl;
            cout<<"Ya viste esta pelicula? (1= si, 0=  no) ";
            cin>>ya;
            
            if (ya==1){
                cout<<"Te recomendamos: "<<matriz[4][2]<<endl;
            }
        }
        
    }
    else {
        
        switch(pref){
            case 1:
                cout<<" "<<matriz[0][0]<<endl;
                cout<<"Ya viste esta pelicula? (1= si, 0=  no) ";
                cin>>ya;
                
                if (ya==1){
                    cout<<"Te recomendamos: "<<matriz[0][1]<<endl;
                    cout<<"Ya viste esta pelicula? (1= si, 0=  no) ";
                    cin>>ya;
                    
                    if (ya==1){
                        cout<<"Te recomendamos: "<<matriz[0][2]<<endl;
                    }
                }
                break;
            case 2:
                cout<<" "<<matriz[1][0]<<endl;
                cout<<"Ya viste esta pelicula? (1= si, 0=  no) ";
                cin>>ya;
                
                if (ya==1){
                    cout<<"Te recomendamos: "<<matriz[1][1]<<endl;
                    cout<<"Ya viste esta pelicula? (1= si, 0=  no) ";
                    cin>>ya;
                    
                    if (ya==1){
                        cout<<"Te recomendamos: "<<matriz[1][2]<<endl;
                    }
                }
                break;
            case 3:
                cout<<" "<<matriz[2][0]<<endl;
                cout<<"Ya viste esta pelicula? (1= si, 0=  no) ";
                cin>>ya;
                
                if (ya==1){
                    cout<<"Te recomendamos: "<<matriz[2][1]<<endl;
                    cout<<"Ya viste esta pelicula? (1= si, 0=  no) ";
                    cin>>ya;
                    
                    if (ya==1){
                        cout<<"Te recomendamos: "<<matriz[2][2]<<endl;
                    }
                }
                break;
            case 4:
                cout<<" "<<matriz[3][0]<<endl;
                cout<<"Ya viste esta pelicula? (1= si, 0=  no) ";
                cin>>ya;
                
                if (ya==1){
                    cout<<"Te recomendamos: "<<matriz[3][1]<<endl;
                    cout<<"Ya viste esta pelicula? (1= si, 0=  no) ";
                    cin>>ya;
                    
                    if (ya==1){
                        cout<<"Te recomendamos: "<<matriz[3][2]<<endl;
                    }
                }
                break;
            case 5:
                cout<<" "<<matriz[4][0]<<endl;
                cout<<"Ya viste esta pelicula? (1= si, 0=  no) ";
                cin>>ya;
                
                if (ya==1){
                    cout<<"Te recomendamos: "<<matriz[4][1]<<endl;
                    cout<<"Ya viste esta pelicula? (1= si, 0=  no) ";
                    cin>>ya;
                    
                    if (ya==1){
                        cout<<"Te recomendamos: "<<matriz[4][2]<<endl;
                    }
                }
                break;
        }
        system("pause");
    }
    return 0;
}
