#include <iostream>

using namespace std;

int main(){

    int N;

    cin >> N;

    for(int i = 0; N > i; i++){
        if(i == 0){
            for(int ix = 0; N > ix; ix++){
                cout << "*";
            }
            cout << endl; 
        }
        
    }

    return 0;
}