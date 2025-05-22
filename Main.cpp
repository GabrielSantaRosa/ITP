#include <iostream>
#include <string>
#include <cctype>

///#include <cstring>

using namespace std;

int main()
{

    string texto;
    getline(cin, texto);

    texto[0] = toupper(texto[0]);

    for(int i = 1; texto.length() > i; i++)
    {

        if(texto[i-1] == ' ')
        {
            texto[i] = toupper(texto[i]);
        }
    }


    cout << texto << endl;

    return 0;
}