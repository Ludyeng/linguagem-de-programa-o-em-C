#include <stdio.h>
 
int main() {
 
  int anos, meses, dias;
  
  //lê o valor da idade em dias
  scanf("%d", &dias);
  
  //calcular anos, meses e dias
  anos = dias/365;
  dias = dias %365;
  meses = dias/30;
  dias = dias %30;
  
  
  //Imprimir resultado
  printf("%d ano(s)\n", anos);
  printf("%d mes(es)\n", meses);
  printf("%d dia(s)\n", dias);
  
  
    return 0;
}
