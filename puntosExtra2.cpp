#include <iostream> 
#include <string.h>
#include <vector>
using namespace std;

int main(){
    int total=0;
    cout<<"Bienvenido a la tiendita UCA :b\n";
    string productos[5]={"Tomates", "Banana", "Lechuga", "Frijoles", "Arroz"};
    vector<int> carrito(5, 0);
    vector<int> disponibilidad(5, 10);
    char opcion;
    int x;
    do{
        cout<<"Ingresa la opcion que deseas realizar: "<<endl;
        cout<<" \ta. Ver productos\n \tb.Agregar producto al carrito\n \tc. Ver carrito de compras\n \td.Finalizar compra y salir\n";
        cin>>opcion;
        switch(opcion){
            case 'a':
            cout<<"Productos disponibles: \n";
                cout<<"Precio\t\t Producto\t\t Cantidad diponible\n";
                for(int i=0;i<5;i++){
                    if(disponibilidad[i]>0){
                        cout<<"$1.0 \t\t"<<productos[i]<<": \t\t "<<disponibilidad[i]<<endl;
                    }
                }
                break;
            case 'b':
                cout<<"Ingrese el producto desea agregar al carrito: \n";
                for(int i=0;i<5;i++){
                    cout<<i+1<<". "<<productos[i]<<endl;
                }
                cin>>x;
                if(disponibilidad[x-1]<=0 || x-1<0 || x-1>4){
                    cout<<"El producto no esta disponible :(\n";
                }
                else{
                    disponibilidad[x-1]--;
                    carrito[x-1]++;
                }
                break;
            case 'c':
                cout<<"Tu carrito de compras es:\n";
                cout<<"Producto \t\tCantidad\n";
                for(int i=0;i<5;i++){
                    cout<<productos[i]<<": \t\t"<<carrito[i]<<endl;
                }
                break;
            case 'd':
                x=0;
                for(int i=0;i<5;i++){
                    x+=carrito[i];
                }
                cout<<"El total de tu compra es: $"<<x<<endl;
                return 0;
                default:
                cout<<"Opcion invalida\n";
                break;
                
        }
    } while(true);
    cout<<"Fin de el programa :)\n";
    return 0;
}