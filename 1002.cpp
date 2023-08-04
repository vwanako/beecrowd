#include <iostream>
#include <iomanip>

int main()
{
    double n = 3.14159, R, A;
    std::cin >> R;

    A = n * (R * R);

    printf("A=%.4f\n", A);

    return 0;
}