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
    int m, n, sum;
    std::cin >> m >> n;
    sort(m, n);

    while (m > 0 && n > 0)
    {
        sum = 0;
        for (int i = n; i <= m; i++)
        {
            std::cout << i << " ";
            sum += i;
        }
        std::cout << "Sum=" << sum << std::endl;

        std::cin >> m >> n;
        sort(m, n);
    }

    return 0;
}
