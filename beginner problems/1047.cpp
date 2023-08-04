#include <iostream>

int main()
{
    int hora_inicio, minuto_inicio, hora_fim, minuto_fim;
    std::cin >> hora_inicio >> minuto_inicio >> hora_fim >> minuto_fim;

    int duracao_horas, duracao_minutos, minutos_iniciais, minutos_finais;

    minutos_iniciais = (hora_inicio * 60) + minuto_inicio;
    minutos_finais = (hora_fim * 60) + minuto_fim;

    if (minutos_iniciais < minutos_finais)
    {
        duracao_minutos = minutos_finais - minutos_iniciais;
        duracao_horas = duracao_minutos / 60;
        duracao_minutos = duracao_minutos % 60;
    }
    else
    {
        duracao_minutos = 1440 - (minutos_iniciais - minutos_finais);
        duracao_horas = duracao_minutos / 60;
        duracao_minutos = duracao_minutos % 60;
    }

    std::cout
        << "O JOGO DUROU " << duracao_horas << " HORA(S) E " << duracao_minutos << " MINUTO(S)" << std::endl;

    return 0;
}
