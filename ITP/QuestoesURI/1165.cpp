#include <iostream>

using namespace std;

bool ehprimo(int x)
{
    int divisor = 0;
    for(int i = 1; x >= i; i++)
    {
        if(x % i == 0)
        {
            divisor++;
        }
        if(divisor > 2) return false;
    }
    return true;
}

int main()
{
    int x; cin >> x;
    for(int i = 0; x > i; i++)
    {
        int y; cin >> y;
        if(ehprimo(y)) cout << y << " eh primo" << "\n";
        else cout << y << " nao eh primo" << "\n";
    }
}