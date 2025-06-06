#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout<<"Los numeros divisibles por 3 y por 5 son:\n";
    for(int i=1;i<=100;i++){
        if(i%3==0 && i%5==0){
            cout<<i<<endl;
        }
    }
    cout<<"Fin de el programa :)"<<endl;
    return 0;
}