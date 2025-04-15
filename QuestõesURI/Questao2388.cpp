#include <iostream>

using namespace std;

int main(){

    int X;
    int Horas, KmMedio, Distancia = 0;
    cin >> X;


    while(X > 0)
    {
        cin >> Horas >> KmMedio;
        Distancia += Horas * KmMedio;
        X--;
    }

    cout << Distancia << endl;

    return 0;
}