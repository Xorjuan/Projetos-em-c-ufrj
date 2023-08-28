#include<stdio.h>
#include<math.h>

    int main(){

        float peso,altura,imc;
        printf("digite peso e respectivamente a altura\n");
        scanf("%f %f", &peso, &altura);
        imc=peso/pow(altura,2);
      
        if(imc<18.5){
            printf("destruido");
        }else if (imc>18.5&&imc<25){
          printf("peso ideal");
        }else if (imc>25&&imc<30){
          printf("gordinho I");
        }else if(imc>30&&imc<35){
          printf("gordinho II");
        }else{
          printf("brenoso");
        }
    }