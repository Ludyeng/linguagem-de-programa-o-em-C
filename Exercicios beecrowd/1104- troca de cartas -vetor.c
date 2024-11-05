#include <stdio.h>
#define MAX 10000

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int a, b;
    int cartas_alice[MAX], cartas_beatriz[MAX];
    
    while (1) {
        // Lê o número de cartas de Alice e Beatriz
        scanf("%d %d", &a, &b);
        
        // Condição de parada
        if (a == 0 && b == 0) break;
        
        // Lê as cartas de Alice
        for (int i = 0; i < a; i++) {
            scanf("%d", &cartas_alice[i]);
        }
        
        // Lê as cartas de Beatriz
        for (int i = 0; i < b; i++) {
            scanf("%d", &cartas_beatriz[i]);
        }
        
        // Vetores de frequência para identificar cartas únicas
        int freq_alice[100001] = {0}, freq_beatriz[100001] = {0};
        
        // Preenche a frequência das cartas de Alice
        for (int i = 0; i < a; i++) {
            freq_alice[cartas_alice[i]]++;
        }
        
        // Preenche a frequência das cartas de Beatriz
        for (int i = 0; i < b; i++) {
            freq_beatriz[cartas_beatriz[i]]++;
        }
        
        // Conta as cartas que podem ser trocadas
        int alice_to_trade = 0, beatriz_to_trade = 0;
        for (int i = 1; i <= 100000; i++) {
            if (freq_alice[i] > 0 && freq_beatriz[i] == 0) {
                alice_to_trade++;
            }
            if (freq_beatriz[i] > 0 && freq_alice[i] == 0) {
                beatriz_to_trade++;
            }
        }
        
        // O número máximo de trocas é o mínimo entre os dois valores
        printf("%d\n", min(alice_to_trade, beatriz_to_trade));
    }

    return 0;
}

