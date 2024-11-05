#include <stdio.h>
 
int main() {
 
   int codigo1, numero1, codigo2, numero2;
   double valor1, valor2, total;
   
   //lê as variaveis flutuantes peça 1
   scanf("%d %d %lf", &codigo1, &numero1, &valor1);
   
   //lê as variaveis flutuantes peça 2
   scanf("%d %d %lf", &codigo2, &numero2, &valor2);
   
   //total
   total = (numero1 * valor1) + (numero2 * valor2);
   
   //imprimir
   printf("VALOR A PAGAR: R$ %.2lf\n",total);
   
 return 0;
}
