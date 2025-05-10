#include <iostream>

using namespace std;

int main()
{

    int NumeroDeCasos; cin >> NumeroDeCasos;

    for(int i = 0; NumeroDeCasos > i ; i++)
    {
        int x, y; cin >> x >> y;
        int soma = 0;

        while(y > x + 1) 
        {
            if(x % 2 == 1 )
            {
                soma+=x; cout << " Controle ";
            } 
            x++;
            cout << soma << "valor da Soma" << endl;
        }

        cout << soma << " X" << endl;
    }

    return 0;
}