#include<stdio.h>

    int main(){

        int fatorial, entrada;

        fatorial=1;
        scanf("%d", &entrada);//entrada
        for(int i=1;i<entrada;i++){//como definimos fatorial de 1, temos que iniciar com 1 sempre
            fatorial*=i;//fatorial recebe i e multiplica por ele
            printf("o fatorial de %d eh %d\n", entrada,fatorial);//saida  
        }


        return 0;
    }