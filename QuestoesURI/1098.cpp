#include <iostream>

using namespace std;

int main()
{
    float I = 0;
    float J = 1;
    int contador = 0;
    while(I <= 2.1)
    {
        contador = 0;
        while(contador < 3)
        {
            cout << "I=" << I << " J=" << J << endl;
            J++;
            contador++;
        }
        J = 1;
        I = I + 0.2;
        J += I;
    }

    return 0;
}