#include <iostream>

int main()
{
    for (double i = 0; i <= 2; i += 0.2)
    {
        for (double j = 1; j <= 3; j++)
        {
            std::cout << "I=" << i << " J=" << j + i << std::endl;
        }
    }
    return 0;
}
