#include <iostream>
#include <string>

using namespace std;

string DentroParaFora(string palavra)
{

    int tamanho = palavra.length();
    int m = tamanho / 2; 
    
    for(int i = 0; i < m/2; i++) {
        char temp = palavra[i];
        palavra[i] = palavra[m-1-i];
        palavra[m-1-i] = temp;
    }
    
    for(int i = m; i < m + (tamanho-m)/2; i++) {
        char temp = palavra[i];
        palavra[i] = palavra[tamanho-1-(i-m)];
        palavra[tamanho-1-(i-m)] = temp;
    }

    return palavra;
}   

int main()
{

    int n; cin >> n;
    cin.ignore();
    for(int i = 0; n > i; i++)
    {
        string palavra;
        getline(cin,palavra);
        palavra = DentroParaFora(palavra);
        cout << palavra << endl;
    }
    return 0;
}