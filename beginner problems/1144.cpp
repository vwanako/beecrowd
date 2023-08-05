#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int start = 1;
    for (int i = 0; i < n; i++)
    {
        std::cout << start << " " << start * start << " " << start * start * start << std::endl;
        std::cout << start << " " << (start * start) + 1 << " " << (start * start * start) + 1 << std::endl;
        start++;
    }

    return 0;
}
