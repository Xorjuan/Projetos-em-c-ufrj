#include<stdio.h>

    int main(){

    int i,n,maximo;

    scanf("%d", &n);

    int a[n];//tamanho do vet

    for(i=0;i<n;i++){//prenche o vetor
        scanf("%d", &a[i]);
    }

    maximo=a[0];//não eh necessario para o programa....

    for(i=1;i<n;i++){
        if(a[i]>maximo){
            maximo=a[i];//vai atualizando de forma constante o valor maximo
        }
    }

    printf("%d", maximo);

    return 0;

    }