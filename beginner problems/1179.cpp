#include <iostream>

int main()
{
    int par[5], impar[5], counter_par = 0, counter_impar = 0;

    for (int i = 0; i < 15; i++)
    {
        int x;
        std::cin >> x;

        if (x % 2 == 0)
        {
            par[counter_par] = x;
            counter_par++;

            if (counter_par >= 5)
            {
                for (int j = 0; j < 5; j++)
                {
                    std::cout << "par[" << j << "] = " << par[j] << std::endl;
                }
                counter_par = 0;
            }
        }
        else
        {
            impar[counter_impar] = x;
            counter_impar++;

            if (counter_impar >= 5)
            {
                for (int j = 0; j < 5; j++)
                {
                    std::cout << "impar[" << j << "] = " << impar[j] << std::endl;
                }
                counter_impar = 0;
            }
        }
    }

    for (int j = 0; j < counter_impar; j++)
    {
        std::cout << "impar[" << j << "] = " << impar[j] << std::endl;
    }
    for (int j = 0; j < counter_par; j++)
    {
        std::cout << "par[" << j << "] = " << par[j] << std::endl;
    }

    return 0;
}
