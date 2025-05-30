#include <iostream>

int main()
{

    int X, Y; 

    std::cin >> X >> Y;

    int i = 1;

    while(Y >= i)
    {
        int QuebraLinha = 1;
        while(X > QuebraLinha)
        {
            std::cout << i << " ";
            i++; 
            QuebraLinha++;
        }
        std::cout << i;
        i++;
        std::cout << '\n';
    }
}