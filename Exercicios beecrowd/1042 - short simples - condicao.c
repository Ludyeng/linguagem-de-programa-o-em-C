#include <stdio.h>

int main() {
    int a, b, c;
    int x, y, z;

    // Lê os três valores
    scanf("%d %d %d", &a, &b, &c);

    // Copia os valores originais para x, y, z para mantê-los
    x = a;
    y = b;
    z = c;

    // Ordena os valores em ordem crescente usando comparações simples
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }

    // Imprime os valores em ordem crescente
    printf("%d\n%d\n%d\n", a, b, c);

    // Imprime uma linha em branco
    printf("\n");

    // Imprime os valores na ordem original
    printf("%d\n%d\n%d\n", x, y, z);

    return 0;
}
