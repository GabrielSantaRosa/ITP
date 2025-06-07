#include <iostream>
#include <string>

using namespace std;

int mdc(int x, int y)
{
    int temp;
    while (y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}


int main()
{

    cout << mdc(40 , 50) << endl;

    return 0;
}