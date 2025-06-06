#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout<<"Los numeros divisibles por 3 y por 5 son:\n";
    //Vemos todos los valores de 1 a 100
    for(int i=1;i<=100;i++){
        //Vemos si el valor actual es decir i es divible con 3 y con 5
        if(i%3==0 && i%5==0){
            // si lo es se imprime
            cout<<i<<endl;
        }
    }
    cout<<"Fin de el programa :)"<<endl;
    return 0;
}