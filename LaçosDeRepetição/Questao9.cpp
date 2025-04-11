#include <iostream>

using namespace std;

int main(){

    int N;
    int num1 = 0;
    int num2 = 1;
    int num3 = 2;
    int soma;
    int i = 1;

    cin >> N;

    while(N >= num3){
        soma = num1 + num2 + num3;
        if(soma == N){
            cout << "Esse numero e perfeito" << endl;
           i--;
        }
        num1++;
        num2++;
        num3++;
    }
    if(i == 1){
        cout << "Esse numero nao e perfeito" << endl;
    }

    return 0;
}