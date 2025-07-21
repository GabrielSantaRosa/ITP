#include <iostream>
#include <string>

using namespace std;

string Dancante(string palavra)
{
    int c = 1;
    for(int i = 0; palavra.length() > i; i++)
    {
        if(isalpha(palavra[i]))
        {
            if(c % 2 == 0) 
            {
                palavra[i] = tolower(palavra[i]);
            }
            else
            {
                palavra[i] = toupper(palavra[i]);
            }
            c+=1;
        }   
    }
    return palavra;
}

int main()
{
    for(int i = 0; ; i++)
    {
        string palavra;
        getline(cin,palavra);
        if(palavra.empty()) break;
        palavra = Dancante(palavra);
        cout << palavra << endl;
    }

    return 0;
}