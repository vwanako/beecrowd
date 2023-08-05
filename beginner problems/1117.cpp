#include <iostream>
#include <iomanip>

bool check_valid(const double &nota)
{
    if (nota >= 0.0 && nota <= 10.0)
        return true;
    else
        return false;
}

int main()
{
    double n1, n2, media;
    std::cin >> n1 >> n2;

    while (!check_valid(n1) || !check_valid(n2))
    {
        std::cout << "nota invalida" << std::endl;
        std::cin >> n1 >> n2;
    }

    media = (n1 + n2) / 2;
    std::cout << "media = " << std::fixed << std::setprecision(2) << media << std::endl;

    return 0;
}
