#include <stdio.h>

int main()
{
    int tipoCombustivel, alcool=0, gasolina=0, diesel=0;
    
    
    do{
      
      scanf("%d", &tipoCombustivel);
      
      if(tipoCombustivel == 1){
          alcool ++;
      }
      else if(tipoCombustivel == 2){
          gasolina ++;
      }
      else if(tipoCombustivel == 3){
          diesel ++;
      }
      
        
    }while(tipoCombustivel != 4);
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}

