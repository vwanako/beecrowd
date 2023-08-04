#include <iostream>
#include <iomanip>

int main()
{
    int x;
    double y, consumo;
    std::cin >> x;
    std::cin >> y;

    consumo = x / y;

    std::cout << std::fixed << std::setprecision(3) << consumo << " km/l" << std::endl;

    return 0;
}