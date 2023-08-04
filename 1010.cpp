#include <iostream>
#include <iomanip>

int main()
{
    int codigo1, codigo2, numero1, numero2;
    double valor1, valor2, total;

    std::cin >> codigo1 >> numero1 >> valor1;
    std::cin >> codigo2 >> numero2 >> valor2;

    total = (valor1 * numero1) + (valor2 * numero2);

    std::cout << "VALOR A PAGAR: R$ " << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}