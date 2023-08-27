#include<stdio.h>
#include<math.h>
    int main(){

        double a,c,b,delta,x2,x1;
        scanf("%lf%lf%lf", &a,&b,&c);

        delta=b*b-4*a*c;

        if(delta<0){
            printf("impossivel de calcular");
        }
        
        x2=(-b + sqrt(delta))/(2*a);
        x1=(-b - sqrt(delta))/(2*a);

        printf("%0.5lf", x2);
        printf("%0.5lf", x1);
    }