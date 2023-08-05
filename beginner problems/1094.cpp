#include <iostream>
#include <iomanip>

int main()
{
    char type;
    int n, amount;
    std::cin >> n;

    double total_coelhos = 0, total_ratos = 0, total_sapos = 0, soma_total = 0;

    for (int i = 0; i < n; i++)
    {
        std::cin >> amount >> type;

        switch (type)
        {
        case 'C':
            total_coelhos += amount;
            soma_total += amount;
            break;
        case 'R':
            total_ratos += amount;
            soma_total += amount;
            break;
        case 'S':
            total_sapos += amount;
            soma_total += amount;
            break;
        }
    }

    double percent_c, percent_r, percent_s;

    if (soma_total > 0)
    {
        percent_c, percent_r, percent_s;
        percent_c = (total_coelhos * 100) / soma_total;
        percent_r = (total_ratos * 100) / soma_total;
        percent_s = (total_sapos * 100) / soma_total;
    }

    std::cout << "Total: " << soma_total << " cobaias\nTotal de coelhos: " << total_coelhos << "\nTotal de ratos: " << total_ratos << "\nTotal de sapos: " << total_sapos << std::endl;

    std::cout << "Percentual de coelhos: " << std::fixed << std::setprecision(2) << percent_c << " %\nPercentual de ratos: " << percent_r << " %\nPercentual de sapos: " << percent_s << " %" << std::endl;

    return 0;
}
