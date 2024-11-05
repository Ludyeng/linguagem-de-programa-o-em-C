#include <stdio.h>
 
int main() {
 
    double area, pi=3.14159, raio;
    
    //lê as variaveis
    scanf("%lf", &raio);
    
    //soma
    area = (raio * raio) * pi;
    
    //imprimir
    printf("A=%.4lf\n", area);
 
    return 0;
}
