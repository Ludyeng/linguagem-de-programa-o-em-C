#include <stdio.h>

int main() {
    int N, turma = 1;

    // Loop principal para processar várias turmas
    while (1) {
        // Lê o número de alunos na turma
        scanf("%d", &N);
        
        // Condição de parada
        if (N == 0) {
            break;
        }

        int max_media = -1;
        int codigos[N];
        int medias[N];
        
        // Leitura dos dados dos alunos
        for (int i = 0; i < N; i++) {
            int codigo, media;
            scanf("%d %d", &codigo, &media);
            codigos[i] = codigo;
            medias[i] = media;

            // Atualiza a maior média
            if (media > max_media) {
                max_media = media;
            }
        }

        // Imprime o identificador da turma
        printf("Turma %d\n", turma);

        // Imprime os códigos dos alunos com a maior média
        for (int i = 0; i < N; i++) {
            if (medias[i] == max_media) {
                printf("%d ", codigos[i]);
            }
        }

        // Incrementa o número da turma para o próximo caso de teste
        turma++;
        
        // Quebra de linha após a lista de códigos
        printf("\n\n");
    }

    return 0;
}
