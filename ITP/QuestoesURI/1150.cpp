#include <iostream>

using namespace std;

int main()
{
    int x,z; cin >> x >> z;
    while(x > z)
    {
        cin >> z;
    }
    int soma = x;
    int indice = 1;

    while(z >= soma)
    {
        x+=1;
        soma = soma + x;
        indice++;
    }
    cout << indice << endl;
    return 0;
}