#include<stdio.h>

    int main(){
        float entrada;
        float abono=200;

        scanf("%f", &entrada);
        float reajuste=entrada*0.09;
        if(reajuste<3500){
            printf("valor do reajuste foi %0.2f", reajuste+abono+entrada);//somar com o salario original para vetr quanto aumentou 
        }else{
            printf("valor do reajuste foi %0.2f", reajuste+entrada);
        }
    }