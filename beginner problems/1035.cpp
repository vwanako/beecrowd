#include <iostream>

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    bool aceitos = (b > c) && (d > a) && ((c + d) > (a + b)) && (c > 0) && (d > 0) && (a % 2 == 0);

    if (aceitos)
    {
        std::cout << "Valores aceitos" << std::endl;
    }
    else
    {
        std::cout << "Valores nao aceitos" << std::endl;
    }

    return 0;
}