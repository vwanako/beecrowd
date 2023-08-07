#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, counter = 0;
        std::cin >> x;

        for (int j = 1; j <= x; j++)
        {
            if (x % j == 0)
                counter++;
        }

        if (counter == 2)
            std::cout << x << " eh primo" << std::endl;
        else
            std::cout << x << " nao eh primo" << std::endl;
    }

    return 0;
}
