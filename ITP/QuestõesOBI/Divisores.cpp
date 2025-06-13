#include <iostream>

using namespace std;

int main(){

    int Numero;
    
    int QuantidadeDeDivisores = 0;

    cin >> Numero;

    for(int i = 1; Numero >= i; i++)
    {
        if(Numero % i == 0)
        {
            QuantidadeDeDivisores++;
        }
    }

    cout << QuantidadeDeDivisores << endl;

    return 0;
}