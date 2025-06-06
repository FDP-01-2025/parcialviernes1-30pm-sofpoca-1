#include <iostream> 
#include <string.h>
using namespace std;

int main(){
    cout<<"\t\t ::Bienvenido al programa::\n";
    string dui;
    cout<<"Ingresa tu DUI: ";
    cin>>dui;
    bool valido=1;
    int saldo=1500;
    if(dui.size()!=9){
        valido=0;
    }
    else{
        for(int i=0;i<9;i++){
            if(dui[i]=='-') valido=0;
        }
    }
    if(valido){
        int opcion;
        int x;
        do{
            cout<<"Ingrese la operacion que desea realizar: \n";
            cout<<" \t1. Realizar un deposito\n \t2.Realizar un retiro\n \t3.Realizar consulta\n \t4.Salir de el programa\n";
            cin>>opcion;
            switch(opcion){
                case 1:
                    cout<<"Ingrese la cantidad a depositar: ";
                    cin>>x;
                    saldo+=x;
                    cout<<"Operacion exitosa!\n";
                    break;
                case 2:
                    if(saldo<=0){
                        cout<<"No tienes suficiente saldo para esta operacion\n";
                    }
                    else{
                        cout<<"Ingrese la cantidad a retirar: ";
                        cin>>x;
                        if(saldo-x>=0){
                            saldo-=x;
                            cout<<"Operacion exitosa!\n";
                            break;
                        }
                        else{
                            cout<<"Operacion invalida!\n";
                            break;
                        }
                    }
                    break;
                case 3:
                    cout<<"El saldo actual es: "<<saldo<<endl;
                    cout<<"Operacion invalida!\n";
                    break;
                case 4:
                    cout<<"Gracias por usar el programa :)\n";
                    return 0;
                default:
                    cout<<"Operacion invalida!\n";
                    break;
            }

        }while(true);
    }
    else{
        cout<<"Numero de Dui invalido, nos vemos pronto :c\n";
    }
    return 0;
}