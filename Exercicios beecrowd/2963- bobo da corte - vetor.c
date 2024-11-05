#include <stdio.h>

int main() {
    int N; // Número de candidatos
    scanf("%d", &N);
    
    int votos[N]; // Array para armazenar os votos de cada candidato
    for (int i = 0; i < N; i++) {
        scanf("%d", &votos[i]); // Leitura dos votos
    }
    
    int maxVotos = votos[0]; // Assume que Carlos (candidato 1) tem o maior voto inicialmente
    int empate = 1; // Contador para verificar se Carlos tem empate com mais candidatos
    
    // Encontrar o maior número de votos
    for (int i = 1; i < N; i++) {
        if (votos[i] > maxVotos) {
            maxVotos = votos[i];
            empate = 0; // Carlos não é o único com o maior voto
        } else if (votos[i] == maxVotos) {
            empate = 1; // Existe um empate
        }
    }
    
    // Verificar se Carlos é o eleito
    if (maxVotos == votos[0] && (empate == 1 || empate == 0)) {
        printf("S\n"); // Carlos foi eleito
    } else {
        printf("N\n"); // Carlos não foi eleito
    }

    return 0;
}