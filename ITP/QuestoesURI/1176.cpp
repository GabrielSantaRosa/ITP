#include <iostream>
#include <vector>

using namespace std;

long long NumberTheSequencia(int position) {
    if (position == 0) return 0;
    if (position == 1) return 1;

    vector<long long> Array(position + 1);
    Array[0] = 0;
    Array[1] = 1;

    for (long long i = 2; i <= position; i++) {
        Array[i] = Array[i - 1] + Array[i - 2];
    }

    return Array[position];
}

int main() {
    long long qtd; 
    cin >> qtd;
    while (qtd > 0) {
        int n; 
        cin >> n;
        cout << "Fib(" << n << ") = " << NumberTheSequencia(n) << endl;
        qtd--;
    }
    return 0;
}