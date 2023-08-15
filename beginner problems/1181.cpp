#include <iostream>
#include <iomanip>

double soma(double m[12][12], int linha)
{
    double result = 0;
    for (int i = 0; i < 12; i++)
    {
        result += m[linha][i]; // Fix the index here
    }

    return result;
}

double media(double m[12][12], int linha)
{
    double result = 0;
    for (int i = 0; i < 12; i++)
    {
        result += m[linha][i]; // Fix the index here
    }

    return result / 12.0; // Divide by the number of elements
}

int main()
{
    double m[12][12];
    int linha;
    char operacao;

    std::cin >> linha;
    std::cin >> operacao;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            std::cin >> m[i][j];
        }
    }

    switch (operacao)
    {
    case 'S':
        std::cout << std::fixed << std::setprecision(1) << soma(m, linha) << std::endl;
        break;
    case 'M':
        std::cout << std::fixed << std::setprecision(1) << media(m, linha) << std::endl;
        break;
    }

    return 0;
}
