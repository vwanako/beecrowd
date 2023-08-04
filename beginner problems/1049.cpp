#include <iostream>
#include <string>

int main()
{
    std::string filo, classe, dieta;
    std::cin >> filo;
    std::cin >> classe;
    std::cin >> dieta;

    if (filo == "vertebrado")
    {

        if (classe == "ave")
        {
            if (dieta == "carnivoro")
            {
                std::cout << "aguia" << std::endl;
            }
            else if (dieta == "onivoro")
            {
                std::cout << "pomba" << std::endl;
            }
        }
        else if (classe == "mamifero")
        {
            if (dieta == "carnivoro")
            {
                std::cout << "homem" << std::endl;
            }
            else if (dieta == "herbivoro")
            {
                std::cout << "vaca" << std::endl;
            }
        }
    }
    else if (filo == "invertebrado")
    {
        if (classe == "inseto")
        {
            if (dieta == "hematofago")
            {
                std::cout << "pulga" << std::endl;
            }
            else if (dieta == "herbivoro")
            {
                std::cout << "lagarta" << std::endl;
            }
        }
        else if (classe == "anelideo")
        {
            if (dieta == "hematofago")
            {
                std::cout << "sanguessuga" << std::endl;
            }
            else if (dieta == "onivoro")
            {
                std::cout << "minhoca" << std::endl;
            }
        }
    }

    return 0;
}