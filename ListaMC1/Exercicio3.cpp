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
        cout << "Maior passar a ser o menor " << menor << endl; 
        menor = resto;
        cout << "Menor passar a ser o resto da divisao " << resto << endl;
    }
    cout << "eh o mdc ";
    return maior;
}

int main()
{
    while(true)
    {
        cout << "1 - Para iniciciar o calculo do MDC || 99 - Para encerrar" << endl;
        int x; cin >> x;
        if(x == 1)
        {
            cout << "Insirar os dois numeros para calcular o MDC!" << endl;
            int m,n; cin >> m >> n;
            cout << MDC(m,n) << endl;
        }
        if(x == 99)
        {
            break;
        }
        cout << endl;
    }
}