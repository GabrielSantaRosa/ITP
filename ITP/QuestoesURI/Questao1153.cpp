#include <iostream>

using namespace std;

int main(){

    int N, Total = 1;

    cin >> N;

    while(N > 0)
    {
        Total = Total * N;
        N--;
    }

    cout << Total << endl;

    return 0;
}