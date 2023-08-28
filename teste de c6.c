#include<stdio.h>

    int main(){

        int mes;
        scanf("%d", &mes);
        int ano;
        switch(mes){
            case 1:
            printf("janeiro 31 dias");
            break;            
            case 2:
            printf("digite o ano para saber se é bisexto\n");
            scanf("%d", &ano);
                if(ano %4==0&&ano%100!=0||ano%400==0){//prestar a atenção com a instrução do ano bi sex to
                    printf("fevereiro tem 31 dias");
                }else{
                    printf("fevereiro tem 28 dias");
                }
           break;
            case 3:
            printf("março 30 dias");
            break;
            //o programa vai até dezembro mas o mais importante é fevereiro.
        }

        



        return 0;
    }