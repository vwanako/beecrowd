#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;

    do
    {
        std::cin >> n;
        if (n < 0)
            return 0;

        std::vector<int> speeds(n);
        for (int i = 0; i < n; i++)
            std::cin >> speeds[i];

        int maior_nivel = *std::max_element(speeds.begin(), speeds.end());

        if (maior_nivel < 10)
            std::cout << "1" << std::endl;
        else if (maior_nivel < 20)
            std::cout << "2" << std::endl;
        else
            std::cout << "3" << std::endl;

    } while (n > 0);

    return 0;
}
