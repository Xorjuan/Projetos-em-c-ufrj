#include<stdio.h>   

    int main(){

        int i,x,y,z,entrada;
        scanf("%d", &entrada);//entrada 
        y=0;
        x=0;
        z=1;

    for(i=2;i<entrada;i++){//parte que faz a recursão com a variante da entrada 
        y=x+z;
        x=z;
        z=y;
       printf("%d", z);//saida
    }


    return 0;

    }