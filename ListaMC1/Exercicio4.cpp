#include <iostream>

using namespace std;

struct Bizout
{
    int aBizo;
    int bBizo;
    int qBizo;
    int xBizo;
    int yBizo;
};

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
    // a = abs(a);
    // b = abs(b);
    // if(b > a) 
    // {
    //     int temp = a;
    //     a = b;
    //     b = temp;
    // }
    //Vamos considerar que o X seja maior que o y;
    int tamanhodoarraybizout = 1000; //Escolhi o a, pq não sei qual seria o tamanho exato do array
    Bizout bizout[tamanhodoarraybizout];
    int tamanhoatual = 0;
    while(b != 0)
    {
        bizout[tamanhoatual].aBizo = a;
        bizout[tamanhoatual].bBizo = b;
        bizout[tamanhoatual].qBizo = a / b;
        bizout[tamanhoatual].xBizo = 0;
        bizout[tamanhoatual].yBizo = 0;
        tamanhoatual++;
        int temp = a % b;
        a = b;
        b = temp;
    }
    bizout[tamanhoatual].aBizo = a;
    bizout[tamanhoatual].bBizo = b;
    bizout[tamanhoatual].qBizo = 0; //Só para preencher pq seria a div de a | b onde b é zero;
    bizout[tamanhoatual].xBizo = 1;
    bizout[tamanhoatual].yBizo = 0;

    cout << "Esse eh o MDC " << bizout[tamanhoatual].aBizo << endl;

    for(int i = tamanhoatual; i > 0; i--)
    {
        bizout[i-1].xBizo = bizout[i].yBizo;
        bizout[i-1].yBizo = bizout[i].xBizo - bizout[i-1].qBizo * bizout[i].yBizo;
    }
    cout << bizout[0].xBizo << " Valor de X" << endl;
    cout << bizout[0].yBizo << " Valor de Y" << endl;
}


int main()
{
    AlgoritmoEstendidoEuclides(-24, 18);
    return 0;
}