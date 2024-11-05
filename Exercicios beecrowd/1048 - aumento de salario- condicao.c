#include <stdio.h>

int main() {
    double salario, novo_salario, reajuste;
    int percentual;

    // Lê o salário do funcionário
    scanf("%lf", &salario);

    // Determina o percentual de reajuste baseado no salário
    if (salario <= 400.00) {
        percentual = 15;
    } else if (salario <= 800.00) {
        percentual = 12;
    } else if (salario <= 1200.00) {
        percentual = 10;
    } else if (salario <= 2000.00) {
        percentual = 7;
    } else {
        percentual = 4;
    }

    // Calcula o valor do reajuste e o novo salário
    reajuste = salario * percentual / 100;
    novo_salario = salario + reajuste;

    // Exibe os resultados
    printf("Novo salario: %.2lf\n", novo_salario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %%\n", percentual);

    return 0;
}

