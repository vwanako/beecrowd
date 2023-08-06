#include <iostream>
#include <iomanip>

int main()
{
    double s = 0;
    for (double i = 1; i <= 100; i++)
    {
        s += (1 / i);
    }
    std::cout << std::fixed << std::setprecision(2) << s << std::endl;

    return 0;
}
