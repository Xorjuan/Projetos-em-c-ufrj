#include<stdio.h>

    int main(){
    int entrada;
    int aux=0;
    do{
    scanf("%d", &entrada);    
    int fahrenheit=(entrada*9/5)+32;//formula de conversão em faharenhig
    printf("%d\n", fahrenheit);
    aux++;
    }while(aux<5);//cont para a pessoar por mais de uma vez
    return 0;
    }
    