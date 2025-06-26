#include <iostream>

using namespace std;

int PotenciaModular(int base, int expoente, int modulo) {
    int resultado = 1;
    base = base % modulo;  // Reduz a base inicial

    while (expoente > 0) {
        if (expoente % 2 == 1) {  // Expoente ímpar
            resultado = (resultado * base) % modulo;
        }
        // Expoente agora é par (ou era par desde o início)
        base = (base * base) % modulo;  // Quadratura da base
        expoente = expoente / 2;       // Reduz o expoente pela metade
    }

    return resultado;
}

int main()
{

    

}