#include <iostream>

using namespace std;

int main(){

    int N;
    int contadorPrimo = 0;

    cin >> N;

    for(int NumeroPrimo = 1; N >= NumeroPrimo; NumeroPrimo++){
        for(int ix = 1; NumeroPrimo >= ix; ix++){
            if(NumeroPrimo % ix == 0){
                contadorPrimo++;
            }
        }
        if(contadorPrimo == 2){
            cout << "Numero primo " << NumeroPrimo << endl;
        }
        contadorPrimo = 0;
    }

    return 0;
}