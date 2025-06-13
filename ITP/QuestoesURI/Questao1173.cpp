#include <iostream>

using namespace std;

int main(){

    int Valor; 

    cin >> Valor;

    int Array[10];
    Array[0] = Valor;

    for(int i = 1; 10 > i; i++)
    {
        Array[i] = Array[i-1] * 2;
    }

    for(int i = 0; 10 > i; i++)
    {
        cout <<"N[" <<i<<"] = " << Array[i] << endl;
    }


    return 0;
}