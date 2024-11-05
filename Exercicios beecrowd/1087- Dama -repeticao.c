#include <stdio.h>
#include <stdlib.h>

int main() {
    int X1, Y1, X2, Y2;

    // Loop para ler múltiplos casos de teste
    while (1) {
        // Lê as coordenadas de entrada
        scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
        
        // Condição de parada (quatro zeros)
        if (X1 == 0 && Y1 == 0 && X2 == 0 && Y2 == 0) {
            break;
        }
        
        // Caso 0 movimentos (se a posição inicial for igual à final)
        if (X1 == X2 && Y1 == Y2) {
            printf("0\n");
        }
        // Caso 1 movimento (mesma linha, mesma coluna ou diagonal)
        else if (X1 == X2 || Y1 == Y2 || abs(X2 - X1) == abs(Y2 - Y1)) {
            printf("1\n");
        }
        // Caso 2 movimentos (nenhuma das condições anteriores)
        else {
            printf("2\n");
        }
    }

    return 0;
}