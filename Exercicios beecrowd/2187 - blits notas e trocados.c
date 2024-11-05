#include <stdio.h>

int main() {
    int V, test_case = 1;

    while (1) {
        scanf("%d", &V);
        if (V == 0) {
            break;
        }

        // Cálculo do número de notas
        int I = V / 50;    // Notas de B$50
        V %= 50;          // Restante após retirar notas de B$50
        
        int J = V / 10;   // Notas de B$10
        V %= 10;          // Restante após retirar notas de B$10
        
        int K = V / 5;    // Notas de B$5
        V %= 5;           // Restante após retirar notas de B$5
        
        int L = V;        // Notas de B$1 (o restante é igual ao valor)

        // Impressão do resultado
        printf("Teste %d\n", test_case);
        printf("%d %d %d %d\n\n", I, J, K, L);
        
        test_case++;
    }

    return 0;
}