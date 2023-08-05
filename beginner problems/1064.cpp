#include <iostream>
#include <iomanip>

int main()
{
    double numeros[6];
    double j = 0, soma = 0, media;

    for (int i = 0; i < 6; i++)
    {
        std::cin >> numeros[i];
    }

    for (int i = 0; i < 6; i++)
    {
        if (numeros[i] > 0)
        {
            j++;
            soma += numeros[i];
        }
    }

    media = soma / j;

    std::cout << j << " valores positivos" << std::endl;
    std::cout << std::fixed << std::setprecision(1) << media << std::endl;

    return 0;
}
