#include <iostream>

using namespace std;

int main(){

    int ArrayElementos[100];
    int TamanhoDoArray = sizeof(ArrayElementos) / sizeof(ArrayElementos[0]);
    //A função Sizeof calculo o espaço que o array ocupa na memoria
    int Maior;
    int PosicaoDoMaior;

    for(int i = 0; TamanhoDoArray > i; i++)
    {
        cin >> ArrayElementos[i];

        if(i == 0)
        {
            Maior = ArrayElementos[0];
            PosicaoDoMaior = 0;
        }
        else
        {
            if( ArrayElementos[i] > Maior )
            {
                Maior = ArrayElementos[i];
                PosicaoDoMaior = i;
            }
        }
    }

    cout << Maior << endl;
    cout << PosicaoDoMaior + 1 << endl;

    return 0;
}