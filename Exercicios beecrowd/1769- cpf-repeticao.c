#include <stdio.h>
#include <string.h>

int main() {
    char cpf[15]; // Formato xxx.xxx.xxx-xx

    while (scanf("%s", cpf) != EOF) {
        int a[11]; // Array para armazenar os 11 dígitos do CPF

        // Extrai os dígitos e converte para inteiros
        a[0] = cpf[0] - '0';
        a[1] = cpf[1] - '0';
        a[2] = cpf[2] - '0';
        a[3] = cpf[4] - '0';
        a[4] = cpf[5] - '0';
        a[5] = cpf[6] - '0';
        a[6] = cpf[8] - '0';
        a[7] = cpf[9] - '0';
        a[8] = cpf[10] - '0';
        a[9] = cpf[12] - '0'; // Primeiro dígito verificador
        a[10] = cpf[13] - '0'; // Segundo dígito verificador

        // Calcula o primeiro dígito verificador (b1)
        int soma1 = 0;
        for (int i = 0; i < 9; i++) {
            soma1 += a[i] * (i + 1);
        }
        int b1 = soma1 % 11;
        if (b1 == 10) b1 = 0;

        // Calcula o segundo dígito verificador (b2)
        int soma2 = 0;
        for (int i = 0; i < 9; i++) {
            soma2 += a[i] * (9 - i);
        }
        int b2 = soma2 % 11;
        if (b2 == 10) b2 = 0;

        // Verifica a validade do CPF
        if (b1 == a[9] && b2 == a[10]) {
            printf("CPF valido\n");
        } else {
            printf("CPF invalido\n");
        }
    }

    return 0;
}