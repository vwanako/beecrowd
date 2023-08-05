#include <iostream>

int main()
{
    int numeros[5];
    int j = 0;

    for (int i = 0; i < 5; i++)
    {
        std::cin >> numeros[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            j++;
        }
    }

    std::cout << j << " valores pares" << std::endl;

    return 0;
}
