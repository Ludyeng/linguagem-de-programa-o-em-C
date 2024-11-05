#include <stdio.h>

int main() {
    int k;

    while (1) {
        // Leitura do número de consultas
        scanf("%d", &k);
        if (k == 0) {
            break; // Fim da entrada
        }

        int N, M;
        // Leitura das coordenadas do ponto divisor
        scanf("%d %d", &N, &M);

        for (int i = 0; i < k; i++) {
            int X, Y;
            // Leitura das coordenadas da residência
            scanf("%d %d", &X, &Y);

            // Determinação do quadrante ou da linha divisória
            if (X == N || Y == M) {
                printf("divisa\n");
            } else if (X < N && Y > M) {
                printf("NO\n");
            } else if (X > N && Y > M) {
                printf("NE\n");
            } else if (X > N && Y < M) {
                printf("SE\n");
            } else if (X < N && Y < M) {
                printf("SO\n");
            }
        }
    }

    return 0;
}

