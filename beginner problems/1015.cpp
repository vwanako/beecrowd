#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double x1, y1, x2, y2, distancia, a, b;
    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;

    a = pow((x2 - x1), 2);
    b = pow((y2 - y1), 2);

    distancia = pow((a + b), 0.5);

    std::cout << std::fixed << std::setprecision(4) << distancia << std::endl;

    return 0;
}
