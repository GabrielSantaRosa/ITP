#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Bizout
{
    long long aBizo;
    long long bBizo;
    long long qBizo;
    long long xBizo;
    long long yBizo;
};

long long AlgoritmoEstendidoEuclides(long long a, long long b)
{
    // if(a == 0 && b == 0)
    // {
    //     cout << "indefinido" << endl;
    //     return;
    // }

    long long a_guarda = a;
    long long b_guarda = b;

    vector<Bizout> VectorBizout;
    Bizout bizout;

    while(b != 0)
    {
        bizout.aBizo = a;
        bizout.bBizo = b;
        bizout.qBizo = a/b;
        bizout.xBizo = 0;
        bizout.yBizo = 0;
        VectorBizout.push_back(bizout);
        long long temp = a % b;
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

    long long qtdElementos = VectorBizout.size() - 1; 
    //Os endereços no vector comecam a contar aparti do 0;

    for(long long i = qtdElementos; i > 0; i--)
    {
        VectorBizout[i-1].xBizo = VectorBizout[i].yBizo;
        VectorBizout[i-1].yBizo = VectorBizout[i].xBizo - VectorBizout[i-1].qBizo * VectorBizout[i].yBizo;
    }
    
    long long d = VectorBizout[0].xBizo;
    return d;
}

int Mdc(int x, int y)
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

long long PotenciaModular(long long base, long long expoente, long long modulo) {
    long long resultado = 1;
    base = base % modulo;

    while (expoente > 0) {
        if (expoente % 2 == 1) { //Entrar aqui quando for impar, e o na ultima interação o expoente vai ser 1, portanto a ultima vez que vai entrar nessa condição vai ser quando o expoente for igual a 1; 
            resultado = (resultado * base) % modulo;
        }
        
        base = (base * base) % modulo;  
        expoente = expoente / 2; //usando a   
    }

    return resultado;
}

void ExibeMensagem(string mensagem)
{
    int tamanho = mensagem.length();
    for(int i = 0; tamanho > i; i++)
    {
        cout << mensagem[i];
    }
}

void EncriptacaoPublico(string mensagem , long long n, long long e)
{
    int TamanhoDaMensagem = mensagem.length();

    string mensagemencriptada= "";
    for(int i = 0; TamanhoDaMensagem > i; i++)
    {
        if(mensagem[i] == ' ')
        {
            mensagemencriptada+=' ';
        }
        else 
        {
            int mens = mensagem[i];
            long long c = PotenciaModular(mens, e, n);
            int temp = c % 58;
            if(c >=27 && c <= 33) c = 35; //Fiz isso por que na tabela ascii tem um caracteres especiais entre o 'Z' e o 'a';
            mensagemencriptada+='A' + temp;
        }
    }
    ExibeMensagem(mensagemencriptada);
}

void Rsa(string mensagem ,int p, int q, int e)
{
    int n = p * q; // Nosso N que é o produto entres o primos
    cout << "Valor do N: " << n << endl;

    int totiende = (p - 1) * (q - 1); // Nossa Função totiende que calcula a quantidade de 
    cout << "Valor da funcao totiende de N: "<<totiende << endl;

    while(Mdc(e,totiende) != 1)
    {
        //cout << "Digite um valor diferente para o e" << endl;
        //cin >> e;
        if(e % 2 == 1) e=+2;
        else e=+1;
    }
    cout << "Valor de e: " << e << endl;
    long long d = AlgoritmoEstendidoEuclides( e, totiende); //Inverso multiplicativo modular
    if(d < 0) d+=totiende; 
    cout << "Valor do inverso multiplicativo de e: "<< d << endl;

    EncriptacaoPublico( mensagem, n ,e);
}

int main()
{
    Rsa( "Gabriel Santa",61, 53, 17);
    return 0;
}