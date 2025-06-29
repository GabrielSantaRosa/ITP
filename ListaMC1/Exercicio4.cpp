#include <iostream>
#include <vector>

using namespace std;

//Topico 3, questão 1;
long long Div(long long dividendo, long long divisor)
{
    long long quociente = 0;
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

//Topico 4, questão 1
long long Mod(long long dividendo, long divisor)
{
    long long resto; 
    resto = dividendo - divisor * Div(dividendo,divisor);
    return resto;
}

struct Bizout
{
    long long aBizo;
    long long bBizo;
    long long qBizo;
    long long xBizo;
    long long yBizo;
};
// a * x + b * y = mdc(x,y);

void AlgoritmoEstendidoEuclides(long long a, long long b)
{
    if(a == 0 && b == 0)
    {
        cout << "indefinido" << endl;
        return;
    }

    long long a_guarda = a;
    long long b_guarda = b;

    vector<Bizout> VectorBizout;
    Bizout bizout;

    while(b != 0)
    {
        bizout.aBizo = a;
        bizout.bBizo = b;
        bizout.qBizo = Div(a,b);
        bizout.xBizo = 0;
        bizout.yBizo = 0;
        VectorBizout.push_back(bizout);
        long long temp = Mod(a,b);
        a = b;
        b = temp;
    }

    //Caso quando o B seja em 0;
    bizout.aBizo = a;
    bizout.bBizo = b;
    bizout.qBizo = 0;
    bizout.xBizo = 1;
    bizout.yBizo = 0;
    VectorBizout.push_back(bizout);

    cout << "Esse eh o MDC " << a << endl;

    long long qtdElementos = VectorBizout.size() - 1; 

    for(long long i = qtdElementos; i > 0; i--)
    {
        VectorBizout[i-1].xBizo = VectorBizout[i].yBizo;
        VectorBizout[i-1].yBizo = VectorBizout[i].xBizo - VectorBizout[i-1].qBizo * VectorBizout[i].yBizo; // y = x - q* y' (y anterior)

        cout << "Passo " << qtdElementos - i + 1 << ":" << endl;
        cout << VectorBizout[i-1].aBizo << " * " << VectorBizout[i-1].xBizo << " + " << VectorBizout[i-1].bBizo << " * " << VectorBizout[i-1].yBizo 
        << " = " << VectorBizout[qtdElementos].aBizo << endl;
    }

    cout << endl;
    cout << "X = " << VectorBizout[0].xBizo << " , Y = " << VectorBizout[0].yBizo << endl;
    cout << endl;
    cout << "(" <<a_guarda << " * " << VectorBizout[0].xBizo << ") + (" << b_guarda << " * " << VectorBizout[0].yBizo << ") = " << VectorBizout[qtdElementos].aBizo;
    cout << endl;
}

int main()
{

    bool comecou = true;

    while(comecou)
    {
        int x;
        cout << "1 - Para Iniciar | 99 - Para Sair" << endl;
        cin >> x;
        if(x == 1)
        {    
            long long n1,n2;
            cout << "Digites os dois valores" << endl;
            cin >> n1 >> n2;
            AlgoritmoEstendidoEuclides(n1, n2);
        }
        if(x == 99)
        {
            comecou = false;
        }
        cout << endl;
    }

    return 0;
}