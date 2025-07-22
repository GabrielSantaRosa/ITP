#include <iostream>

using namespace std;

int main()
{
    for(int i = 0; 8 > i; i++)
    {
        int n;
        cin >> n;
        
        if(n != 0) cout << "vai ter duas!" << endl;
        else cout << "vai ter copa!" << endl;
    }
    return 0;
}