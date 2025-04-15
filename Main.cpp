#include <iostream>

using namespace std;

int main(){

    int CurupiraPorcoes, BoitataPorceos, BotoPorceos, MapaPorceos, IaraPorceos;
    cin >> CurupiraPorcoes >> BoitataPorceos >> BotoPorceos >> MapaPorceos >> IaraPorceos;
    int Total = 225;
    Total += (300 * CurupiraPorcoes) + (1500 * BoitataPorceos) + (600 * BotoPorceos) + ( 1000 * MapaPorceos) + (150 * IaraPorceos);

    cout << Total << endl;

    return 0;
}