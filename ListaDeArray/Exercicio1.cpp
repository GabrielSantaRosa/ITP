#include <iostream>

using namespace std;

int main()
{
    int QuantidadeDeDigitos;
    cin >> QuantidadeDeDigitos;

    int Array[QuantidadeDeDigitos];

    for(int i = 0; QuantidadeDeDigitos > i; i++)
    {
        cin >> Array[i];
    }

    int MetadeDoArray = QuantidadeDeDigitos / 2;
    bool VariavelDeControle = true;
    for(int i = 0; MetadeDoArray > i; i++)
    {
        int ComparadorComecandoDoFim = (QuantidadeDeDigitos - 1) - i; //Menor 1 pois o numeros de posições dentro de um array começa pelo 0;  
        if(Array[i] != Array[ComparadorComecandoDoFim])
        {
            VariavelDeControle = false;
        }
    }

    if(VariavelDeControle == true)
    {
        cout << "Sim" << endl;
    }
    else
    {
        cout << "Nao" << endl;
    }

    return 0;
}