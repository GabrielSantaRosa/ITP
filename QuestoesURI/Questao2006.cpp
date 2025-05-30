#include <iostream>

using namespace std;

int main(){

    int CodCha;
    int QuantCompetidores = 5;
    int QuantAcertos = 0;

    cin >> CodCha;

    for(int i = 1; QuantCompetidores >= i; i++)
    {
        int voto;
        cin >> voto;

        if(voto == CodCha)
        {
            QuantAcertos++;
        }
        
    }
    cout << QuantAcertos << endl;

    return 0;
}