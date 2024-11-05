#include <stdio.h>

int main() {
    double A, B, media;

    // Lê os valores de ponto flutuante
    scanf("%lf %lf", &A, &B);

    // Calcula a média ponderada
    media = (A * 3.5 + B * 7.5) / 11.0;

    // Imprime o resultado com a formatação requerida
    printf("MEDIA = %.5lf\n", media);

    return 0;
}
