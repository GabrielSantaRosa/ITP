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
                //Coloquei que não pode ser 0 por que no caso quando o dividendo for igual a 0 quero que o algoritmo não seja mais ultilizando
                //pois quando o dividendo for igual a 0 significar que o resultado de fato seria um numero inteiro
                //Exemplo -15 div 3 = -5,   -15 = 3 * (-5) + 0, o nosso resto sempre tem que ser r >= 0 e r > divisor
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
    //Lembrando que o resto tem que ser um numero positivo que pode ser 0 ou um numero menor que o divisor;
    // dividendo = divisor * quociente + resto
    resto = dividendo - divisor * Div(dividendo,divisor);
    return resto;
}

//Topico 5, questão 1;
bool Ehprimo(const int x)
{
    bool verificador = true;
    int contador = 0;
    if(x == 1)
    {
        return false;
    }
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
            if(array[i] > 0)
            {
            cout << array[i] << "." << endl;
            break; 
            }
        }
        if(array[i] > 0)
        {
            cout << array[i] << ", ";
        }
    }
}

void Primosnointervalo(const int x, const int y)
{
    //Vale lembra que o menor numero primo é o 2, portanto não existe numero negativo primo
    //Pela difinição dos numeros numeros inteiros superiores a 1 que tenham dois divisores, o 1 e o proprio numero;
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

int main() {
    cout << "=== Iniciando testes ===" << endl;
    
    // Testes para FunctionPiso
    cout << "\nTestes FunctionPiso:" << endl;
    if(FunctionPiso(3.7) == 3) cout << "Passou no teste de piso(3.7) = 3" << endl;
    else cout << "FALHOU no teste de piso(3.7) - esperado: 3, obtido: " << FunctionPiso(3.7) << endl;
    
    if(FunctionPiso(-2.3) == -3) cout << "Passou no teste de piso(-2.3) = -3" << endl;
    else cout << "FALHOU no teste de piso(-2.3) - esperado: -3, obtido: " << FunctionPiso(-2.3) << endl;
    
    if(FunctionPiso(0.0) == 0) cout << "Passou no teste de piso(0.0) = 0" << endl;
    else cout << "FALHOU no teste de piso(0.0) - esperado: 0, obtido: " << FunctionPiso(0.0) << endl;

    // Testes para FunctionTeto
    cout << "\nTestes FunctionTeto:" << endl;
    if(FunctionTeto(3.2) == 4) cout << "Passou no teste de teto(3.2) = 4" << endl;
    else cout << "FALHOU no teste de teto(3.2) - esperado: 4, obtido: " << FunctionTeto(3.2) << endl;
    
    if(FunctionTeto(-2.7) == -2) cout << "Passou no teste de teto(-2.7) = -2" << endl;
    else cout << "FALHOU no teste de teto(-2.7) - esperado: -2, obtido: " << FunctionTeto(-2.7) << endl;
    
    if(FunctionTeto(0.0) == 0) cout << "Passou no teste de teto(0.0) = 0" << endl;
    else cout << "FALHOU no teste de teto(0.0) - esperado: 0, obtido: " << FunctionTeto(0.0) << endl;

    // Testes para Div
    cout << "\nTestes Div:" << endl;
    if(Div(10, 3) == 3) cout << "Passou no teste de 10 div 3 = 3" << endl;
    else cout << "FALHOU no teste de 10 div 3 - esperado: 3, obtido: " << Div(10, 3) << endl;
    
    if(Div(-11, 3) == -4) cout << "Passou no teste de -11 div 3 = -4" << endl;
    else cout << "FALHOU no teste de -11 div 3 - esperado: -4, obtido: " << Div(-11, 3) << endl;
    
    if(Div(10, -3) == -3) cout << "Passou no teste de 10 div -3 = -3" << endl;
    else cout << "FALHOU no teste de 10 div -3 - esperado: -3, obtido: " << Div(10, -3) << endl;
    
    if(Div(-10, -3) == 4) cout << "Passou no teste de -10 div -3 = 4" << endl;
    else cout << "FALHOU no teste de -10 div -3 - esperado: 4, obtido: " << Div(-10, -3) << endl;
    
    // Testes para Mod
    cout << "\nTestes Mod:" << endl;
    if(Mod(10, 3) == 1) cout << "Passou no teste de 10 mod 3 = 1" << endl;
    else cout << "FALHOU no teste de 10 mod 3 - esperado: 1, obtido: " << Mod(10, 3) << endl;
    
    if(Mod(-11, 3) == 1) cout << "Passou no teste de -11 mod 3 = 1" << endl;
    else cout << "FALHOU no teste de -11 mod 3 - esperado: 1, obtido: " << Mod(-11, 3) << endl;
    
    if(Mod(10, -3) == 1) cout << "Passou no teste de 10 mod -3 = 1" << endl;
    else cout << "FALHOU no teste de 10 mod -3 - esperado: 1, obtido: " << Mod(10, -3) << endl;

    // Testes para Primosnointervalo
    cout << "\nTestes Primosnointervalo:" << endl;
    cout << "Primos entre 1 e 10 (deveria mostrar 2, 3, 5, 7): ";
    Primosnointervalo(1, 10);
    
    cout << "Primos entre 10 e 20 (deveria mostrar 11, 13, 17, 19): ";
    Primosnointervalo(10, 20);
    
    cout << "Primos entre -5 e 5 (deveria mostrar 2, 3, 5): ";
    Primosnointervalo(-5, 5);

    cout << "\n=== Fim dos testes ===" << endl;
    return 0;
}