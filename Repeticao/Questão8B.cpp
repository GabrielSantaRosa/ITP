#include <iostream>

using namespace std;

int main(){

    int Numero;
    cin >> Numero;

    int NumeroAuxiliar = 1;

    while(Numero >= NumeroAuxiliar)
    {
        for(int i = 1; NumeroAuxiliar >= i; i++)
        {
            if(NumeroAuxiliar == 1 || NumeroAuxiliar == Numero ){
                cout << "*";
            }
            else{
                if( i == 1 || i == NumeroAuxiliar ){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
        }

        cout << endl;
        NumeroAuxiliar++;
    }

    return 0;
}