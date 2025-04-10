#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int N;
    int Potencia = 2;
    int sum = 1;
    cin >> N;

    for(int i = 0; N > i; i++){
        sum = pow(Potencia, i);
        cout << sum << endl;
    }

    return 0;
}