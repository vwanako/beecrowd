#include <iostream>

int main()
{
    int x, z, sum = 0, i = 1;
    std::cin >> x;
    do
    {
        std::cin >> z;
    } while (z <= x);

    sum = x;
    while (sum < z)
    {
        x++;
        sum += x;
        i++;
    }

    std::cout << i << std::endl;

    return 0;
}
