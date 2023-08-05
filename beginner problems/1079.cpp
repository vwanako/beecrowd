#include <iostream>
#include <iomanip>

int main()
{
    int n;
    std::cin >> n;

    double x, y, z, sum, average;

    for (int i = 0; i < n; i++)
    {
        std::cin >> x >> y >> z;
        sum = x * 2 + y * 3 + z * 5;
        average = sum / 10;

        std::cout << std::fixed << std::setprecision(1) << average << std::endl;
    }

    return 0;
}
