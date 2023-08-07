#include <iostream>

int main()
{
    int n[20], m[20];

    for (int i = 0, j = 19; i < 20; i++, j--)
    {
        std::cin >> n[i];

        m[j] = n[i];
    }

    for (int i = 0; i < 20; i++)
    {
        std::cout << "N[" << i << "] = " << m[i] << std::endl;
    }

    return 0;
}
