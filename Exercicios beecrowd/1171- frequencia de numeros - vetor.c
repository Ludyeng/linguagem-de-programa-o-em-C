#include <stdio.h>

int main() {
    int N;
    
    // Lê o número de valores a serem inseridos
    scanf("%d", &N);
    
    int values[2001] = {0}; // Array para contar as ocorrências de cada número (0 a 2000)
    
    // Lê os N números e conta suas ocorrências
    for (int i = 0; i < N; i++) {
        int x;
        scanf("%d", &x);
        values[x]++; // Incrementa a contagem do número x
    }
    
    // Imprime os números e suas contagens em ordem crescente
    for (int i = 0; i <= 2000; i++) {
        if (values[i] > 0) {
            printf("%d aparece %d vez(es)\n", i, values[i]);
        }
    }
    
    return 0;
}

