#include <iostream>

using namespace std;

int main(){

    int N,M;
    cin >> N >> M;

    int VetorA[N], VetorB[M];

    for (int i = 0; N > i; i++)
    {
        cin >> VetorA[i];
    }

    // for (int i = 0; N > i; i++)
    // {
    //     cin >> VetorB[i];
    // }

    int vetorAresultado[N];
    int menor;
    for(int i = 0; N > i; i++)
    {
        
        if(i == 0)
        {
            menor = VetorA[0];
        }

        int contador = i + 1;
        while(N > contador)
        {
            if(menor > VetorA[contador])
            {
                menor = VetorA[contador];
            }
            contador++;
        }
        
        vetorAresultado[i] = menor;
    }

    return 0;
}