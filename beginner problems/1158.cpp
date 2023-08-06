#include <iostream>

void soma_impar()
{
    int x, y, soma = 0;
    std::cin >> x >> y;

    if (x % 2 == 0)
        x++;

    for (int i = 0; i < y; i++, x += 2)
        soma += x;
    std::cout << soma << std::endl;
}

int main()
{
    int n;
    std::cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        soma_impar();
    }
    return 0;
}
