#include <iostream>

int main()
{
    for (int i = 1; i <= 9; i += 2)
    {
        for (int j = i + 6; j >= i + 4; j--)
        {
            std::cout << "I=" << i << " J=" << j << std::endl;
        }
    }

    return 0;
}
