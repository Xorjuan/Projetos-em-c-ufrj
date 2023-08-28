#include<stdio.h>   

    int main(){

        double entrada;
        scanf("%lf", &entrada);
        double aux=0;

        if(entrada<10){
            printf("saida %0.2lf ",entrada*7.0);
          
        }if(entrada>11&&entrada<30){
            printf("saida %0.2lf ",entrada*8.00);
 
        }if(entrada>31&&entrada<100){
            printf("%0.2lf", entrada*10.00);
       
        }if(entrada>101){
            printf("saida %0.2lf",entrada*12.00); // pensar amanha com mais calma e resolver

           
        }
            

        return 0;
    }