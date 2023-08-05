#include <iostream>

int main()
{
    int n, maior, pos = 1;

    for (int i = 0; i < 100; i++)
    {
        std::cin >> n;
        if (i == 0)
            maior = n;
        else if (n > maior)
        {
            maior = n;
            pos = i + 1;
        }
    }

    std::cout << maior << std::endl;
    std::cout << pos << std::endl;

    return 0;
}
