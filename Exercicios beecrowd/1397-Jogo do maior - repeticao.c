#include <stdio.h>

int main() {
    int N, somaJogadorA, somaJogadorB, A, B, i;
    
    
    do{
     scanf("%d", &N);
     
     somaJogadorA = 0;
     somaJogadorB = 0;
     
     if (N > 0){
         
     for (i = 1; i <= N; i++){
         
        scanf("%d %d", &A, &B);
        
        if(A > B){
            
            somaJogadorA += 1;
        }
        else if(B > A){
            
            somaJogadorB += 1;
        }
     }
     printf("%d %d\n", somaJogadorA, somaJogadorB);
     }
    }while(N > 0);

    return 0;
}
   
