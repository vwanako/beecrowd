#include <iostream>

int main()
{
    int x, y;
    std::cin >> x >> y;

    while (x != 0 && y != 0)
    {
        int quadrant = (x > 0) ? ((y > 0) ? 1 : 4) : ((y > 0) ? 2 : 3);
        switch (quadrant)
        {
        case 1:
            std::cout << "primeiro" << std::endl;
            break;
        case 2:
            std::cout << "segundo" << std::endl;
            break;
        case 3:
            std::cout << "terceiro" << std::endl;
            break;
        case 4:
            std::cout << "quarto" << std::endl;
            break;
        }
        
        std::cin >> x >> y;
    }

    return 0;
}
