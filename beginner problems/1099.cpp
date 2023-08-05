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
    int n, x, y, sum;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        std::cin >> x >> y;
        sort(x, y);
        for (int j = y + 1; j < x; j++)
        {
            if (j % 2 != 0)
                sum += j;
        }

        std::cout << sum << std::endl;
    }

    return 0;
}
