#include <stdio.h>

int main() {
    double N;
    int notas, moedas;
    
    // Lê o valor monetário
    scanf("%lf", &N);
    
    // Converte o valor para centavos para evitar problemas de precisão
    int valor = N * 100 + 0.5; // Adiciona 0.5 para evitar erros de arredondamento
    
    // Notas
    printf("NOTAS:\n");
    notas = valor / 10000; // 100 reais
    printf("%d nota(s) de R$ 100.00\n", notas);
    valor %= 10000;

    notas = valor / 5000; // 50 reais
    printf("%d nota(s) de R$ 50.00\n", notas);
    valor %= 5000;

    notas = valor / 2000; // 20 reais
    printf("%d nota(s) de R$ 20.00\n", notas);
    valor %= 2000;

    notas = valor / 1000; // 10 reais
    printf("%d nota(s) de R$ 10.00\n", notas);
    valor %= 1000;

    notas = valor / 500; // 5 reais
    printf("%d nota(s) de R$ 5.00\n", notas);
    valor %= 500;

    notas = valor / 200; // 2 reais
    printf("%d nota(s) de R$ 2.00\n", notas);
    valor %= 200;
    
    // Moedas
    printf("MOEDAS:\n");
    moedas = valor / 100; // 1 real
    printf("%d moeda(s) de R$ 1.00\n", moedas);
    valor %= 100;

    moedas = valor / 50; // 0.50 centavos
    printf("%d moeda(s) de R$ 0.50\n", moedas);
    valor %= 50;

    moedas = valor / 25; // 0.25 centavos
    printf("%d moeda(s) de R$ 0.25\n", moedas);
    valor %= 25;

    moedas = valor / 10; // 0.10 centavos
    printf("%d moeda(s) de R$ 0.10\n", moedas);
    valor %= 10;

    moedas = valor / 5; // 0.05 centavos
    printf("%d moeda(s) de R$ 0.05\n", moedas);
    valor %= 5;

    moedas = valor / 1; // 0.01 centavo
    printf("%d moeda(s) de R$ 0.01\n", moedas);

    return 0;
}

