#include <iostream>
#include <stdio.h>

using namespace std;
int main() {
    int numero;
    cout << "INGRESE UN NUMERO Y LE DIRE SI ES PAR O IMPAR: " << endl;
    cin >> numero;

    if (numero%2 ==0){
        cout<<numero<<" ES UN NUMERO PAR"<<endl;
    }else {
        cout<<numero<<" ES UN NUMERO IMPAR"<<endl;
    }

    return 0;
}
