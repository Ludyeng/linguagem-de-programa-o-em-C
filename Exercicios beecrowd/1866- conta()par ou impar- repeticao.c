#include <stdio.h>

int main() {
    int C, N;
    
    // Lê o número de casos de teste
    scanf("%d", &C);
    
    while (C--) {
        // Lê o valor de N
        scanf("%d", &N);
        
        // Imprime 1 se N for ímpar, ou 0 se N for par
        if (N % 2 == 0) {
            printf("0\n");
        } else {
            printf("1\n");
        }
    }
    
    return 0;
}

