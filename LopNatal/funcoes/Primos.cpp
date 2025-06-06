#include <iostream>

using namespace std;

bool ConfirmarSeONumeroPrimo(int numero)
{
    int contador = 0;
    for(int i = 1; numero >= i; i++)
    {
        if(numero % i == 0)
        {
            contador++;
        }
        if(contador > 2) return false;
    }

    return true;
}

bool Gemeos(int numero)
{
    if(numero == 1) return false;
    int NumeroNovo = numero + 2;
    if(ConfirmarSeONumeroPrimo(numero))
    {
        if(ConfirmarSeONumeroPrimo(NumeroNovo) == true)
        {
            return true;
        } 
        else{
            return false;
        }
    }
    else
    {
        return false;
    } 
}

int main()
{
    int x; cin >> x;
    if(Gemeos(x) == true)
    {
        cout << "Numero forma par de gemeos" << endl;
        return 0;
    }
    cout << "Numero nao forma par de gemeos" << endl;

    return 0;
}