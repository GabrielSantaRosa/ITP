#include <iostream>
#include <vector>

using namespace std;

//Topico 3, questão 1;
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
            ///cout << "Inderfinido" << endl;
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
        // else
        // {
        //     cout << "Inderfinido" << endl;
        // }
    }
    else
    {
        return dividendo;
    }
    return quociente;
}

//Topico 4, questão 1
int Mod(int dividendo, int divisor)
{
    int resto; 
    resto = dividendo - divisor * Div(dividendo,divisor);
    return resto;
}

struct Bizout
{
    int aBizo;
    int bBizo;
    int qBizo;
    int xBizo;
    int yBizo;
};
// a * x + b * y = mdc(x,y);

void Exibe(Bizout b[], int tam)
{
    for(int i = tam; i >= 0 ; i--)
    {
        cout << b[i].aBizo << endl;
        cout << b[i].bBizo << endl;
        cout << b[i].qBizo << endl;
        cout << b[i].xBizo << endl;
        cout << b[i].yBizo << endl;
        cout << "========" << endl;
    }
}

void AlgoritmoEstendidoEuclides(int a, int b)
{
    if(a == 0 && b == 0)
    {
        cout << "indefinido" << endl;
        return;
    }

    int a_guarda = a;
    int b_guarda = b;

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
        int temp = Mod(a,b);
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

    int qtdElementos = VectorBizout.size() - 1; 
    //Os endereços no vector comecam a contar aparti do 0;

    for(int i = qtdElementos; i > 0; i--)
    {
        VectorBizout[i-1].xBizo = VectorBizout[i].yBizo;
        VectorBizout[i-1].yBizo = VectorBizout[i].xBizo - VectorBizout[i-1].qBizo * VectorBizout[i].yBizo;
    }
    
    cout << "X = " << VectorBizout[0].xBizo << " , Y = " << VectorBizout[0].yBizo << endl;

    cout << "(" <<a_guarda << " * " << VectorBizout[0].xBizo << ") + (" << b_guarda << " * " << VectorBizout[0].yBizo << ") = " << VectorBizout[0].aBizo;
}

int main()
{
    AlgoritmoEstendidoEuclides(-7, -12);
    return 0;
}