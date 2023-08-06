#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (6 % i == 0)
            std::cout << i << std::endl;
    }

    return 0;
}
