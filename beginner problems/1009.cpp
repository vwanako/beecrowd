#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    std::string nome;
    double salario_fixo, montante_vendas, total;

    std::cin >> nome;
    std::cin >> salario_fixo;
    std::cin >> montante_vendas;

    total = salario_fixo + (0.15 * montante_vendas);

    std::cout << "TOTAL = R$ " << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}