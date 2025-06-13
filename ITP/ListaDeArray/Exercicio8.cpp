#include <iostream>

using namespace std;

int main()
{

    int m, n;
    cin >> m >> n;

    int ArrayM[m], ArrayN[n];

    for(int i = 0; m > i; i++)
    {
        cin >> ArrayM[i];
    }

    for(int i = 0; n > i; i++)
    {
        cin >> ArrayN[i];
    }

    int controle;
    for(int i = 0; m > i; i++)
    {
        controle = 0;

        for(int ix = (i + 1); n > ix; ix++ )
        {
            if(ArrayM[i] == ArrayN[ix])
            {
               controle = 1;
            }
        }

        if(controle != 0){
            cout << "O Valor " << ArrayM[i] << " Aparece em ambas as sequencias";
            cout << " ";
        }

    }

    return 0;
}