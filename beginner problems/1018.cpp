#include <iostream>

int main()
{
    int n, aux;
    std::cin >> n;
    aux = n;
    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};
    size_t qtd_cedulas = sizeof(cedulas);
    int quantidades[qtd_cedulas];

    for (unsigned int i = 0; i < qtd_cedulas; i++)
    {
        quantidades[i] = aux / cedulas[i];
        aux = aux % cedulas[i];
    }
    std::cout << n << std::endl;

    for (unsigned int i = 0; i < qtd_cedulas; i++)
    {
        std::cout << quantidades[i] << " nota(s) de R$ " << cedulas[i] << ",00" << std::endl;
    }

    return 0;
}
