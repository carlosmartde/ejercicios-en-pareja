#include <iostream>
#include <stdio.h>

using namespace std;
int main() {
    //EJERCICIO NUMERO 1
    /*int numero;
    cout << "INGRESE UN NUMERO Y LE DIRE SI ES PAR O IMPAR: " << endl;
    cin >> numero;

    if (numero%2 ==0){
        cout<<numero<<" ES UN NUMERO PAR"<<endl;
    }else {
        cout<<numero<<" ES UN NUMERO IMPAR"<<endl;
    }*/

    //EJERCICION NUMERO 2
    /*
    int numero;
    int i;
    cout<<"INGRESE UN NUMERO: "<<endl;
    cin>>numero;
    do {
        for (i=1; i<=numero; i++){
            cout<<i<<endl;
        }


    }while (i ==numero);
*/
    //EJERCICIO NUMERO 3
    int numero;
    int multi;
    int i;
    cout<<"INGRESA EL NUMERO DE TABLA QUE DESEAS GENERAR: "<<endl;
    cin>>numero;

    for (i=1; i<=10; i++){
        multi=i*numero;
        cout<<numero<<" x "<<i<<" = "<<multi<<endl;

    }


    return 0;
}