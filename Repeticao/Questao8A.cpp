#include <iostream>

using namespace std;

int main(){

    int N;

    cin >> N;

    int KN = N;

    for(int i = 1; KN >= i; i++){
        if(i == 1){
            for(int ix = 1; N >= ix; ix++){
                cout << "*";
            }
        }
        else{
            for(int ix = 1; N >= ix; ix++){
                if(ix == 1 || ix == N){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
        }
        N--;
        cout << endl;
    }

    return 0;
}