#include <iostream>

int main()
{
    int n, x;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        if (x == 0)
        {
            std::cout << "NULL" << std::endl;
            continue;
        }

        if (x % 2 == 0)
        {
            if (x > 0)
                std::cout << "EVEN POSITIVE" << std::endl;
            else
                std::cout << "EVEN NEGATIVE" << std::endl;
        }
        else
        {
            if (x > 0)
                std::cout << "ODD POSITIVE" << std::endl;
            else
                std::cout << "ODD NEGATIVE" << std::endl;
        }
    }

    return 0;
}
