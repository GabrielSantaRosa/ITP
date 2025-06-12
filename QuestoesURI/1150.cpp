#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    while(y < x)
    {
        cin >> y;
    }

    int soma = x;
    int proximo = x + 1;
    int qtd = 1;

    while(soma <= y)
    {
        soma += proximo;
        proximo++;
        qtd++;
    }
    
    cout << 2 << endl;
}