#include <iostream>

using namespace std;

int main()
{

    int N; cin >> N; //Numero de amigos que vão participar do bolão;

    int TamanhoArray = N * 2; //Cada amigo vai ter 2 lugares no array
    int ArrayComValorApostaeCodjogador[TamanhoArray];

    for(int i = 0; TamanhoArray > i; i++ )
    {
        cin >> ArrayComValorApostaeCodjogador[i];
    }

    int CodJogadorVencedor; //Codigo do jogador vencedor
    cin >> CodJogadorVencedor;

    int TotalDasApostas; 
    for(int i = 0; TamanhoArray > i; i+=2)
    {
        TotalDasApostas = TotalDasApostas + ArrayComValorApostaeCodjogador[i];
    }  //laço que vai calcular o total de apostas, o i+=2 é para pega o valor resposdente a cada amigo;

    cout << "Total:RS " << TotalDasApostas << endl;

    int ValorGastoEmBebidas;
    ValorGastoEmBebidas = TotalDasApostas / 0.10;
    int RestoDepoisDasBebidas = TotalDasApostas - ValorGastoEmBebidas;
    cout << ValorGastoEmBebidas << endl;
    cout << RestoDepoisDasBebidas << endl;
    int ArrayQueControlaAsApostaVencedoras[N] = {0};
    int ControleDaposicaoDoAmigo = 0;
    for(int i = 1; TamanhoArray > i; i+=2)
    {
        if(ArrayComValorApostaeCodjogador[i] == CodJogadorVencedor)
        {
            ArrayQueControlaAsApostaVencedoras[ControleDaposicaoDoAmigo] = 1;
        }
        ControleDaposicaoDoAmigo++;
    }

    for(int i = 0; N > i; i++)
    {

    }


    return 0;
}