#include <iostream>

using namespace std;

int main(){
    
    int A,B;
    cin >> A >> B;

    bool Menor = (A >= B);
    int NumeroMagico;

    int i = 1;

    if(Menor){
        while(B >= i){
            if( (A % i == 0) && (B % i == 0) ){
                NumeroMagico = i;
            }
            i++;
        }
        A = A / NumeroMagico;
        B = B / NumeroMagico;
        cout << "A fracao irredutivel e " << A << "/" << B << endl;
    }
    else{
        while(A >= i){
            if( (A % i == 0) && (B % i == 0) ){
                NumeroMagico = i;
            }
            i++;
        }
        A = A / NumeroMagico;
        B = B / NumeroMagico;
        cout << "A fracao irredutivel e " << A << "/" << B << endl;
    }

}