#include <iostream>

int main()
{
    int x, y, counter = 0;
    std::cin >> x >> y;

    for (int i = 1; i <= y; i++)
    {
        counter++;

        if (counter == x)
        {
            std::cout << i << std::endl;
            counter = 0;
        }
        else
            std::cout << i << " ";
    }

    return 0;
}
