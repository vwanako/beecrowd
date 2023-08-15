#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char operation;
    cin >> operation;

    double M[12][12];
    for (int i = 0; i < 12; ++i)
    {
        for (int j = 0; j < 12; ++j)
        {
            cin >> M[i][j];
        }
    }

    double result = 0;
    int count = 0;
    for (int i = 0; i < 12; ++i)
    {
        for (int j = i + 1; j < 12; ++j)
        {
            result += M[i][j];
            count++;
        }
    }

    if (operation == 'M')
    {
        result /= count;
    }

    cout << fixed << setprecision(1) << result << endl;

    return 0;
}
