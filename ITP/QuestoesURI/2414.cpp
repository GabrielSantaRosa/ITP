#include <iostream>

using namespace std;

int main()
{
    bool Parou = false;
    int maior = 0;
    while(!Parou)
    {
        int n; cin >> n;
        if(n == 0) 
        {
            cout << maior << endl;
            break;
        }
        if(n > maior)
        {
            maior = n;
        }
    }
    return 0;
}