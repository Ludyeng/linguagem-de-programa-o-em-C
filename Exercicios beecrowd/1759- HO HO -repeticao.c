#include <stdio.h>

int main() {
    int N;

    // Lê o número de "Ho" que Noel deve falar
    scanf("%d", &N);

    // Imprime cada "Ho" de acordo com a quantidade
    for (int i = 1; i < N; i++) {
        printf("Ho ");
    }

    // Imprime o último "Ho" seguido de "!"
    printf("Ho!\n");

    return 0;
}
