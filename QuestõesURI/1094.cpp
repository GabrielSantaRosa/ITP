#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int NumerosDeVezes;
    cin >> NumerosDeVezes;
    int TotalDeCobaias = 0, TotalDeCoelhos = 0, TotalDeRatos = 0, TotalDeSapos = 0;

    for(int i = 0; NumerosDeVezes > i; i++)
    {
        int N;
        char Animal;
        cin >> N >> Animal;

        if(Animal == 'C')
        {
            TotalDeCoelhos += N;
        }
        else if(Animal == 'R')
        {
            TotalDeRatos += N;
        }
        else
        {
            TotalDeSapos += N;
        }
    }

    TotalDeCobaias = TotalDeCoelhos + TotalDeRatos + TotalDeSapos;

    double PorcentagemCoelhos = TotalDeCoelhos * 100.0 / TotalDeCobaias ;
    double PorcentagemRatos = TotalDeRatos * 100.0 / TotalDeCobaias ;
    double PorcentagemSapos = TotalDeSapos * 100.0 / TotalDeCobaias ;


    cout << "Total: " << TotalDeCobaias << " cobaias" << endl;
    cout << "Total de coelhos: " << TotalDeCoelhos << endl;
    cout << "Total de ratos: " << TotalDeRatos << endl;
    cout << "Total de sapos: " << TotalDeSapos << endl;

    cout << setprecision(2) << fixed;
    cout << "Percentual de coelhos: " << PorcentagemCoelhos << " %" << endl;
    cout << "Percentual de ratos: " << PorcentagemRatos << " %" << endl;
    cout << "Percentual de sapos: " << PorcentagemSapos << " %" << endl;

    return 0;
}