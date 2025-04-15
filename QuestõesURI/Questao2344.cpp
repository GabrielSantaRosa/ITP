#include <iostream>

using namespace std;

int main(){

    int nota;
    cin >> nota;

    if(nota == 0)
    {
        cout << "E" << endl;
    }
    else if (nota >= 1 && nota <= 35)
    {
        cout << "D" << endl;
    }

    else if (nota >= 36 && nota <= 60)
    {
        cout << "C" << endl;
    }
    else if (nota >= 61 && nota <= 85)
    {
        cout << "B" << endl;
    }
    else if (nota >= 86)
    {
        cout << "A" << endl;
    }

    return 0;
}