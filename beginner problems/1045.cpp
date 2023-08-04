#include <iostream>

void swap(double &a, double &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sort(double &a, double &b, double &c)
{
    if (a < b)
    {
        swap(a, b);
    }

    if (a < c)
    {
        swap(a, c);
    }
    if (b < c)
    {
        swap(b, c);
    }
}

bool forma_triangulo(double lado1, double lado2, double lado3)
{
    return (lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1);
}

bool triangulo_equilat(double lado1, double lado2, double lado3)
{
    return (lado1 == lado2 && lado2 == lado3);
}

bool triangulo_iso(double lado1, double lado2, double lado3)
{
    return (lado1 == lado2 || lado2 == lado3 || lado1 == lado3);
}

bool triangulo_retang(double lado1, double lado2, double lado3)
{
    return ((lado1 * lado1) == ((lado2 * lado2) + (lado3 * lado3)));
}

bool triangulo_obtusang(double lado1, double lado2, double lado3)
{
    return ((lado1 * lado1) > ((lado2 * lado2) + (lado3 * lado3)));
}

bool triang_acutang(double lado1, double lado2, double lado3)
{
    return ((lado1 * lado1) < ((lado2 * lado2) + (lado3 * lado3)));
}

void classifica_angulo(double lado1, double lado2, double lado3)
{
    if (triangulo_retang(lado1, lado2, lado3))
    {
        std::cout << "TRIANGULO RETANGULO" << std::endl;
    }
    else if (triangulo_obtusang(lado1, lado2, lado3))
    {
        std::cout << "TRIANGULO OBTUSANGULO" << std::endl;
    }
    else if (triang_acutang(lado1, lado2, lado3))
    {
        std::cout << "TRIANGULO ACUTANGULO" << std::endl;
    }
}

void classifica_lado(double lado1, double lado2, double lado3)
{
    if (triangulo_equilat(lado1, lado2, lado3))
    {
        std::cout << "TRIANGULO EQUILATERO" << std::endl;
    }
    else if (triangulo_iso(lado1, lado2, lado3))
    {
        std::cout << "TRIANGULO ISOSCELES" << std::endl;
    }
}

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;

    sort(a, b, c);

    if (forma_triangulo(a, b, c))
    {
        classifica_angulo(a, b, c);
        classifica_lado(a, b, c);
    }
    else
    {
        std::cout << "NAO FORMA TRIANGULO" << std::endl;
    }

    return 0;
}