#include<stdio.h>
#include<math.h>
    int main(){

        double a;
        scanf("%lf", &a);
        if(a>=0 && a<=25)
            printf("intervalo 0,25");
        else if(a>=25 && a<=50)
            printf("intervalo 25,50");
        else if(a>=50 && a<=75)
            printf("internvalo de 50,75");
        else if (a>=75 && a<=100)
            printf("intervalo de 75,100");
        else
            printf("fora do intervalo");                
    }