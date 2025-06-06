#include <iostream>

using namespace std;

int SomaDivisores(int numero)
{
    int soma = 0;
    for(int i = 1; numero > i; i++)
    {
        if(numero % i == 0) soma += i;
    }
    return soma;
}

bool NumerosColegas(int valor1, int valor2)
{   
    cout << SomaDivisores(valor1) <<" " << valor2 << " " <<SomaDivisores(valor2) << " " << valor1 << endl;
    if(SomaDivisores(valor1) - valor2 <= 2 && SomaDivisores(valor2) - valor1 <= 2)
    {
        return true;
    }
    return false;
}

int main()
{
    int x,y; cin >> x >> y;
    if(NumerosColegas(x , y) == true)
    {
        cout << "S" << '\n';
    }
    else
    {
        cout << "N" << '\n';
    }
    return 0;
}