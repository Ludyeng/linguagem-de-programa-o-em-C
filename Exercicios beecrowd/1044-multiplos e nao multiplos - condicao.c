#include <stdio.h>

int main() {
    int A, B;

    // Leitura dos dois valores inteiros
    scanf("%d %d", &A, &B);

    // Verifica se A é múltiplo de B ou B é múltiplo de A
    if (A % B == 0 || B % A == 0) {
        printf("Sao Multiplos\n"); // Mensagem se são múltiplos
    } else {
        printf("Nao sao Multiplos\n"); // Mensagem se não são múltiplos
    }

    return 0; // Retorno bem-sucedido
}
