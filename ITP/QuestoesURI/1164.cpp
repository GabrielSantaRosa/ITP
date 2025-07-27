#include <iostream>

bool EhPerfeito(int n)
{
    int qtd = n / 2;
    int soma = 0;
    bool EhPerfeito = false;
    for(int i = 1; qtd >= i; i++)
    {
        soma +=i;
        if(n == soma)
        {
            EhPerfeito = true;
            break;
        }
    }
    return EhPerfeito;
}

int main()
{
    int qtd; std::cin >> qtd;

    for(int i = 0; qtd > i; i++)
    {
        int numero; std::cin >> numero;
        if(EhPerfeito(numero)) std::cout << numero << " eh perfeito";
        if(!EhPerfeito(numero)) std::cout << numero << " nao eh perfeito";
        std::cout << std::endl;
    }
    return 0;
}