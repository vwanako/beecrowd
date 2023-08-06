#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int fib_prev = 0;
    int fib_curr = 1;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            std::cout << fib_prev << " ";
            continue;
        }
        else if (i == 2)
        {
            std::cout << fib_curr << " ";
            continue;
        }
        else if (i == n)
        {
            int fib_next = fib_prev + fib_curr;
            std::cout << fib_next << std::endl;
        }
        else
        {
            int fib_next = fib_prev + fib_curr;
            std::cout << fib_next << " ";
            fib_prev = fib_curr;
            fib_curr = fib_next;
        }
    }
    return 0;
}
