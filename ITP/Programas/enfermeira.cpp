#include <iostream>

using namespace std;

int main(){

    int HoraDormir, MinutoDormir;
    int HoraAcordar, MinutoAcordar;

    cin >> HoraDormir >> MinutoDormir;
    cin >> HoraAcordar >> MinutoAcordar;

    int TransformadorDormir = MinutoDormir + (HoraDormir * 60);
    int TransformadorAcordar = MinutoAcordar + (HoraAcordar * 60);

    int TotalDeSono = TransformadorAcordar - TransformadorDormir; //Valor dado em minutos

    cout << TotalDeSono << endl;

    return 0;
}