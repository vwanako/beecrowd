#include <iostream>

int main()
{
    int a, n, sum = 0;
    std::cin >> a >> n;

    while (n <= 0)
    {
        std::cin >> n;
    }

    for (int i = 0; i < n; i++)
    {
        sum += a + i;
    }

    std::cout << sum << std::endl;

    return 0;
}
