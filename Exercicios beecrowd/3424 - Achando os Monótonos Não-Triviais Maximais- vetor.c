#include <stdio.h>

int contar_a_em_trechos_maximais(int N, const char* s) {
    int total_a = 0; // Contagem total de 'a'
    char current_char = s[0]; // Caractere atual
    int count = 1; // Contador do comprimento do trecho

    for (int i = 1; i < N; i++) {
        if (s[i] == current_char) {
            count++; // Aumenta o contador se o caractere for igual
        } else {
            // Se o trecho anterior era 'a' e tinha pelo menos 2 caracteres
            if (current_char == 'a' && count >= 2) {
                total_a += count; // Adiciona o comprimento do trecho à contagem total
            }
            // Reiniciar para o novo caractere
            current_char = s[i];
            count = 1; // Reiniciar o contador
        }
    }

    // Verificar o último trecho
    if (current_char == 'a' && count >= 2) {
        total_a += count; // Adiciona o trecho final se for válido
    }

    return total_a; // Retorna a contagem total de 'a'
}

int main() {
    int N;
    scanf("%d", &N); // Leitura do tamanho da string
    char s[N + 1]; // Cria um vetor para armazenar a string (+1 para o caractere nulo)
    scanf("%s", s); // Leitura da string

    // Chamada da função e impressão do resultado
    int resultado = contar_a_em_trechos_maximais(N, s);
    printf("%d\n", resultado);

    return 0; // Retorno bem-sucedido
}