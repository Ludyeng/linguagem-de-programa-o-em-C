#include <stdio.h>

int main() {
    int M, A, B;
    
    // Leitura das idades
    scanf("%d", &M);
    scanf("%d", &A);
    scanf("%d", &B);
    
    // Cálculo da idade do terceiro filho
    int C = M - (A + B);
    
    // Determinar a idade do filho mais velho
    int filho_mais_velho = A;
    
    if (B > filho_mais_velho) {
        filho_mais_velho = B;
    }
    if (C > filho_mais_velho) {
        filho_mais_velho = C;
    }
    
    // Impressão do resultado
    printf("%d\n", filho_mais_velho);
    
    return 0;
}

