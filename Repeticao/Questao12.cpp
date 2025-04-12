#include <iostream>

using namespace std;

int main(){

    int PrimeiroNumero, SegundoNumero;
    int RestoDaDivisao = 1;
    int MDC;

    cin >> PrimeiroNumero >> SegundoNumero;

    bool Maior = (PrimeiroNumero >= SegundoNumero); 

    if (Maior)
    {
        while(RestoDaDivisao != 0)
        {
            RestoDaDivisao = PrimeiroNumero % SegundoNumero;
            PrimeiroNumero = SegundoNumero;
            SegundoNumero = RestoDaDivisao;     
        }
        MDC = PrimeiroNumero;
    }
    else
    {
        while(RestoDaDivisao != 0)
        {
            RestoDaDivisao = SegundoNumero % PrimeiroNumero;
            SegundoNumero = PrimeiroNumero;
            PrimeiroNumero = RestoDaDivisao;     
        }
        MDC = SegundoNumero;
    }
    cout << MDC << endl;

    return 0;
}