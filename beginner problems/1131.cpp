#include <iostream>

int read_and_count()
{
    int inter, gremio;
    std::cin >> inter >> gremio;

    int vitorias_inter, vitorias_gremio, empates;

    if (inter == gremio)
        empates++;
    else if (inter > gremio)
        vitorias_inter++;
    else
        vitorias_gremio++;
}

int main()
{
    int input, counter = 0;
    int inter, gremio;
    int vitorias_inter = 0, vitorias_gremio = 0, empates = 0;

    do
    {
        std::cin >> inter >> gremio;
        if (inter == gremio)
            empates++;
        else if (inter > gremio)
            vitorias_inter++;
        else
            vitorias_gremio++;

        counter++;

        std::cout << "Novo grenal (1-sim 2-nao)" << std::endl;
        std::cin >> input;

    } while (input != 2);

    std::cout << counter << " grenais\nInter:" << vitorias_inter << "\nGremio:" << vitorias_gremio << "\nEmpates:" << empates << std::endl;

    if (vitorias_inter == vitorias_gremio)
        std::cout << "Nao houve vencedor" << std::endl;
    else if (vitorias_inter > vitorias_gremio)
        std::cout << "Inter venceu mais" << std::endl;
    else
        std::cout << "Gremio venceu mais" << std::endl;

    return 0;
}
