#include <iostream>

using namespace std;

int main(){

    int Vetor[10];
    int TamanhoVetor = sizeof(Vetor) / sizeof(Vetor[0]);
    int ValorUm = 1;

    for(int i = 0; TamanhoVetor > i; i++)
    {
        cin >> Vetor[i];

        if( Vetor[i] == 0 || Vetor[i] < 0 )
        {
            Vetor[i] = ValorUm;
        }

        cout << "X[" << i << "] = " << Vetor[i] << endl;
    }
    return 0;
}