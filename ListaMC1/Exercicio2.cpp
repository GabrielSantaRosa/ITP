#include <iostream>
#include <cctype>

using namespace std;

//O alfabeto tem 26 letras;

struct Cezar
{
    string Palavra;
    int Deslocamento;
};

void Cifracezar(const Cezar cezar)
{
    string palavracifrada;
    int tamanhodapalavra = cezar.Palavra.length();
    for(int i = 0; tamanhodapalavra > i; i++)
    {
        int x;
        //Vejo se a letra é maiscular, se for entrar na validação
        if(isupper(cezar.Palavra[i]))
        {
            x = (cezar.Palavra[i] - 'A' + cezar.Deslocamento) % 26;
            //Esse calculo é feito para o numero fica no intervalor de -25 a 25;
            //Em sumo pego o numero da letra corresponde na tabela ascii, substraio pela letra 'A' e acrescento o descolamento;
            if(x < 0) x+=26;
            //Vejo se o numero é positivo, se não for acrescento 26; 
            //Exemplo: x = -1 -> x+=26 -> 25
            //25 + 'A' = Z
            palavracifrada[i] = 'A' + x;

        }
        else if(islower(cezar.Palavra[i]))
        {
            x = (cezar.Palavra[i] - 'a' + cezar.Deslocamento) % 26;
            if(x < 0) x+= 26;
            palavracifrada[i] = 'a' + x;
        }
        else
        {
            palavracifrada[i] = cezar.Palavra[i];
        }
    }

    for(int i = 0; tamanhodapalavra > i; i++)
    {
        cout << palavracifrada[i];
    }
}

int main()
{

    Cezar cezar;
    cout << "Digite uma palavra para se cifrada" << endl;
    getline(cin, cezar.Palavra);
    cout << "Digite o descolamento" << endl;
    cin >> cezar.Deslocamento;
    Cifracezar(cezar);

    return 0;
}