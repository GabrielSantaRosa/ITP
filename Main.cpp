#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int Coluna = n;
    int Linha = n;
    int Lapis [Linha][Coluna];

    for(int iLinha = 0; Linha > iLinha; iLinha++ )
    {
        for(int iColuna = 0; Coluna > iColuna; iColuna++)
        {
            cin >> Lapis [iLinha][iColuna];
        }
    }

    int dist;

    for(int iLinha = 0; Linha > iLinha; iLinha++ )
    {
        dist = 0;
        for(int iColuna = 0; Coluna > iColuna; iColuna++)
        {
           if( Lapis [iLinha] [iColuna] == 0 )
           {
                cout << dist;
           }
        }

        cout << endl;
    }


    return 0;
}