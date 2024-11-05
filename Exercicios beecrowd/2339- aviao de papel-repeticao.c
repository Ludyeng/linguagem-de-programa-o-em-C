#include <stdio.h>

int main() {
    int C, P, F;

    // Leitura dos dados de entrada
    scanf("%d %d %d", &C, &P, &F);

    // Cálculo do total de folhas necessárias
    int total_necessario = C * F;

    // Comparação para verificar se a quantidade comprada é suficiente
    if (P >= total_necessario) {
        printf("S\n"); // Suficiente
    } else {
        printf("N\n"); // Não suficiente
    }

    return 0;
}