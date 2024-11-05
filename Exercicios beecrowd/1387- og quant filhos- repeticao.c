#include <stdio.h>

int main()
{
    int L,R,somaFilhos=0;
    
    do{
      
        scanf("%d",&L);
        scanf("%d",&R); 
        
        if((L > 0) && (R > 0) ){
            
            somaFilhos = L + R;
            printf("%d\n", somaFilhos);
        }
        
        
    }while((L !=0) && (R!= 0));
        
        
    
    
    return 0;
}

   
