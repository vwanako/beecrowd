#include <iostream>
#include <iomanip>

int main()
{
    double s = 1;

    for (double i = 3, j = 2; i <= 39; i += 2, j *= 2)
    {
        s += (i / j);
    }

    std::cout << std::fixed << std::setprecision(2) << s << std::endl;
    return 0;
}
