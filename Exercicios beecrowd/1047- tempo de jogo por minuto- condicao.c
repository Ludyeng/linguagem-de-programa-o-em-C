#include <stdio.h>

int main() {
    int hora_inicial, minuto_inicial, hora_final, minuto_final;
    int duracao_horas, duracao_minutos;

    // Lê os valores de hora e minuto inicial e final
    scanf("%d %d %d %d", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);

    // Calcula a diferença dos minutos
    duracao_minutos = minuto_final - minuto_inicial;
    duracao_horas = hora_final - hora_inicial;

    // Ajusta os minutos se necessário
    if (duracao_minutos < 0) {
        duracao_minutos += 60;
        duracao_horas -= 1;
    }

    // Ajusta as horas se necessário
    if (duracao_horas < 0) {
        duracao_horas += 24;
    }

    // Caso o jogo comece e termine no mesmo horário
    if (hora_inicial == hora_final && minuto_inicial == minuto_final) {
        duracao_horas = 24;
        duracao_minutos = 0;
    }

    // Exibe o resultado
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_horas, duracao_minutos);

    return 0;
}
