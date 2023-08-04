#include <iostream>

int main()
{
    for (int i = 1; i < 101; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << i << std::endl;
        }
    }

    return 0;
}