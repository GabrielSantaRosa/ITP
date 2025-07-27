#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double soma = 1.00;

    double Numerador = 3.00;
    double Denominador = 2.00;

    while(Numerador != 39.00)
    {
        soma += (Numerador/Denominador);
        Numerador+=2.00;
        Denominador*=2.00;
    }
    
    cout << fixed << setprecision(2) << soma  << endl;
    return 0;
}