#include <iostream>

int main()
{
    int input, alcool = 0, gasolina = 0, diesel = 0;
    do
    {
        std::cin >> input;
        switch (input)
        {
        case 1:
            alcool++;
            break;
        case 2:
            gasolina++;
            break;
        case 3:
            diesel++;
            break;
        case 4:
            break;
        default:
            break;
        }

    } while (input != 4);

    std::cout << "MUITO OBRIGADO\nAlcool: " << alcool << "\nGasolina: " << gasolina << "\nDiesel: " << diesel << std::endl;

    return 0;
}
