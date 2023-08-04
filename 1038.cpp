#include <iostream>
#include <iomanip>

int main()
{
    double total;
    int codigo, quantidade;
    std::cin >> codigo >> quantidade;

    switch (codigo)
    {
    case 1:
        total = 4.0 * quantidade;
        break;
    case 2:
        total = 4.5 * quantidade;
        break;
    case 3:
        total = 5.0 * quantidade;
        break;
    case 4:
        total = 2.0 * quantidade;
        break;
    case 5:
        total = 1.5 * quantidade;
        break;
    }

    std::cout << "Total: R$ " << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}
