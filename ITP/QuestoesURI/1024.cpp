#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string passo1(string palavra, int tamanho)
{
    for(int i = 0; tamanho > i; i++)
    {
        if( islower(palavra[i]) || isupper(palavra[i]) )
        {
            palavra[i]+=3;
        }
    }
    return palavra;
}

string passo2(string palavra, int tamanho)
{
    for(int i = 0; tamanho / 2 > i; i++)
    {
        char temp;
        temp = palavra[i];
        palavra[i] = palavra[tamanho-i - 1];
        palavra[tamanho-i - 1] = temp;
    }
    return palavra;
}

string passo3(string palavra, int tamanho)
{
    for(int i = tamanho / 2; tamanho > i; i++)
    {
        palavra[i]-=1;
    }
    return palavra;
}

int main()
{
    int qtd; cin >> qtd;
    cin.ignore();
    for(int i = 0; qtd > i; i++)
    {
        string palavra = ""; 
        getline(cin,palavra);
        int tam = palavra.length();
        palavra = passo1(palavra,tam);
        palavra = passo2(palavra, tam);
        palavra = passo3(palavra,tam);
        cout << palavra << endl;
    }

    return 0;
}