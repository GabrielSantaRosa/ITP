#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double valor;
    int parteinteira;
    int partedecimal;

    cin >> valor;

    parteinteira = valor / 1;

    partedecimal = 100 * (valor - parteinteira);

    cout << parteinteira << endl;

    cout << partedecimal << fixed << setprecision(2) << endl;


    return 0;
}