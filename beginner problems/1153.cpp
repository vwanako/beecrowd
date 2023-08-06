#include <iostream>

int main()
{
    int n, factorial = 1;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        factorial *= (n - i);
    }

    std::cout << factorial << std::endl;
    return 0;
}
