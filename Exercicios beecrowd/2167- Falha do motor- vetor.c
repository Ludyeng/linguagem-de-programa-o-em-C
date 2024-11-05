#include <stdio.h>

int main() {
    int N;
    
    // Ler o número de medidas
    scanf("%d", &N);
    
    int RPM[N];
    
    // Ler as medidas de RPM
    for (int i = 0; i < N; i++) {
        scanf("%d", &RPM[i]);
    }
    
    // Variável para armazenar o índice da primeira queda
    int first_drop_index = 0;
    
    // Percorrer as medidas e encontrar a primeira queda
    for (int i = 1; i < N; i++) {
        if (RPM[i] < RPM[i - 1]) {
            first_drop_index = i + 1;  // +1 para converter para índice baseado em 1
            break; // Encontrou a primeira queda, sair do loop
        }
    }
    
    // Imprimir o resultado
    printf("%d\n", first_drop_index);
    
    return 0;
}
