#include <iostream>
#include <iomanip>

int main()
{
    int n, i = 0, sum = 0;
    double average;

    do
    {
        std::cin >> n;
        if (n < 0)
            break;

        sum += n;
        i++;
    } while (n > 0);

    std::cout << sum << " " << i << std::endl;
    average = double(sum) / i;
    std::cout << std::fixed << std::setprecision(2) << average << std::endl;

    return 0;
}
