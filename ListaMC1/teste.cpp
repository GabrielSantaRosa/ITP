#include <iostream>

using namespace std;


void CrivodeAratostenes(int n1, int n2)
{
    if(n1 < 2) n1 = 2;
    int tamanholista = n2 - n1;
    int arraydocrivo[tamanholista];
    int arrayprimos[tamanholista];

    for(int i = 0; tamanholista > i; i++)
    {
        arraydocrivo[i] = n1 + i;
    }

    int icontrole = 0;;
    int iprimo = 0;
    while(n2 >= n1)
    {
        if(arraydocrivo[icontrole + 1] == 0)
        {
            arrayprimos[iprimo] = n1;
            iprimo++;
        }
        for(int ix = icontrole; tamanholista > ix; ix++){
            if(arraydocrivo[ix] % n1 == 0){
                arraydocrivo[ix] = 0;
            }
        }

        n1++;
        icontrole++;
    }

    for(int i = 0; iprimo > i; i++)
    {
        cout << arrayprimos[i] << " ";
    }
}

int main()
{
    CrivodeAratostenes(2,100);
    return 0;
}

// int main()
// {
//     long long f = PotenciaModular(20, 65537, 63984317);
//     long long g = PotenciaModular(f,28743137, 63984317);
//     cout << f << endl;
//     cout << g << endl;
// }