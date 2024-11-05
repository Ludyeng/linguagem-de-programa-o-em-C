#include <stdio.h>

int main() {
    int N, M;
    int notas[] = {2, 5, 10, 20, 50, 100};  // Notas disponíveis
    int num_notas = 6;  // Quantidade de notas disponíveis
    
    // Leitura dos casos até N = M = 0
    while (1) {
        // Lê os valores N e M
        scanf("%d %d", &N, &M);
        
        // Condição de parada
        if (N == 0 && M == 0) {
            break;
        }
        
        int troco = M - N;
        int possible = 0;  // Flag para indicar se é possível dar o troco exato
        
        // Verifica todas as combinações de duas notas
        for (int i = 0; i < num_notas; i++) {
            for (int j = i + 1; j < num_notas; j++) {
                if (notas[i] + notas[j] == troco) {
                    possible = 1;  // Encontramos uma combinação válida
                    break;
                }
            }
            if (possible) {
                break;
            }
        }
        
        // Imprime o resultado
        if (possible) {
            printf("possible\n");
        } else {
            printf("impossible\n");
        }
    }
    
    return 0;
}
