#include<stdio.h>   

    int main(){
        //usando long int só para meme mas o problema pede int
        long int t,n,k,aux,aux1,soma;
        //entrada de casos 
        printf("digite o numero de entradas");
        scanf("%ld", &t);
        //entrada do n e k, que respectivamente são 
        //garafas cheias e vazias

        for(int i=0;i<t;i++){
            scanf("%ld %ld", &n,&k);
            //caso o numero de latinhas seja maior que as latas vazias
            if(n>k){
                //o aux recebe a divisão de n por k
                //o aux1 recebe o resto de n por k
                //depois somamos
                aux=n/k;
                aux1=n%k;
                soma=aux+aux1;
                printf("%ld", soma);
            }else{
                //se for menor soma recebe o valor de n 
                soma=n;
                printf("%ld", soma);
            }

        }
        return 0;
    }