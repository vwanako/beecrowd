#include <iostream>
#include <iomanip>

int main()
{
    double n;
    std::cin >> n;
    // divide o input em cedulas e nos centavos
    int reais = static_cast<int>(n);
    int centavos = (n - reais) * 100;

    int notas[] = {100, 50, 20, 10, 5, 2};
    int moedas[] = {100, 50, 25, 10, 5, 1};
    int quantidades[12];

    for (int i = 0; i < 6; i++)
    {
        quantidades[i] = reais / notas[i];
        reais = reais % notas[i];
    }

    // adiciona o resto dos reais aos centavos
    centavos += (reais * 100);

    for (int i = 6, j = 0; i < 12; i++, j++)
    {
        quantidades[i] = centavos / moedas[j];
        centavos = centavos % moedas[j];
    }

    std::cout << "NOTAS:" << std::endl;
    for (int i = 0; i < 6; i++)
    {
        std::cout << quantidades[i] << " nota(s) de R$ " << notas[i] << ".00" << std::endl;
    }

    double moedasprint[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    std::cout << "MOEDAS:" << std::endl;
    for (int i = 6, j = 0; i < 12; i++, j++)
    {
        std::cout << quantidades[i] << " moeda(s) de R$ " << std::fixed << std::setprecision(2) << moedasprint[j] << std::endl;
    }

    return 0;
}
