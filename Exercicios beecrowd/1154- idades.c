#include <stdio.h>

int main()
{
  double idade,somaIdade=0,cont;
  double media;
  
  
  do{
     
     scanf("%lf",&idade);
     
     if(idade > 0){
         
         somaIdade = somaIdade + idade;
         cont ++;
     }
      
  }while (idade > 0);
  
  media = somaIdade / cont;
  
  printf("%.2lf\n",media);
    
    

    return 0;
}
