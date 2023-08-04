#include <iostream>
#include <iomanip>

bool formaTriangulo(double lado1, double lado2, double lado3)
{
    return (lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1);
}

int main()
{
    double a, b, c, area, perimetro;
    std::cin >> a >> b >> c;

    if (!formaTriangulo(a, b, c))
    {
        area = ((a + b) * c) / 2;
        std::cout << "Area = " << std::fixed << std::setprecision(1) << area << std::endl;
    }
    else
    {
        perimetro = a + b + c;
        std::cout << "Perimetro = " << std::fixed << std::setprecision(1) << perimetro << std::endl;
    }

    return 0;
}
