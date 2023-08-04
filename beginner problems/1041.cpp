#include <iostream>

int main()
{
    double x, y;
    std::cin >> x >> y;

    if (x == y && y == 0)
    {
        std::cout << "Origem" << std::endl;
        return 0;
    }
    else
    {
        if (x == 0)
        {
            std::cout << "Eixo Y" << std::endl;
            return 0;
        }
        else if (y == 0)
        {
            std::cout << "Eixo X" << std::endl;
            return 0;
        }

        int quadrant = (x > 0) ? ((y > 0) ? 1 : 4) : ((y > 0) ? 2 : 3);

        std::cout << "Q" << quadrant << std::endl;
    }

    return 0;
}
