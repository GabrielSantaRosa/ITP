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
    string palavracifrada(cezar.Palavra.length(), ' ');
    int tamanhodapalavra = cezar.Palavra.length();
    for(int i = 0; tamanhodapalavra > i; i++)
    {
        int x;

        if(isupper(cezar.Palavra[i]))
        {
            x = (cezar.Palavra[i] - 'A' + cezar.Deslocamento) % 26;
            if(x < 0) x+=26;
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
    while(true)
    {
        cout << "1 - Iniciar || 99 - Sair" << endl;
        int x; cin >> x;    

        if(x == 1)
        {
            Cezar cezar;
            cout << "Digite uma palavra para se cifrada" << endl;
            cin.ignore();
            getline(cin, cezar.Palavra);
            cout << "Digite o descolamento" << endl;
            cin >> cezar.Deslocamento;
            Cifracezar(cezar);
            cout << endl;
        }
        if(x == 99)
        {
            break;
        }
    }

    return 0;
}