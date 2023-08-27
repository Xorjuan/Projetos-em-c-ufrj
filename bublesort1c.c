#include<stdio.h>
#include <stdlib.h>
    //bublesort com malloc
    //metetodo  muito ineficiene

    //quando for usar vetor dinamico não precisa expressar o parenteses
    void bolhas(int *vet, int n){
        int aux,x,y;
        //algoritimo bublesort e percorrimento do vetor 
        for(x=0;x<n-1;x++){
            //algoritimo bublesort troca e comparação
            for(y=0;y<n-1;y++){
                if(vet[y]>vet[y+1]){
                    aux=vet[y];
                    vet[y]=vet[y+1];
                    vet[y+1]=aux;
                }
            }
        }
    }

    int main(){
        int numero,a,x;
        
        scanf("%d", &numero);
        int *vet=(int*)malloc(numero*sizeof(int));
        for(a=0;a<numero;a++){
            scanf("%d", &vet[a]);
        }
        
        bolhas(vet,numero);
        //o valor do vetor é mudado dps que chamamos a função
         for(x=0;x<numero;x++){
            printf("%d\n", vet[x]);
        }
    //deixa o vetor dim liberado pós o uso
       free(vet);
        return 0;
    }