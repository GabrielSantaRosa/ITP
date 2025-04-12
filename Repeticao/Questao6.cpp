#include <iostream>

using namespace std;

int main(){

    int QuantidadedeNumeros;
    int NumeroMagico;
    int Contador = 0;
    int NumerosDaSequencia;

    while(QuantidadedeNumeros > 0){
        cin >> NumerosDaSequencia;

        if(NumerosDaSequencia == NumeroMagico){
            Contador++;
        }
        QuantidadedeNumeros--;
    }
    
    cout << Contador << endl;

    return 0;
}