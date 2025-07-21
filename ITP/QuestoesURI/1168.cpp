#include <iostream>
#include <string>

using namespace std;

int Numero(string palavra)
{
    int qtd = 0;
    for(int i = 0; palavra.length() > i; i++)
    {
        switch (palavra[i])
        {
        case '1':
            qtd+=2;
            break;
        case '2':
            qtd+=5;
            break;
        case '3':
            qtd +=5;
            break;
        case '4':
            qtd +=4;
            break;
        case '5':
            qtd +=5;
            break;
        case '6':
            qtd +=6;
            break;
        case '7':
            qtd+=3;
            break;
        case '8':
            qtd+=7;
            break;
        case '9':
            qtd+=6;
            break;
        default:
            qtd+=6;
            break;
        }
    }
    return qtd;
}
 
int main()
{
    int n1; cin >> n1;
    int i = 0;
    while(n1 > i)
    {
        string n;
        cin >> n;
        cout << Numero(n) << " leds"<< endl;
        i++;
    }
    return 0;
}