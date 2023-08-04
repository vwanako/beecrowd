#include <iostream>
#include <iomanip>

int main()
{
    double a, b, c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    double a_triang, a_circ, a_trap, a_quad, a_retang;

    a_triang = (a * c) / 2;
    a_circ = 3.14159 * (c * c);
    a_trap = ((a + b) * c) / 2;
    a_quad = b * b;
    a_retang = a * b;

    std::cout << "TRIANGULO: " << std::fixed << std::setprecision(3) << a_triang << std::endl;
    std::cout << "CIRCULO: " << std::fixed << std::setprecision(3) << a_circ << std::endl;
    std::cout << "TRAPEZIO: " << std::fixed << std::setprecision(3) << a_trap << std::endl;
    std::cout << "QUADRADO: " << std::fixed << std::setprecision(3) << a_quad << std::endl;
    std::cout << "RETANGULO: " << std::fixed << std::setprecision(3) << a_retang << std::endl;

    return 0;
}
