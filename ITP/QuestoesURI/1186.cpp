#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char Acao; cin >> Acao;
    float s = 0.0;
    float m = 0.0;
    float Matriz[12][12];

    for(int i = 0; 12 > i; i++)
    {
        for(int j = 0; 12 > j; j++)
        {
            cin >> Matriz[i][j];
        }
    }

    for(int i = 1; 12 > i; i++)
    {
        int j = i;
        while(j>=1)
        {
            s+=Matriz[i][12-j];
            m+=1.0;
            j--;
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