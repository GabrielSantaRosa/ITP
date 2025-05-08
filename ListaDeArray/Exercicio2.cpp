#include <iostream>

using namespace std;

int main()
{

    int n,m; cin >> n >> m;

    int ArrayA[n], ArrayB[m];

    //Peenche VetorN
    for(int i = 0; n > i ; i++)
    {
        cin >> ArrayA[i];
    }

    //Preeche VetorM
    for(int i = 0; m > i ; i++)
    {
        cin >> ArrayB[i];
    }

    //Procurar o menor numero no array
    int menor = ArrayB[0];
    for(int i = 1; m > i; i++)
    {
        if(menor > ArrayB[i])
        {
            menor = ArrayB[i];
        }
    }

    //Verificador os numeros menores que o menor do arrayB 
    for(int i = 0; n > i; i++)
    {
        if(menor > ArrayA[i])
        {
            cout << ArrayA[i] << endl;
        }
    }


    return 0;
}