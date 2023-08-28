#include<stdio.h>
#include<math.h>
    int main(){

        float a,b,c;
        printf("digite o lado dos triangulos A,B e C\n");
        scanf("%f %f %f", &a,&b,&c);

        if(a>=b&&b+c){
            printf("nennhum triangulo foi formado");
        }else if(a*a==b*b&&b*b+c*c){
            printf("triangulo retangulo");
        }else if(a*a>b*b&&b*b+c*c){
            printf("triangulo obtusangulo");
        }else if(a*a<b*b&&b*b+c*c){
            printf("triangulo acutangulo");
        }




    return 0;


    }