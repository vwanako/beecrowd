#include <iostream>

int main()
{
    int numeros[5];
    int pares = 0, impares = 0, positivos = 0, negativos = 0;

    for (int i = 0; i < 5; i++)
    {
        std::cin >> numeros[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }

        if (numeros[i] > 0)
        {
            positivos++;
        }
        else if (numeros[i] < 0)
        {
            negativos++;
        }
    }

    std::cout << pares << " valor(es) par(es)" << std::endl;
    std::cout << impares << " valor(es) impar(es)" << std::endl;
    std::cout << positivos << " valor(es) positivo(s)" << std::endl;
    std::cout << negativos << " valor(es) negativo(s)" << std::endl;

    return 0;
}
