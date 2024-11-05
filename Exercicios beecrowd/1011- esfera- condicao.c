#include <stdio.h>
 
int main() {
 
    double volume,raio, pi=3.14159;
    
    //Lê as variaveis flutuantes
    scanf("%lf", &raio);
    
    //volume  
    volume =(4/3.0) * pi * (raio* raio*raio);
    
    //imprimir
    printf("VOLUME = %.3lf\n", volume);
 
    return 0;
}
