#include <stdio.h>

int main() {
    double A, B, C;

    // Lê os três valores reais
    scanf("%lf %lf %lf", &A, &B, &C);

    // Verifica se os valores podem formar um triângulo
    if (A + B > C && A + C > B && B + C > A) {
        // Se for triângulo, calcula o perímetro
        double perimetro = A + B + C;
        printf("Perimetro = %.1lf\n", perimetro);
    } else {
        // Se não for triângulo, calcula a área do trapézio
        double area = ((A + B) * C) / 2;
        printf("Area = %.1lf\n", area);
    }

    return 0;
}
