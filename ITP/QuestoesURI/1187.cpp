#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    char Acao; cin >> Acao;
    double s = 0.0;
    double m = 0.0;
    double Matriz[12][12];

    for(int i = 0; 12 > i; i++)
    {
        for(int j = 0; 12 > j; j++)
        {
            cin >> Matriz[i][j];
        }
    }

    for(int i = 0; 5 > i; i++)
    {
        for(int j = i + 1; 10 - i >= j; j++ )
        {
            s+=Matriz[i][j];
            m+=1.0;
        }
    }

    cout << fixed << setprecision(1);
    if(Acao == 'S') 
    {
        cout << s << endl;
    }
    else 
    {
        cout << s / m << endl;
    }

    return 0;
}