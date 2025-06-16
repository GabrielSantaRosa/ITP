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
    while(menor != 0)
    {
        resto = maior % menor;
        maior = menor;
        menor = resto;
    }
    return maior;
}

void Bezout(int x, int y)
{
    int m,n; // m <> 0 e n <> 0
    //Mdc(x,y) = x * m + y * n;
}

int main()
{
    return 0;
}