#include <iostream>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sort(int &a, int &b, int &c)
{
    if (a < b)
        swap(a, b);
    if (a < c)
        swap(a, c);
    if (b < c)
        swap(b, c);
}

int main()
{
    int n1, n2, n3;
    std::cin >> n1 >> n2 >> n3;

    int n1c = n1, n2c = n2, n3c = n3;

    sort(n1c, n2c, n3c);

    std::cout << n3c << "\n"
              << n2c << "\n"
              << n1c << std::endl;

    std::cout << "\n"
              << n1 << "\n"
              << n2 << "\n"
              << n3 << std::endl;

    return 0;
}
