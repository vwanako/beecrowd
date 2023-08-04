#include <iostream>
#include <stdlib.h>

int main()
{
    int a, b, c, maior;
    std::cin >> a >> b >> c;

    maior = (a + b + abs(a - b)) / 2;
    maior = (maior + c + abs(maior - c)) / 2;

    std::cout << maior << " eh o maior" << std::endl;

    return 0;
}