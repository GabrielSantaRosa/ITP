#include <iostream>

using namespace std;

int main(){

    int n;
    int NumerosPositivos = 0, NumerosNegativos = 0;
    int NumeroDigitado;
    cin >> n;

    for(int i = 0; n > i; i++){
        cin >> NumeroDigitado;
        if ( NumeroDigitado > 0)
        {
            NumerosPositivos++;
        }
        else{
            NumerosNegativos++;
        }
    }
    
    cout << "Quantidade de numeros Positivos " << NumerosPositivos << endl;
    cout << "Quantidade de numeros Negativos " << NumerosNegativos << endl;

    return 0;
}