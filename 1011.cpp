#include <iostream>
#include <iomanip>

int main()
{
    double raio, volume, pi = 3.14159;
    std::cin >> raio;

    volume = (4 * pi * (raio * raio * raio)) / 3;

    std::cout << "VOLUME = " << std::fixed << std::setprecision(3) << volume << std::endl;

    return 0;
}
