#include <iostream>

using namespace std;

int Div(int dividendo, int divisor)
{
    int quociente = 0;

    if(dividendo > 0 )
    {
        if( divisor > 0){
            while( divisor <= dividendo)
            {
                quociente++;
                dividendo = dividendo - divisor;
            } 
        }
        else if(divisor < 0)
        {
            divisor = -1 * divisor; 
            while( divisor <= dividendo)
            {
                quociente++;
                dividendo = dividendo - divisor;
            }
            quociente = -1 * quociente;
        }
        else
        {
            cout << "Inderfinido" << endl;
            return 0;
        }
    }
    
    else if (dividendo < 0)
    {
        if(divisor > 0) //Maior que 0
        {
            while(dividendo < 0)
            {
                quociente--;
                dividendo = dividendo + divisor;
            }
            return quociente;
        }
        else if(divisor < 0) //Menor que 0
        {
            while(dividendo < 0)
            {
                quociente++;
                dividendo = dividendo - divisor;
            }
            return quociente;
        }
    }
    else
    {
        return dividendo;
    }
    return quociente;
}
int Mod(int dividendo, int divisor)
{
    int resto; 
    resto = dividendo - divisor * Div(dividendo,divisor);
    return resto;
}

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
    
    int passos = 1;
    while(menor != 0)
    {
        cout << "Passo: " << passos << endl;
        resto = Mod(maior, menor);
        cout << "Resto da divisao de " << maior << " Por " << menor << " Eh " << resto << endl;
        cout << endl;
        maior = menor;
        cout << "Maior passar a ser o menor " << menor << endl; 
        menor = resto;
        cout << "Menor passar a ser o resto da divisao " << resto << endl;
        cout << endl;
        passos++;
    }

    cout << "Valor do MDC ";

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