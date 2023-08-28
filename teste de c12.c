#include<stdio.h>

int main(){
    int entrada,i;
    scanf("%d", &entrada);

   if(entrada<1){
    printf("não eh primo");
   }

   for (i = 2; i < entrada; i++)
   {
    if(entrada%i==0){//não é div por 0
            printf("não eh primo");
        break;//usa-se para não ter varios resultados na saida
        }
    }if(entrada==i){ //ele eh div por ele mesmo ou por 1
            printf("eh primo");
            
   
        
   }
   

    return 0;
}