#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int Array[n];

    for(int i = 0; n > i; i++)
    {
        cin >> Array[i];
    }

    int ContadorDeModa = 0; //O diferenciado
    int PosicaoDoElemento;
    for(int i = 0; (n - 1) > i; i++)
    {
        int controle = 1;

        for(int ix = (i + 1) ; n > ix; ix++)
        {
            if(Array[i] == Array[ix])
            {
                controle++;
            }
        }
        if(controle >= ContadorDeModa)
        {
            PosicaoDoElemento = i;
            ContadorDeModa = controle;
        }
    }

    cout << "Valor " << Array[PosicaoDoElemento] << " Se repeti " << ContadorDeModa << endl;

    //Não funcionar para conjuntos bimodais, depois ajeitar um codigo para isso.
    
    return 0;
}