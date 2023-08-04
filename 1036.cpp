#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double a, b, c, delta, r1, r2;
    std::cin >> a >> b >> c;

    // impossivel quando: a = 0, b² -4ac < 0

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0 || a == 0)
    {
        std::cout << "Impossivel calcular" << std::endl;
    }
    else
    {
        r1 = ((b * -1) + pow(delta, 0.5)) / (2 * a);
        r2 = ((b * -1) - pow(delta, 0.5)) / (2 * a);

        std::cout << "R1 = " << std::fixed << std::setprecision(5) << r1 << std::endl;
        std::cout << "R2 = " << std::fixed << std::setprecision(5) << r2 << std::endl;
    }

    return 0;
}
