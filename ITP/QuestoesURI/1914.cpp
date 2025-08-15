#include <iostream>

struct jogador
{
    std::string name;
    std::string signal;
    int number;
    jogador(std::string name, std::string signal, int number)
    {
        this->name = name;
        this->signal = signal;
        this->number = number;
    }
};

std::string Ganhou(const jogador j1, const jogador j2)
{
    int total = j1.number + j2.number;
    total = total % 2;
    if(total == 0)
    {
        if(j1.signal == "PAR")
        {
            return j1.name;
        }
        else
        {
            return j2.name;
        }
    }
    else
    {
        if(j1.signal == "IMPAR")
        {
            return j1.name;
        }
        else
        {
            return j2.name;
        }
    }
}

int main()
{   
    int qtd;
    std::cin >> qtd;

    for(int i = 0; qtd > i; i++)
    {
        std::string name1, sinal1, name2, sinal2;
        int numero1, numero2;
        std::cin >> name1 >> sinal1;
        std::cin >> name2 >> sinal2;
        std::cin >> numero1 >> numero2;
        jogador j1{name1,sinal1,numero1};
        jogador j2{name2,sinal2,numero2};

        std::cout << Ganhou( j1, j2) << std::endl;
    }

    return 0;
}