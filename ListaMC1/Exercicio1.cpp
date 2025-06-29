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
        else
        {
            cout << "Inderfinido" << endl;
        }
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

//Topico 5, questão 1;
void PrimosnoIntevalo(int n1, int n2)
{
    if(n1 < 2) n1 = 2;
    int tamanholista = (n2 - n1) + 1;
    int arraydocrivo[tamanholista];
    int arrayprimos[tamanholista];

    for(int i = 0; tamanholista > i; i++)
    {
        arraydocrivo[i] = n1 + i;
    }

    int icontrole = 0;
    for(int i = 2; n1 > i;i++)
    {
        while(tamanholista > icontrole)
        {
            if(arraydocrivo[icontrole] % i == 0)
            {
                arraydocrivo[icontrole] = 0;
            }
            icontrole++;
        }
        icontrole = i - 1;
    }
    
    icontrole = 0;
    int iprimo = 0;
    while(n2 >= n1)
    {
        if(arraydocrivo[icontrole] == n1)
        {
            arrayprimos[iprimo] = n1;
            iprimo++;

            for(int i = icontrole + 1; tamanholista > i; i++)
            {
                if(arraydocrivo[i] % n1 == 0)
                {
                    arraydocrivo[i] = 0;
                }
            }
        }
        icontrole++;
        n1++;
    }
    
    for(int i = 0; iprimo > i; i++)
    {
        cout << arrayprimos[i] << " ";
    }
    if(iprimo == 0) cout << "Sem nenhum primo no intervalo" << endl;
    cout << endl;
}


int main() {

    bool comecou = true;

    cout << "Escolha as funcoes que voce ira ultilizar" << endl;

    while(comecou)
    {
        cout << "1 - Funcao Piso | 2 - Funcao teto | 3 - Divisao | 4 - Resto da Divisao | 5 - Primos entre o intervalo | 99 - Exit " << endl;
        int x; cin >> x;  
        if(x == 1)
        {
            cout << "Digite um numero" << endl;
            float y; 
            cin >> y;
            cout << FunctionPiso(y) << endl;
        }
        if(x == 2)
        {
            cout << "Digite um numero" << endl;
            float y; cin >> y;
            cout << FunctionTeto(y) << endl;
        }
        if(x == 3)
        {
            cout << "Digite o dividendo e o divisor" << endl;
            int dividendo,divisor; cin >> dividendo >> divisor;
            cout << Div(dividendo,divisor) << endl;
        }
        if(x == 4)
        {
            cout << "Digite o dividendo e o divisor para a gente calcular o resto" << endl;
            int dividendo,divisor; cin >> dividendo >> divisor;
            cout << Mod(dividendo,divisor) << endl;
        }
        if(x == 5)
        {
            cout << "Digite dois numeros que irei mostras os primos no intervalor dos numeros" << endl;
            int inicio,fim; cin >> inicio >> fim;
            PrimosnoIntevalo(inicio,fim);
        }
        if( x == 99)
        {
            comecou = false;
        }
        cout << "===================================" << endl;
    }

    return 0;
}