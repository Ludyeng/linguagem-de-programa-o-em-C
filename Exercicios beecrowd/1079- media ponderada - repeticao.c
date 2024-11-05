#include <stdio.h>

int main() {
    int N, i;
    float v1, v2, v3, media;

    // Lê o número de casos de teste
    scanf("%d", &N);

    // Loop através dos casos de teste
    for (i = 0; i < N; i++) {
        // Lê os três valores de cada caso de teste
        scanf("%f %f %f", &v1, &v2, &v3);
        
        // Calcula a média ponderada
        media = (v1 * 2 + v2 * 3 + v3 * 5) / 10;

        // Exibe a média com uma casa decimal
        printf("%.1f\n", media);
    }

    return 0;
}
