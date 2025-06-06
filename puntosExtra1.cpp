#include <iostream> 
#include <string.h>
using namespace std;

int main(){
    cout<<"\t\t ::Bienvenido al programa::\n";
    string dui;
    cout<<"Ingresa tu DUI: ";
    cin>>dui;
    //ingresamos el numero de dui
    bool valido=1;
    //Creamos una variabl para ver en que casos no sera invalido y que finalice direcatamente el programa
    int saldo=1500;
    //Asignamos un valor al saldo
    if(dui.size()!=9){
        valido=0;
        // si el dui ingresa tiene menos o mas de 9 digitos no es valido
    }
    else{
        //vemos por cada elemento del dui
        for(int i=0;i<9;i++){
            if(dui[i]=='-') valido=0;
            //vemos que no contenga guiones 
        }
    }
    if(valido){
        //si no se cumplieron las condiciones para ser invalido, sera valido
        int opcion;
        int x;
        do{
            //mientras el usuario no salga del programa seguiremos hcaiendo las operaciones 
            cout<<"Ingrese la operacion que desea realizar: \n";
            cout<<" \t1. Realizar un deposito\n \t2.Realizar un retiro\n \t3.Realizar consulta\n \t4.Salir de el programa\n";
            cin>>opcion;
            //mostramos el menu y leemos la opcion ingresada
            switch(opcion){
                //segun la operacion que desea hacer se trabaja cada una, si ingreso una operacion invalida se ira al default
                case 1:
                    cout<<"Ingrese la cantidad a depositar: ";
                    cin>>x;
                    saldo+=x;
                    //agregamos el monto al saldo
                    cout<<"Operacion exitosa!\n";
                    break;
                case 2:
                    if(saldo<=0){
                        //vemos si tiene saldo xd
                        cout<<"No tienes suficiente saldo para esta operacion\n";
                    }
                    else{
                        //vemos lo que quiere retirar
                        cout<<"Ingrese la cantidad a retirar: ";
                        cin>>x;
                        if(saldo-x>=0){
                            //si al retirar no se queda en numeros negativos, que retire todo si es posible
                            saldo-=x;
                            cout<<"Operacion exitosa!\n";
                            break;
                        }
                        else{
                            // no le alcanza :c
                            cout<<"Operacion invalida!\n";
                            break;
                        }
                    }
                    break;
                case 3:
                    //consultamos el saldo actual
                    cout<<"El saldo actual es: "<<saldo<<endl;
                    //cout<<"Operacion invalida!\n";
                    break;
                case 4:
                    cout<<"Gracias por usar el programa :)\n";
                    //termina el programa
                    return 0;
                default:
                    //no ingreso la una opcion valida
                    cout<<"Operacion invalida!\n";
                    break;
            }

        }while(true);
    }
    else{
        //esto pasa si no era valido el ddui
        cout<<"Numero de Dui invalido, nos vemos pronto :c\n";
    }
    return 0;
}