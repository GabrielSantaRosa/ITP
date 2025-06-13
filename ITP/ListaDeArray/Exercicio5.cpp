#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int Array[n];
    int ArrayProvados9[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    for(int i = 0; n > i; i++)
    {
        cin >> Array[i];
    }
    
    for(int i = 0; n > i; i++)
    {
        int InserirValorNoArrayProva = Array[i];
        ArrayProvados9[InserirValorNoArrayProva-1]++;
    }

    for(int i = 0; 10 > i; i++)
    {
        if(ArrayProvados9[i] != 0)
        {
            cout << "Ao valor " << i + 1 << " Teve " << ArrayProvados9[i] << " Repeticao ";
            cout << endl;
        }
    }

    return 0;
}