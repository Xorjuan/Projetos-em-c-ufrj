#include<stdio.h>

int main(){

    float salario,abono,nvsalario;

    scanf("%f", &salario);

    
     abono=200;
     nvsalario=salario+(salario*0.09);
    if(salario<3500){
        printf("%2f", nvsalario+abono);
    }else{
        printf("%f", nvsalario);
    }




}