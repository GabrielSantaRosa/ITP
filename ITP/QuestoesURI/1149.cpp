#include <iostream>

using namespace std;

int main()
{
    int A; cin >> A;
    int N = -1;
    while(N <= 1)
    {
        cin >> N;
    }
    int s = A;
    for(int i = 1; N > i; i++)
    {
        s+=A+i;
    }
    cout << s << endl;
    return 0;
}