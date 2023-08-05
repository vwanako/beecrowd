#include <iostream>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sort(int &a, int &b)
{
    if (a < b)
        swap(a, b);
}

int main()
{
    int x, y, sum = 0;
    std::cin >> x >> y;

    sort(x, y);

    for (int i = y + 1; i < x; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}
