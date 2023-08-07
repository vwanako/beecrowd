#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int pa, pb, anos = 0;
        double g1, g2;
        std::cin >> pa >> pb >> g1 >> g2;

        do
        {
            pa = pa + ((pa * g1) / 100.0);
            pb = pb + ((pb * g2) / 100.0);
            anos++;

            if (anos > 100)
            {
                break;
            }

        } while (pa < pb + 1);

        if (anos <= 100)
            std::cout << anos << " anos." << std::endl;
        else
            std::cout << "Mais de 1 seculo." << std::endl;
    }
    return 0;
}
