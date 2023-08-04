#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int tempo[] = {3600, 60, 1};
    int quantidades[sizeof(tempo)];

    for (unsigned int i = 0; i < 3; i++)
    {
        quantidades[i] = n / tempo[i];
        n = n % tempo[i];
    }

    std::cout << quantidades[0] << ":" << quantidades[1] << ":" << quantidades[2] << std::endl;

    return 0;
}
