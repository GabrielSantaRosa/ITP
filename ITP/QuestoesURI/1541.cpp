#include <iostream>

using namespace std;

int tamanho(int lado, int altura, int p)
{
    int Terreno = lado * altura;
}

int main()
{
    while(true)
    {
        int L1,L2,P;
        cin >> L1;
        if(L1 == 0) break;
        cin >> L2 >> P;
        cout << tamanho(L1,L2,P) << endl;
    }
    return 0;
}