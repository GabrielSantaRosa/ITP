#include <iostream>

using namespace std;

long long PotenciaModular(long long base, long long expoente, long long modulo) {
    long long resultado = 1;
    base = base % modulo;  

    while (expoente > 0) {
        if (expoente % 2 == 1) { 
            resultado = (resultado * base) % modulo;
        }
        
        base = (base * base) % modulo;  
        expoente = expoente / 2;
    }

    return resultado;
}


int main()
{
    long long f = PotenciaModular(20, 65537, 63984317);
    long long g = PotenciaModular(f,28743137, 63984317);
    cout << f << endl;
    cout << g << endl;
}