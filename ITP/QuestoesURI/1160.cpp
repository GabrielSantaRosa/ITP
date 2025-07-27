#include <iostream>
#include <cmath>
using namespace std;

int Anos(int A, int B, double CA, double CB)
{
    int anos = 0;
    while(B >= A)
    {
        int crecimentoA = floor((A * CA) / 100);
        A += crecimentoA;
        int crescimentoB = floor((B * CB) / 100);
        B += crescimentoB;
        anos = anos + 1;
        if(anos > 100) 
        {
            return anos;
        }
    }
    return anos;
}

int main()
{
    int x; cin >> x;
    for(int i = 0; x > i; i++)
    {
        int A,B; cin >> A >> B;
        double CA,CB; cin >> CA >> CB;
        int anos = Anos(A,B,CA,CB);
        if(anos > 100) cout << "Mais de 1 seculo." << endl;
        else cout << anos << " anos." << endl;
    }
    return 0;
}