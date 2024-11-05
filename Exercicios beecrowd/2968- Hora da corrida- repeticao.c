#include <stdio.h>
#include <math.h>

int main() {
    int V, N;
    scanf("%d %d", &V, &N); // Lê o número de voltas e o número de placas

    int total_placas = V * N; // Total de placas do percurso

    // Array para armazenar o resultado
    int resultado[9];

    // Calcula o número de placas para cada percentual de 10% a 90%
    for (int i = 1; i <= 9; i++) {
        resultado[i - 1] = (int)ceil(total_placas * (i * 0.1));
    }

    // Imprime os resultados
    for (int i = 0; i < 9; i++) {
        printf("%d", resultado[i]);
        if (i < 8) {
            printf(" "); // Para separar os números com um espaço
        }
    }
    printf("\n"); // Nova linha após a impressão

    return 0;
}