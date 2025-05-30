#include <iostream>

using namespace std;

int Maior(int array[], int tamanho)
{
    int maior = array[0];
    for(int i = 1; tamanho > i; i++)
    {
        if(array[i] > maior) maior = array[i];
    }   
    return maior;
}

int main()
{
    int tam; cin >> tam;

    int Array[tam];

    for(int i = 0; tam > i; i++)
    {
        cin >> Array[i];
    }

    int MaiorElemento = Maior( Array, tam );

    cout << "this is max number in array" <<MaiorElemento << '\n';

    return 0;
}