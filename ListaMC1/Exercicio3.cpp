#include <iostream>

using namespace std;

int MDC(int x, int y)
{
    int maior = x;
    int menor = y;
    if( y > x)
    {
        maior = y;
        menor = x;
    }
    
    int resto;
    cout << maior << " eh maior que " << menor << endl;
    while(menor != 0)
    {
        resto = maior % menor;
        cout << "Resto da divisao de " << maior << " Por " << menor << " Eh " << resto << endl;
        maior = menor;
        cout << " Maior passar a ser o menor " << menor << endl; 
        menor = resto;
        cout << " Menor passar a ser o resto da divisao " << resto << endl;
    }
    return maior;
}

int main()
{
    cout << "Esse eh o MDC: " << MDC(30,42) << endl;
}