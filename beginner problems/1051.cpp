#include <iostream>
#include <iomanip>

int main()
{
    double salary;
    std::cin >> salary;

    double tax = 0.00;

    if (salary > 4500.00)
    {
        tax += (salary - 4500.00) * 0.28;
        salary = 4500.00;
    }
    if (salary > 3000.00)
    {
        tax += (salary - 3000.00) * 0.18;
        salary = 3000.00;
    }
    if (salary > 2000.00)
    {
        tax += (salary - 2000.00) * 0.08;
    }

    if (tax == 0.0)
    {
        std::cout << "Isento" << std::endl;
    }
    else
    {
        std::cout << "R$ " << std::fixed << std::setprecision(2) << tax << std::endl;
    }

    return 0;
}