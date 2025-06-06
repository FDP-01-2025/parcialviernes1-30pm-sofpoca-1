#include <iostream>
using namespace std;

int main(){
    float a, b;
    //se leen los numeros
    cout<<"Ingrese dos enteros: \n";
    cin>>a>>b;
    char c;
    cout<<"Que ingrese un caracter segun la operacion desea realizar:\n \t+: Suma\n \t-: Resta\n \t*: Multiplicacion\n \t/: Division\n";
    cin>>c;
    //se muestra el menu y se lee la opcion ingresada
    switch (c){
        //dependiendo de la operacion elegida se trabaja cada una en el switch
        
        case '+':
            cout<<"La suma es: "<<a+b<<endl;
            break;
        case '-':
            cout<<"La resta es: "<<a-b<<endl;
            break;
        case '*':
            cout<<"La multiplicacion es: "<<a*b<<endl;
            break;
        case '/':
            cout<<"La division es: "<<a/b<<endl;
            break;
        default:
            cout<<"El caracter que ingresaste es invalido\n";
            // si ingreso algo que no debia se ira al default
    }
    cout<<"Fin de el programa :)"<<endl;
    return 0;
}