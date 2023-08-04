#include <iostream>

int main()
{
    double a, b, media;
    std::cin >> a;
    std::cin >> b;

    media = ((a * 3.5) + (b * 7.5)) / 11;

    printf("MEDIA = %.5f\n", media);

    return 0;
}