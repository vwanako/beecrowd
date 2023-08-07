#include <iostream>

int main()
{
    int n, menor, posicao;
    std::cin >> n;

    int x[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> x[i];

        if (i == 0)
        {
            menor = x[i];
            posicao = 0;
            continue;
        }
        if (x[i] < menor)
        {
            menor = x[i];
            posicao = i;
        }
    }

    std::cout << "Menor valor: " << menor << std::endl;
    std::cout << "Posicao: " << posicao << std::endl;

    return 0;
}
