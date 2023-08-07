#include <iostream>

int main()
{
    int t, n[1000];
    std::cin >> t;

    // for (int i = 0; i < 1000; i++)
    // {
    //     for (int j = 0; j <= t; j++)
    //     {
    //         n[i] = j;
    //         i++;
    //         std::cout << "N[" << i << "] = " << n[i] << std::endl;
    //     }
    // }

    for (int j = 0; j <= t; j++)
    {
        for (int i = 0; i < 1000; i++)
        {
            n[i] = j;
            std::cout << "N[" << i << "] = " << n[i] << std::endl;
        }
    }

    return 0;
}
