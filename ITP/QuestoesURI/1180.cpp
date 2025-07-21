#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t; cin >> t;
    vector <int> Numeros;
    for(int i = 0; t > i; i++)
    {
        int x; cin >> x;
        Numeros.push_back(x);
    }
    int menor = Numeros[0];
    int posicao = 1;
    for(int i = 1; t > i; i++)
    {
        if(Numeros[i] < menor)
        {
            menor = Numeros[i];
            posicao = i;
        }
    }
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posicao << endl;
    return 0;
}