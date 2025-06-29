#include <iostream>
#include <vector>

using namespace std;

//Topico 5, questão 1;
void PrimosnoIntevalo(int n1, int n2)
{
    if(n1 < 2) n1 = 2;
    int tamanholista = (n2 - n1) + 1;
    int arraydocrivo[tamanholista];
    int arrayprimos[tamanholista];

    for(int i = 0; tamanholista > i; i++)
    {
        arraydocrivo[i] = n1 + i;
    }

    int icontrole = 0;
    for(int i = 2; n1 > i;i++)
    {
        while(tamanholista > icontrole)
        {
            if(arraydocrivo[icontrole] % i == 0)
            {
                arraydocrivo[icontrole] = 0;
            }
            icontrole++;
        }
        icontrole = i - 1;
    }
    
    icontrole = 0;
    int iprimo = 0;
    while(n2 >= n1)
    {
        if(arraydocrivo[icontrole] == n1)
        {
            arrayprimos[iprimo] = n1;
            iprimo++;

            for(int i = icontrole + 1; tamanholista > i; i++)
            {
                if(arraydocrivo[i] % n1 == 0)
                {
                    arraydocrivo[i] = 0;
                }
            }
        }
        icontrole++;
        n1++;
    }
    
    for(int i = 0; iprimo > i; i++)
    {
        cout << arrayprimos[i] << " ";
    }
    if(iprimo == 0) cout << "Sem nenhum primo no intervalo" << endl;
}

int main()
{
    PrimosnoIntevalo(2147483640, 2147483647);
    return 0;
}