#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, sum;
        std::cin >> x;

        for (int j = 0, sum = 0; j < x; j++)
        {
            if (x % j == 0)
                sum += (x % i);
        }

        if (sum == x)
            std::cout << x << " eh perfeito" << std::endl;
        else
            std::cout << x << " nao eh perfeito" << std::endl;
    }
}
