#include <stdio.h>

int main() {
    float nota1 = -1, nota2 = -1, nota;
    
    // Loop até que duas notas válidas sejam inseridas
    while (nota1 == -1 || nota2 == -1) {
        // Ler a próxima nota
        scanf("%f", &nota);
        
        // Validar se a nota está no intervalo [0, 10]
        if (nota >= 0 && nota <= 10) {
            // Se nota1 ainda não foi atribuída, armazena em nota1
            if (nota1 == -1) {
                nota1 = nota;
            }
            // Senão, armazena em nota2
            else if (nota2 == -1) {
                nota2 = nota;
            }
        } else {
            // Se a nota for inválida, exibe a mensagem
            printf("nota invalida\n");
        }
    }
    
    // Calcula a média das duas notas válidas
    float media = (nota1 + nota2) / 2.0;
    
    // Exibe a média com duas casas decimais
    printf("media = %.2f\n", media);
    
    return 0;
}