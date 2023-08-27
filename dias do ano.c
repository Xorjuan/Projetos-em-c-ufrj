#include<stdio.h>

    int main(){

        int ano,numero;
        scanf("%d", &numero);
        switch(numero){
            case 1:
            printf("janeiro tem 31 dias");
            break;
            case 2:
            scanf("%d", &ano);
            
            if(ano%4==0 && ano%100==0!=400){
                printf("fevereiro tem 30 dias");
            }else{
            printf("fevereiro tem 28 dias");
            }
            break;
            case 3:
            printf("março tem 31 dias");
            break;
            case 4:
            printf("abril tem 30 dias");
            break;
            case 5:
            printf("maio tem 31 dias");
            break;
            case 6:
            printf("junho tem 30 dias");
            break;
            case 7:
            printf("julho tem 31 dias");
            break;
            case 8:
            printf("agosto tem 31 dias");
            break;
            case 9:
            printf("setembro tem 30 dias");
            break;
            case 10:
            printf("outubro tem 31 dias");
            break;
            case 11:
            printf("novembro tem 30 dias");
            break;
            case 12:
            printf("dezembro tem 31 dias");
            break;
        }

            return 0;
        }





      
