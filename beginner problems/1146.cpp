#include <iostream>

int main()
{
    int x;
    do
    {
        std::cin >> x;
        for (int i = 1; i <= x; i++)
        {
            if (i == x)
                std::cout << i;
            else
                std::cout << i << ' ';
        }
        std::cout << std::endl;
    } while (x != 0);

    return 0;
}
