#include <iostream>
#include <iomanip>

int main()
{
    int num_func, horas;
    double valor_por_hora, salario;

    std::cin >> num_func;
    std::cin >> horas;
    std::cin >> valor_por_hora;

    std::cout << "NUMBER = " << num_func << std::endl;

    salario = valor_por_hora * horas;

    std::cout << "SALARY = U$" << std::fixed << std::setprecision(2) << salario << std::endl;

    return 0;
}