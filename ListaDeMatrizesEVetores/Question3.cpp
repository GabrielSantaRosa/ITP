#include <iostream>

using namespace std;

int main(){

    //Não testei...

    int Tamanho = 10;
    int VectorA[Tamanho];
    int VectorB[Tamanho];
    int VectorResultado[Tamanho];
    string Resultado = "O Resultado foi possivel a partir da multiplicao a seguir ";

    for(int ContadorDoVectorA = 0; Tamanho > ContadorDoVectorA; ContadorDoVectorA++)
    {
        cin >> VectorA[ContadorDoVectorA];
    }
    for(int ContadorVectorB = 0; Tamanho > ContadorVectorB; ContadorVectorB++)
    {
        cin >> VectorB[ContadorVectorB];
    }

    for(int ContadorVectorResultado = 0; Tamanho > ContadorVectorResultado; ContadorVectorResultado++)
    {
        VectorResultado[ContadorVectorResultado] = VectorA[ContadorVectorResultado] * VectorB[ContadorVectorResultado];
        cout << Resultado;
        cout << VectorA[ContadorVectorResultado] << " * " << VectorB[ContadorVectorResultado];
        cout << " isso e " << VectorResultado[ContadorVectorResultado];
        cout << endl;
    }

    return 0;
}