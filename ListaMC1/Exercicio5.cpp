#include <iostream>
#include <vector>

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

int Mdc(long long x, long long y)
{
    long long maior = x;
    long long menor = y;
    if( y > x)
    {
        maior = y;
        menor = x;
    }
    long long resto;
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
        if (expoente % 2 == 1) {
            resultado = (resultado * base) % modulo;
        }
        
        base = (base * base) % modulo;  
        expoente = expoente / 2;   
    }

    return resultado;
}

void ExibeMensagem(string mensagem, int tamanho)
{
    for(int i = 0; tamanho > i; i++)
    {
        cout << mensagem[i];
    }
    cout << endl;
}


void DescriptografarPrivado(long long c[], int tamanhomensagem ,long long d, long long n)
{
    string mensagemdescriptografada(tamanhomensagem, ' ');
    long long m;

    for(int i = 0; tamanhomensagem > i; i++)
    {
        if(c[i] == 32)
        {
            mensagemdescriptografada[i] = 32;
        }
        else
        {
            long long m = PotenciaModular(c[i], d, n);
            mensagemdescriptografada[i] = m;
        }
    }
    cout << "Descriptografada: ";
    ExibeMensagem(mensagemdescriptografada,tamanhomensagem);
}

void EncriptacaoPublico(string mensagem , int tamanhodamensagem,long long n, long long e, long long arrayc[])
{
    string letras = "ABCDEFGJHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    string mensagemencriptada= "";

    for(int i = 0; tamanhodamensagem > i; i++)
    {
        long long c;
        
        if(mensagem[i] == ' ')
        {
            mensagemencriptada+=' ';
            c = 32;
        }
        else 
        {
            int mens = mensagem[i];
            c = PotenciaModular(mens, e, n);
            int temp = c % 52;
            mensagemencriptada+=letras[temp];
        }
        arrayc[i] = c;
    }
    cout << "Mensagem Encriptada: ";
    ExibeMensagem(mensagemencriptada, tamanhodamensagem);
}

void Rsa(string mensagem , long long p, long long q, long long e)
{
    cout << "Valor do p: " << p << endl;
    cout << "Valor do q: " << q << endl;
    long long n = p * q;
    cout << "Valor do N: " << n << endl;

    long long totiende = (p - 1) * (q - 1);
    cout << "Valor da funcao totiende de N: "<<totiende << endl;

    while(Mdc(e,totiende) != 1)
    {
        if(e % 2 == 1) e+=2;
        else e+=1;
    }
    cout << "Valor de e: " << e << endl;
    long long d = AlgoritmoEstendidoEuclides( e, totiende);
    if(d < 0) d+=totiende; 
    cout << "Valor do inverso multiplicativo de e: "<< d << " que eh o nosso d" << endl;

    int tamanhodamensagem = mensagem.length();
    long long arrayc[tamanhodamensagem] = {0};

    EncriptacaoPublico(mensagem, tamanhodamensagem, n, e, arrayc);

    DescriptografarPrivado(arrayc, tamanhodamensagem , d, n);
}

int main()
{
    bool comecou = true;

    while(comecou)
    {
        int x; 
        cout << "1 - Para Iniciar | 99 - Para Sair " << endl;
        cin >> x;
        if(x == 1)
        {
            string mensagem;
            long long p, q;
            cout << "Digite a palavra" << endl;
            cin.ignore();
            getline(cin, mensagem);
            cout << "Digite dois numeros primos" << endl;
            cin >> p >> q;
            Rsa(mensagem , p, q, 17);
        }
        if(x == 99)
        {
            comecou = false;
        }
        cout << endl;
    }
    
    return 0;
}