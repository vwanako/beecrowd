#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
            std::cout << i << "^2 = " << i * i << std::endl;
    }

    return 0;
}
