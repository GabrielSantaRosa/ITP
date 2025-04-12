#include <iostream>

using namespace std;

int main(){

    int NumeroDeNumeros;
    int NumeroDigitado;
    int Total = 0;
    int Contador = 0;

    cin >> NumeroDeNumeros;

    while(NumeroDeNumeros > Contador){
        cin >> NumeroDigitado;
        Total = Total + NumeroDigitado;
        Contador++;
    }
    float MediaDosNumeros = 1.0 * Total / NumeroDeNumeros; // A divisão entre dois numeros inteiros no c++, resolta em um valor inteiro

    cout << "A media " << MediaDosNumeros << endl;

    return 0;
}