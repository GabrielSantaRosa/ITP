#include <iostream>

using namespace std;

float FunctionPiso(float Valor)
{
    int piso = 0;

    if(Valor > 0)
    {
        while(Valor >= piso)
        {
            piso++;
            if(piso > Valor)
            {
                piso--;
                break;
            }
        }
    }
    if(Valor < 0)
    {
        while( piso >= Valor )
        {
            piso--;
            if(piso == Valor) break;
        }
    }
    return piso;
}

float FunctionTeto(float valor)
{
    int teto = 0;

    if(valor > 0)
    {
        while(valor > teto)
        {
            teto++;
            if(valor == teto) break;
        }
    }
    if(valor < 0)
    {
        while(teto > valor)
        {
            teto--;
            if(valor > teto) 
            {
                teto++;
                break;
            }
        }
    }

    return teto;
}

int Divisao(int dividendo, int divisor)
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
        if(divisor < 0)
        {
            divisor = -1 * divisor; 
            while( divisor <= dividendo)
            {
                quociente++;
                dividendo = dividendo - divisor;
            }
            quociente = -1 * quociente;
        }
    } 
    
    return quociente;
}

int main()
{

    cout << Divisao(2,-1);
    return 0;
}


    // if(dividendo > 0 && divisor > 0)
    // {
    //     while( divisor <= dividendo)
    //     {
    //         quociente++;
    //         dividendo = dividendo - divisor;
    //     }  
    // } 
    // //Certo

    // else if( dividendo > 0 && divisor < 0 )
    // {

    //     divisor = -1 * divisor; 
    //     while( divisor <= dividendo)
    //     {
    //         quociente++;
    //         dividendo = dividendo - divisor;
    //     }
    //     quociente = -1 * quociente;
    // }