#include <iostream>

int main()
{
    int inicio, fim, duracao;
    std::cin >> inicio >> fim;

    if (inicio < fim)
    {
        duracao = fim - inicio;
    }
    else
    {
        duracao = 24 - (inicio - fim);
    }

    std::cout << "O JOGO DUROU " << duracao << " HORA(S)" << std::endl;

    return 0;
}