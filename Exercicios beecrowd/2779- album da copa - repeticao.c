#include <stdio.h>

int main() {
    int N, M; // N: total de figurinhas, M: figurinhas compradas
    scanf("%d", &N);
    scanf("%d", &M);
    
    int figurinhas[N + 1]; // Array para marcar as figurinhas já compradas
    for (int i = 1; i <= N; i++) {
        figurinhas[i] = 0; // Inicializa todas as figurinhas como não compradas
    }

    // Lê as figurinhas compradas e marca no array
    for (int i = 0; i < M; i++) {
        int X;
        scanf("%d", &X);
        if (X >= 1 && X <= N) {
            figurinhas[X] = 1; // Marca que a figurinha X foi comprada
        }
    }

    // Conta quantas figurinhas faltam
    int faltando = 0;
    for (int i = 1; i <= N; i++) {
        if (figurinhas[i] == 0) {
            faltando++; // Conta figurinhas não compradas
        }
    }

    printf("%d\n", faltando); // Imprime o resultado
    return 0;
}