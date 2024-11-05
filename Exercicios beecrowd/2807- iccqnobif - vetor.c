#include <stdio.h>

void icanobif(int n) {
    // Array para armazenar os termos da sequência
    int sequence[40]; // O tamanho máximo é 40

    // Os dois últimos termos são sempre 1
    sequence[n-1] = 1; 
    sequence[n-2] = 1; 

    // Preenchendo a sequência de trás para frente
    for (int i = n - 3; i >= 0; i--) {
        sequence[i] = sequence[i + 1] + sequence[i + 2];
    }

    // Imprimindo a sequência
    for (int i = 0; i < n; i++) {
        printf("%d", sequence[i]);
        if (i < n - 1) {
            printf(" "); // Imprime espaço entre os números
        }
    }
    printf("\n"); // Nova linha após a sequência
}

int main() {
    int N;
    scanf("%d", &N); // Lê o tamanho da sequência
    icanobif(N); // Gera e imprime a sequência de Iccanobif
    return 0;
}
