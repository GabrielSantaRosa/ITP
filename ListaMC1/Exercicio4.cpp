#include <iostream>

using namespace std;

int MDC(int x, int y)
{
    int resto;
    while(y != 0)
    {
        resto = x % y;
        x = y;
        y = resto;
    }
    return x;
}


int main()
{
    cout << MDC(50,10);
    cout << MDC(10,50);
    return 0;
}