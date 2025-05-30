#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float Notas;
    float Media = 0.0;
    
    int Contador = 1;

    while(Contador < 3)
    {
        cin >> Notas;

        if(Notas < 0.0 || Notas > 10.0)
        {
            cout << "nota invalida" << endl;
        }
        else
        {
            Media += Notas;
            Contador++;
        }
    }

    cout << "media = " << fixed << setprecision(2) << Media / 2 << endl; 

    return 0;
}