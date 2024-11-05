#include <stdio.h>

int main() {
    int N;

    while (scanf("%d", &N) != EOF) {
        if (N == 0) {
            break; // Não deve haver casos com N == 0, mas é uma proteção.
        }

        int votes[N];
        int favorable_votes = 0;

        // Leitura dos votos
        for (int i = 0; i < N; i++) {
            scanf("%d", &votes[i]);
            favorable_votes += votes[i]; // Contando votos favoráveis
        }

        // Cálculo do número necessário de votos para impeachment
        int required_votes = (2 * N + 2) / 3; // (2/3) de N, arredondando para cima

        // Decisão sobre impeachment
        if (favorable_votes >= required_votes) {
            printf("impeachment\n");
        } else {
            printf("acusacao arquivada\n");
        }
    }

    return 0;
}
