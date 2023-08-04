#include <iostream>
#include <vector>
#include <string>

int main()
{
    int n;
    std::cin >> n;

    int medidas[] = {365, 30, 1};
    int quantidades[sizeof(medidas)];
    std::vector<std::string> unidades = {"ano(s)", "mes(es)", "dia(s)"};

    for (int i = 0; i < 3; i++)
    {
        quantidades[i] = n / medidas[i];
        n = n % medidas[i];
    }
    for (int i = 0; i < 3; i++)
    {
        std::cout << quantidades[i] << " " << unidades[i] << std::endl;
    }

    return 0;
}
