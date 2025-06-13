#include <iostream>
#include <string>

using namespace std;

enum Mes{
    Janeiro, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro
};

struct Pessoa
{
    string nome;
    int idade;
    float altura;
    Mes MesdeNascimento;
};

struct Grupo
{
    Pessoa pessoas[4];
    int qtd;
};

string MesParaString(Mes mes)
{
    switch (mes) {
        case 0:   return "Janeiro";
        case 1: return "Fevereiro";
        case 2:     return "Marco";
        case 3:     return "Abril";
        case 4:      return "Maio";
        case 5:     return "Junho";
        case 6:     return "Julho";
        case 7:    return "Agosto";
        case 8:  return "Setembro";
        case 9:  return "Outubro";
        case 10:  return "Novembro";
        case 11:  return "Dezembro";
        default:        return "Mês inválido";
    }
}

void ExibePessoa(Pessoa p)
{
    cout << "==== " << p.nome << " ====" << endl;
    cout << p.idade << endl;
    cout << p.altura << endl;
    cout << MesParaString(p.MesdeNascimento) << endl;
    cout << "=========================" << endl;
}

void ExibeGrupo(Grupo g)
{
    for(int i = 0; g.qtd > i; i++)
    {
        ExibePessoa(g.pessoas[i]);
    }
}

int main()
{
    Grupo meuGrupo;

    meuGrupo.qtd = 3;

    meuGrupo.pessoas[0] = {"Gabriel", 20, 1.78f, Janeiro};
    meuGrupo.pessoas[1] = {"Maria", 25, 1.65f, Marco};
    meuGrupo.pessoas[2] = {"Carlos", 30, 1.82f, Abril};
    ExibeGrupo(meuGrupo);

    return 0;
}