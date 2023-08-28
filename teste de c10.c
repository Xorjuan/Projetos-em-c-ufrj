#include<stdio.h>
#include<Stdlib.h>
    int main(){

        int entrada;
        int advinha=rand()%100;
        printf("vamos bincar de zapzap adivinha\n");
        do
        {
            
            printf("digite seu numero mano\n");
            scanf("%d", &entrada);
               if(entrada==advinha){
            printf("voce acertou o numero adivinha paizao\n");
                }else if(entrada>advinha){
            printf("voce errou, tente um numero menor doidão\n");
                }else if(entrada<advinha){
            printf("voce errouuu, tente um numero maior seu maluco\n");
        }


        } while (entrada!=advinha);//enquanto for diferente vai continuar no loop...
         
     
     return 0;   

    }