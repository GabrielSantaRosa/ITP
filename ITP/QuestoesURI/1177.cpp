#include <iostream>

using namespace std;

int main()
{
    int Number; cin >> Number;
    int array[1000];
    int contrador = 0;
    for(int i = 0; 1000 > i; i++)
    {
        if(contrador == Number) contrador = 0;
        array[i] = contrador;
        contrador++;
    }
    for(int i = 0; 1000 > i; i++)
    {
        cout << "N[" << i <<"] = "<< array[i] << endl;
    }
    return 0;
}