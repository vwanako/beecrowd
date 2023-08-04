#include <iostream>

int main()
{
    int dia_inicio, hora_inicio, minuto_inicio, segundo_inicio;
    int dia_final, hora_final, minuto_final, segundo_final;

    scanf("Dia %d\n%d : %d : %d\n", &dia_inicio, &hora_inicio, &minuto_inicio, &segundo_inicio);

    scanf("Dia %d\n%d : %d : %d\n", &dia_final, &hora_final, &minuto_final, &segundo_final);

    long segundos_inicio = dia_inicio * 86400 + hora_inicio * 3600 + minuto_inicio * 60 + segundo_inicio;
    long segundos_final = dia_final * 86400 + hora_final * 3600 + minuto_final * 60 + segundo_final;

    long duracao_segundos = segundos_final - segundos_inicio;

    std::cout << duracao_segundos / 86400 << " dia(s)" << std::endl;
    std::cout << (duracao_segundos % 86400) / 3600 << " hora(s)" << std::endl;
    std::cout << ((duracao_segundos % 86400) % 3600) / 60 << " minuto(s)" << std::endl;
    std::cout << ((duracao_segundos % 86400) % 3600) % 60 << " segundo(s)" << std::endl;
}
