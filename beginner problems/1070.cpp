#include <iostream>

int main()
{
    int x;
    std::cin >> x;

    if (x % 2 == 0)
    {
        x++;
    }

    for (int i = 0; i < 6; i++)
    {
        std::cout << x + 2 * i << std::endl;
    }

    return 0;
}
