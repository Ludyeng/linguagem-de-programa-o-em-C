#include <stdio.h>

int main() {
    int bits[8]; // Array para armazenar os 8 bits lidos
    int sucesso = 1; // Flag para indicar sucesso (1) ou falha (0)

    // Leitura dos 8 números
    for (int i = 0; i < 8; i++) {
        scanf("%d", &bits[i]);
        // Verifica se o bit lido é 9
        if (bits[i] == 9) {
            sucesso = 0; // Se encontrar um 9, marca como falha
        }
    }

    // Impressão do resultado
    if (sucesso) {
        printf("S\n"); // Todos os bits lidos com sucesso
    } else {
        printf("F\n"); // Houve uma falha na leitura
    }

    return 0; // Retorno bem-sucedido
}
