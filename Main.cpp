#include <iostream>

using namespace std;

int main()
{

    bool Repete = true;
    int contador = 0;
    int VitoriasInter = 0, VitoriasGremio = 0, Empates = 0;
    while(Repete)
    {
        int GolInter, GolGremio;
        int SimOuNao;
        contador +=1;

        cin >> GolInter >> GolGremio;

        if(GolInter > GolGremio) VitoriasInter+=1;
        else if(GolInter < GolGremio) VitoriasGremio+=1;
        else Empates+=1;

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> SimOuNao;
        if(SimOuNao == 2) Repete = false;
    }

    cout << contador << " grenais" << endl;
    cout << "Inter:" << VitoriasInter << endl;
    cout << "Gremio:" << VitoriasGremio << endl;
    cout << "Empates:" << Empates << endl;

    if(VitoriasInter > VitoriasGremio) cout << "Inter venceu mais" << endl;
    else if(VitoriasInter < VitoriasGremio) cout << "Inter venceu mais" << endl;
    else cout << "Nao houve vencedor" << endl;

    return 0;
}