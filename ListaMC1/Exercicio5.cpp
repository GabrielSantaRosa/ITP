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

void AlgoritmoEstendidoEuclides(long long a, long long b, long long &d)
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
    
    //cout << "X = " << VectorBizout[0].xBizo << " , Y = " << VectorBizout[0].yBizo << endl;
    d = VectorBizout[0].xBizo;
    //cout << "(" <<a_guarda << " * " << VectorBizout[0].xBizo << ") + (" << b_guarda << " * " << VectorBizout[0].yBizo << ") = " << VectorBizout[qtdElementos].aBizo;
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

int PotenciaModular(int base, int expoente, int modulo) {
    int resultado = 1;
    base = base % modulo;  // Reduz a base inicial

    while (expoente > 0) {
        if (expoente % 2 == 1) {  // Expoente ímpar
            resultado = (resultado * base) % modulo;
        }
        // Expoente agora é par (ou era par desde o início)
        base = (base * base) % modulo;  // Quadratura da base
        expoente = expoente / 2;       // Reduz o expoente pela metade
    }

    return resultado;
}

void Rsa(int p, int q, int e)
{
    int n = p * q;
    // Nosso N que é o produto entres o primos
    cout << n << endl;
    int totiende_n = (p - 1) * (q - 1);
    // Nossa Função totiende que calcula a quantidade de 
    cout << totiende_n << endl;

    while(Mdc(e,totiende_n) != 1)
    {
        cout << "Digite um valor diferente para o e" << endl;
        cin >> e;
    }

    long long d;
    AlgoritmoEstendidoEuclides( e, totiende_n, d);
    cout << d << endl;
}

int main()
{
    Rsa(7823, 8179, 65537);
}