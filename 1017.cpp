#include <iostream>
#include <iomanip>

int main()
{
    int horas, velocidade;
    double litros, distancia;
    std::cin >> horas;
    std::cin >> velocidade;

    distancia = velocidade * horas;

    litros = distancia / 12;

    std::cout << std::fixed << std::setprecision(3) << litros << std::endl;

    return 0;
}
