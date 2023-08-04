#include <iostream>
#include <string>
#include <iomanip>

struct aumento
{
    double indice_aumento;
    double salario_novo;
};

aumento calcular_aumento(double salario, double porcent)
{
    aumento aumentof;

    aumentof.indice_aumento = salario * porcent;
    aumentof.salario_novo = salario + aumentof.indice_aumento;

    return aumentof;
}

int main()
{
    double salario;
    std::cin >> salario;

    std::string indice;
    aumento aumento_func;

    if (salario <= 400)
    {
        indice = "15 %";
        aumento_func = calcular_aumento(salario, 0.15);
    }
    else if (salario <= 800)
    {
        indice = "12 %";
        aumento_func = calcular_aumento(salario, 0.12);
    }
    else if (salario <= 1200)
    {
        indice = "10 %";
        aumento_func = calcular_aumento(salario, 0.10);
    }
    else if (salario <= 2000)
    {
        indice = "7 %";
        aumento_func = calcular_aumento(salario, 0.07);
    }
    else
    {
        indice = "4 %";
        aumento_func = calcular_aumento(salario, 0.04);
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Novo salario: " << aumento_func.salario_novo << "\nReajuste ganho: " << aumento_func.indice_aumento << "\nEm percentual: " << indice << std::endl;

    return 0;
}
