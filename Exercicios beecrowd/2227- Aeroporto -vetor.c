#include <stdio.h>

int main() {
    int A, V, test_case = 1; // A: número de aeroportos, V: número de voos
    
    while (1) {
        // Lendo o número de aeroportos (A) e voos (V)
        scanf("%d %d", &A, &V);
        
        if (A == 0 && V == 0) { // Condição de término
            break;
        }
        
        int trafego[101] = {0}; // Inicializa o array de tráfego (até 100 aeroportos)
        
        // Lendo os voos
        for (int i = 0; i < V; i++) {
            int X, Y;
            scanf("%d %d", &X, &Y);
            trafego[X]++; // Incrementa para o aeroporto de partida
            trafego[Y]++; // Incrementa para o aeroporto de chegada
        }
        
        // Encontrando o valor máximo de tráfego
        int max_trafego = 0;
        for (int i = 1; i <= A; i++) {
            if (trafego[i] > max_trafego) {
                max_trafego = trafego[i];
            }
        }
        
        // Identificando todos os aeroportos com o maior tráfego
        printf("Teste %d\n", test_case);
        for (int i = 1; i <= A; i++) {
            if (trafego[i] == max_trafego) {
                printf("%d ", i); // Imprime o aeroporto com maior tráfego
            }
        }
        printf("\n\n"); // Duas linhas em branco após o resultado
        
        test_case++; // Incrementa o número do caso de teste
    }
    
    return 0;
}

