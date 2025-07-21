#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n; cin >> n;
    char Acao; cin >> Acao;
    float s = 0.0;
    float Matriz[12][12];

    for(int i = 0; 12 > i; i++)
    {
        for(int j = 0; 12 > j; j++)
        {
            cin >> Matriz[i][j];
        }
    }
    
    for(int i = 0; 12 > i; i++)
    {
        s += Matriz[i][n];
    }

    cout << fixed << setprecision(1);
    if(Acao == 'S')
    {
        cout << s << endl;
    }
    else
    {
        cout << s / 12 << endl;
    }

    return 0;
}