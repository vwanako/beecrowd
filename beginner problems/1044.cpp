#include <iostream>

bool checar_multiplos(int &a, int &b)
{
    if (a % b == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a, b;
    std::cin >> a >> b;

    if (checar_multiplos(a, b) || checar_multiplos(b, a))
    {
        std::cout << "Sao Multiplos" << std::endl;
    }
    else
    {
        std::cout << "Nao sao Multiplos" << std::endl;
    }

    return 0;
}
