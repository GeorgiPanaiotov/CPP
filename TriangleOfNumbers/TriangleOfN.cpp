#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            if(j == i)
            {
                break;
            }
            std::cout << i;
        }
        std::cout << "\n";
    }

    return 0;
}