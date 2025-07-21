#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> Numeros;

    for(int i = 0; 20 > i; i++)
    {
        int n;
        cin >> n;
        Numeros.push_back(n);
    }
    int ix = 19;
    for(int i = 0; 20 > i; i++)
    {
        cout << "N[" << i << "] = " <<Numeros[ix] << endl;
        ix--;
    }
}