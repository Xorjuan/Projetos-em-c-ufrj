#include<stdio.h>
#include<math.h>

int main(){

    float p=1050;
    float r=0.05;//igual a 5 porcento 
    int n=10;
    float a;//recebe valor da formula

    for (int i = 0; i < n; i++)
    {
        a=p*pow(1+r,i);
        printf("Ano%d, valor:%0.2f\n", i+1,a);
    }
    return 0;

}