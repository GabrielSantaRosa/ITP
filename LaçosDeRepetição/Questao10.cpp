#include <iostream>

using namespace std;

int main(){

    int N;
    int PrimeiroNumero, UltimoNumero;
    int SequenciaDeNumeros;
    int i = 1; //Contador

    cin >> N;
    while(N >= i){
        cin >> SequenciaDeNumeros;
        if(i == 1){
            PrimeiroNumero = SequenciaDeNumeros;
        }
        else if(i == N){
            UltimoNumero = SequenciaDeNumeros;
        }
        i++;
    }
    if(PrimeiroNumero == UltimoNumero){
        cout << "1"; // São iguais
    }
    else{
        cout << "0"; //São diferentes
    }
    cout << endl;

    return 0;
}