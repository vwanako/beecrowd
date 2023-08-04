#include <iostream>

int main()
{
    double a, b, c, media;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    media = ((a * 2) + (b * 3) + (c * 5)) / 10;

    printf("MEDIA = %.1f\n", media);

    return 0;
}