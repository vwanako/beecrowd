#include <iostream>

int main()
{
    double numeros[6];
    int j = 0;

    for (int i = 0; i < 6; i++)
    {
        std::cin >> numeros[i];
    }

    for (int i = 0; i < 6; i++)
    {
        if (numeros[i] > 0)
        {
            j++;
        }
    }

    std::cout << j << " valores positivos" << std::endl;

    return 0;
}
