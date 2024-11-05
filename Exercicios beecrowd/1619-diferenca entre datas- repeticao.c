#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calcular_diferenca_dias(const char *data1, const char *data2) {
    struct tm tm1 = {0}, tm2 = {0};
    time_t time1, time2;
    
    // Converte as datas para struct tm
    sscanf(data1, "%d-%d-%d", &tm1.tm_year, &tm1.tm_mon, &tm1.tm_mday);
    sscanf(data2, "%d-%d-%d", &tm2.tm_year, &tm2.tm_mon, &tm2.tm_mday);
    
    // Ajuste para struct tm (anos desde 1900 e meses de 0 a 11)
    tm1.tm_year -= 1900;
    tm2.tm_year -= 1900;
    tm1.tm_mon -= 1;
    tm2.tm_mon -= 1;
    
    // Converte struct tm para time_t (segundos desde o epoch)
    time1 = mktime(&tm1);
    time2 = mktime(&tm2);

    // Calcula a diferença absoluta em segundos e converte para dias
    double diferenca_segundos = difftime(time1, time2);
    return abs(diferenca_segundos / (60 * 60 * 24));
}

int main() {
    int N;
    char data1[11], data2[11];

    // Lê o número de casos de teste
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        // Lê as duas datas no formato AAAA-MM-DD
        scanf("%s %s", data1, data2);

        // Calcula a diferença em dias e imprime o resultado
        int diferenca_dias = calcular_diferenca_dias(data1, data2);
        printf("%d\n", diferenca_dias);
    }

    return 0;
}

