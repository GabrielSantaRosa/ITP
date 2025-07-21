#include <iostream>
#include <string> 
#include <algorithm>

using namespace std;

string RemoverZerosEsquerda(const string &numero) {
    int i = 0;
    while (i < numero.size() && numero[i] == '0') {
        i++;
    }
    
    if (i == numero.size()) {
        return "0";
    }
    
    return numero.substr(i);
}

string Verifica(string numero, char n)
{
    numero.erase(remove(numero.begin(), numero.end(), n), numero.end());
    numero = RemoverZerosEsquerda(numero);
    return numero;
}

int main()
{
    bool Ehtrue = true;

    while(Ehtrue)
    {
        char n1;
        string numero; 
        cin >> n1;
        cin >> numero;
        if(n1 == '0' && numero[0] == '0') 
        {
            return 0;
        }
        numero = Verifica(numero,n1);
        cout << numero << endl;
    }

    return 0;
}