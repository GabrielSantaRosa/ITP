#include <iostream>

using namespace std;

int main()
{

    int n, m;  
    
    cin >> n >> m;

    int ArrayA[n], ArrayB[m];

    for(int i = 0; n > i; i++)
    {
        cin >> ArrayA[i];
    }

    for(int i = 0; m > i; i++)
    {
        cin >> ArrayB[i];
    }

    int PosicaoA = 0;
    int PosicaoB = 0;

    for(int i = 0; n + m > i ; i++)
    {
        if(PosicaoA == n || PosicaoB == m ){
            if(PosicaoA == n)
            {
                for(int i = PosicaoB; m > i; i++)
                {
                    cout << ArrayB[i] << " ";
                }
                break;
            }
            else
            {
                for(int i = PosicaoA; n > i; i++)
                {
                    cout << ArrayA[i] << " ";
                }
                break;
            }
        }

        else
        {
            if(ArrayA[PosicaoA] > ArrayB[PosicaoB] )
            {
                cout << ArrayB[PosicaoB] << " ";
                PosicaoB++;
            }
            else if(ArrayB[PosicaoB] > ArrayA[PosicaoA] )
            {
                cout << ArrayA[PosicaoA] << " ";
                PosicaoA++;
            }
            else
            {
                cout << ArrayA[PosicaoA] << " ";
                cout << ArrayB[PosicaoB] << " ";
                PosicaoA++;
                PosicaoB++;
            }   
        }
    }

    return 0;
}