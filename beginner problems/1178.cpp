#include <iostream>
#include <iomanip>

int main()
{
    int x, n[100];
    std::cin >> x;

    n[0] = x;
    std::cout << "N[0] = " << std::fixed << std::setprecision(4) << x << std::endl;

    for (int i = 1; i < 100; i++)
    {
        n[i] = n[i - 1] / 2;
        std::cout << "N[" << i << "] = " << std::fixed << std::setprecision(4) << n[i] << std::endl;
    }

    return 0;
}
