#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int start = 1;
    for (int i = 0; i < n; i++)
    {
        std::cout << start << " " << start + 1 << " " << start + 2 << " PUM" << std::endl;
        start += 4;
    }

    return 0;
}
