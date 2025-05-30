#include <iostream>

using namespace std;

int main(){

    int QuantPessoasNoTerceiroSite;
    int contador = 2;
    int Total = 0;
    cin >> QuantPessoasNoTerceiroSite;

    while(contador >= 1)
    {
        Total += 2 * QuantPessoasNoTerceiroSite;
        contador--;
    }

    cout << Total << endl;

    return 0;
}