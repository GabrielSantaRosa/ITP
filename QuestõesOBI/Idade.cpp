#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int IdadeDaMae;
    int IdadeFilho1;
    int IdadeFilho2;
    int IdadeFilho3;

    cin >> IdadeDaMae >> IdadeFilho1 >> IdadeFilho2;

    IdadeFilho3 = IdadeDaMae - IdadeFilho1 - IdadeFilho2;

    if(IdadeFilho3 > IdadeFilho2 && IdadeFilho3 > IdadeFilho1)
    {
        cout << IdadeFilho3;
    }
    else if( IdadeFilho1 > IdadeFilho2 && IdadeFilho1 > IdadeFilho3)
    {
        cout << IdadeFilho1;
    }
    else
    {
        cout << IdadeFilho2;
    }

    return 0;
}