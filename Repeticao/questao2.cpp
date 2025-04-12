#include <iostream>

using namespace std;

int main(){

    int NumeroDeVezes;
    int I, J;
    int contador = 1;

    cin >> NumeroDeVezes;
    cin >> I >> J;

    bool condicao = false;

    while (condicao == false){

        if( (contador % I == 0) || (contador % J == 0 ) )
        {
            NumeroDeVezes--;
            cout << contador << endl;
        }

        if(NumeroDeVezes == 0)
        {
            condicao = true;
        }
        contador = contador + 1;
    }
    return 0;
}