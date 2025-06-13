#include <iostream>

using namespace std;

int main(){

    int Cartas[5];
    int TamanhoDoArrayCartas = sizeof(Cartas) / sizeof(Cartas[0]);
    int Crescente = 1;
    int Decrescente = 1;
    string Resultado = "N" ; 

    for(int i = 0; TamanhoDoArrayCartas > i; i++){
        cin >> Cartas[i];
    }


    for(int i = 1; TamanhoDoArrayCartas > i; i++)
    {
        if( Cartas[i-1] < Cartas[i] )
        {
            Crescente++;
        }
        else if ( Cartas[i-1] > Cartas[i] )
        {
            Decrescente++;
        }
    }

    if(Crescente == TamanhoDoArrayCartas)
    {
        Resultado = "C";
    }
    else if( Decrescente == TamanhoDoArrayCartas )
    {
        Resultado = "D";
    }
    
    cout << Resultado << endl;

    return 0;
}