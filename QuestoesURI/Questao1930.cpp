#include <iostream>

using namespace std;

int main(){

    int Tomada1, Tomada2, Tomada3, Tomada4;
    int TomadaDoQuarto = 1;
    int TotalDeTomadas;

    cin >> Tomada1 >> Tomada2 >> Tomada3 >> Tomada4;

    TotalDeTomadas = (Tomada1 - TomadaDoQuarto) + (Tomada2 - 1) + (Tomada3 - 1) + Tomada4;
    
    cout << TotalDeTomadas << endl;

    return 0;
}