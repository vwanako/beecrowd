#include <iostream>

void soma_dos_cinco(int &x)
{
    int soma = 0;

    if (x % 2 != 0)
        x++;

    for (int i = 0; i < 5; i++, x += 2)
        soma += x;

    std::cout << soma << std::endl;
}

int main()
{
    int x;
    do
    {
        std::cin >> x;
        if (x != 0)
            soma_dos_cinco(x);
    } while (x != 0);

    return 0;
}
