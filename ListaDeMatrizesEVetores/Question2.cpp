#include <iostream>

using namespace std;

int main(){

    int N;
    cin >> N; 

    //Adicionei esse parametro a mais para deixar o exercicio 
    // mais dinamico

    int Vector[N];
    int SizeVector = sizeof(Vector) / sizeof(Vector[0]);
    int Menor;
    int posicion;

    for(int i = 0; SizeVector > i; i++ )
    {
        cin >> Vector[i];

        if(i == 0)
        {
            Menor = Vector[i];
            posicion = i;
        }

        if(Vector[i] < Menor)
        {
            Menor = Vector[i];
            posicion = i;
        }

    }

    cout << "A posicao do menor numero no vetor e " << posicion + 1 << endl;
    cout << "O numero nessa posicao is " << Vector[posicion] << endl; 

    return 0;
}