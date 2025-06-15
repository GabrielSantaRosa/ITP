#include <iostream>

using namespace std;


//Topico 1, questão 1;
int FunctionPiso(float Valor)
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

//Topico 2, questão 1;
int FunctionTeto(float valor)
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

//Topico 3, questão 1;
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


//Topico 5, questão 1;
bool Ehprimo(const int x)
{
    bool verificador = true;
    int contador = 0;
    for(int i = 1; x >= i; i++)
    {
        if(x % i == 0)
        {
            contador++;
        }
        if(contador > 2)
        {
            verificador = false;
            break;
        }
    }
    return verificador;
}

void mostraarray(int array[], int tamanho)
{
    for(int i = 0; tamanho > i; i++)
    {
        if(i + 1 == tamanho)
        {
            cout << array[i] << "." << endl;
            break; 
        }
        cout << array[i] << ", ";
    }
}

void Primosnointervalo(const int x, const int y)
{
    int maior = x;
    int menor = y;
    if(y > x)
    {
        maior = y;
        menor = x;
    }
    if(menor == 1) menor++;
    int Array[maior];
    int indicedoarray = 0;
    while(maior >= menor)
    {
        if(Ehprimo(menor) == true)
        {
            Array[indicedoarray] = menor;
            indicedoarray++;
        }
        menor++;
    }
    mostraarray(Array, indicedoarray);
}

int main()
{
    //cout << FunctionTeto(-2.5) << " " << FunctionTeto(2.5) << " " << FunctionPiso(-2.5) << " " << FunctionPiso(2.5) << endl;
    // Primosnointervalo(1,100);
    
    return 0;
}