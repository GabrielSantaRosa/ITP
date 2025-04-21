#include <iostream>

int calcularMDC(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int main() {
    int N;
    std::cin >> N;

    for (int i = 0; i < N; i++) {
        int AmigoA, AmigoB;
        std::cin >> AmigoA >> AmigoB;
        
        int MDC = calcularMDC(AmigoA, AmigoB);
        std::cout << MDC << std::endl;
    }

    return 0;
}