#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int array[n];

    for(int i = 0; n > i; i++)
    {
        cin >> array[i];
    }

    for(int i = 0; n > i; i++)
    {
        bool controle = true;
        for(int ix = 0 ; n > ix; ix++ )
        {
            if(array[i] == array[ix] && i != ix )
            {
                controle = false;
            }
        }

        if(controle == true)
        {
            cout << array[i] << " ";
        }
    }
    return 0;
}