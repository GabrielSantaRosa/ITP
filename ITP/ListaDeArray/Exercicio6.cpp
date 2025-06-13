#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    
    int ArrayInteiros[n];

    for(int i = 0; n > i; i++)
    {
        cin >> ArrayInteiros[i];
    }

    int MenorIntervalorEntreNumeros = ( ArrayInteiros[0] - ArrayInteiros[1] );

    // for(int i = 2; (n - 1) > i; i++)
    // {
    //     for(int ix = (i + 1) ; n > ix; ix++)
    //     {

    //     }
    // }

    //Fiquei com Duvida, perguntar ao professor se a order dos elemento faz diferença, pois trocando a order da substração irei ter o aposto do resultado anterior


    return 0;
}