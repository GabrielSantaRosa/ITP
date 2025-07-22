#include <iostream>
#include <string>

///Não finalizado

using namespace std;

void Matriz123(int tamanho)
{
    string palavra = "";
    for(int i = 0; tamanho > i; i++)
    {
        if(i == 0) palavra+='1';
        else if(i == tamanho - 1) palavra+='2';
        else palavra+='3';
    }
    for(int i = 0; tamanho > i; i++)
    {
        for(int ix = 0; tamanho > ix; ix++)
        {
            palavra[ix];
        }
    }
}

int main()
{
    int n1,n2; cin >> n1 >> n2;
    Matriz123(n1);
    Matriz123(n2);

    return 0;
}