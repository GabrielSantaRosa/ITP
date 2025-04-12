#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int n1 = 1, n2 = 2, n3 = 3;
    int i = 0;

    while(n >= n3){
        int multiplicacao = n1 * n2 * n3;
        if(multiplicacao == n){
            cout << "This number is triangle" << endl;
            i++;
        }
        n1++;
        n2++;
        n3++;
    }
    if(i == 0){
        cout << "This number not is triangle" << endl;
    }

    return 0;
}