#include <stdio.h>

int main() {
    int N;
    
    // Ler o número de medidas
    scanf("%d", &N);
    
    int heights[N];
    
    // Ler as medidas de altura
    for (int i = 0; i < N; i++) {
        scanf("%d", &heights[i]);
    }
    
    // Variável para determinar o padrão
    int is_valid = 1; // Supondo que o padrão é válido
    int state = 0;    // 0 = sem estado, 1 = pico, -1 = vale

    // Percorrer as alturas
    for (int i = 1; i < N; i++) {
        if (heights[i] > heights[i - 1]) { // Encontrou um pico
            if (state == 1) {
                is_valid = 0; // Dois picos consecutivos
                break;
            }
            state = 1; // Atualiza o estado para pico
        } else if (heights[i] < heights[i - 1]) { // Encontrou um vale
            if (state == -1) {
                is_valid = 0; // Dois vales consecutivos
                break;
            }
            state = -1; // Atualiza o estado para vale
        } else {
            is_valid = 0; // Dois altos iguais consecutivos (não permitido)
            break;
        }
    }

    // Imprimir o resultado
    printf("%d\n", is_valid);

    return 0;
}

