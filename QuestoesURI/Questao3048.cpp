#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int QuantidadeDeNumeros;
    int NumeroPrimeiro;
    int Contador = 0;
    cin >> QuantidadeDeNumeros;
    int NumeroSegundo = 0;

    for(int i = 0; QuantidadeDeNumeros > i; i++)
    {
        NumeroSegundo = NumeroPrimeiro;
        cin >> NumeroPrimeiro;

        if(NumeroPrimeiro != NumeroSegundo)
        {
            Contador++;
        }
    }

    cout << Contador << endl;

    return 0;
}