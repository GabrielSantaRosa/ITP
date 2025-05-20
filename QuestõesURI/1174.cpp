#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n = 100;
    double Array[n];

    for(int i = 0; n > i; i++)
    {
        cin >> Array[i];
        if (10.0 >= Array[i]) 
            cout << "A[" << i << "] = " << fixed << setprecision(1) << Array[i] << endl;
    }

    return 0;
}