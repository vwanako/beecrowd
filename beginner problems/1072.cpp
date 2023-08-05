#include <iostream>

int main()
{
    int n, x, in = 0, out = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> x;

        if (x >= 10 && x <= 20)
            in++;
        else
            out++;
    }

    std::cout << in << " in" << std::endl;
    std::cout << out << " out" << std::endl;

    return 0;
}
