#include <iostream>
#include <iomanip>

int main()
{
    int n, x, y;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> x >> y;
        if (y == 0)
        {
            std::cout << "divisao impossivel" << std::endl;
            continue;
        }

        std::cout << std::fixed << std::setprecision(1) << double(x) / y << std::endl;
    }

    return 0;
}
