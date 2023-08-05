#include <iostream>
#include <iomanip>

bool check_valid(const double &nota)
{
    if (nota >= 0.0 && nota <= 10.0)
        return true;
    else
        return false;
}

void read_and_calculate()
{
    double n1, n2, media;
    std::cin >> n1;

    while (!check_valid(n1))
    {
        std::cout << "nota invalida" << std::endl;
        std::cin >> n1;
    }

    std::cin >> n2;

    while (!check_valid(n2))
    {
        std::cout << "nota invalida" << std::endl;
        std::cin >> n2;
    }

    media = (n1 + n2) / 2;
    std::cout << "media = " << media << std::endl;
}

int main()
{
    int input;

    do
    {
        read_and_calculate();
        do
        {
            std::cout << "novo calculo (1-sim 2-nao)" << std::endl;
            std::cin >> input;
        } while (input < 1 || input > 2);

    } while (input != 2);

    return 0;
}
