#include <stdio.h>

int main() {
    int T;
    
    // Lê o número de casos de teste
    scanf("%d", &T);
    
    // Array para armazenar os números de Fibonacci até F(60)
    unsigned long long fib[61];
    
    // Inicializa os primeiros termos da sequência de Fibonacci
    fib[0] = 0;
    fib[1] = 1;
    
    // Calcula a sequência de Fibonacci para os próximos termos
    for (int i = 2; i <= 60; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    
    // Processa cada caso de teste
    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);
        
        // Imprime o resultado no formato solicitado
        printf("Fib(%d) = %llu\n", N, fib[N]);
    }
    
    return 0;
}

