//insertsort e shellsort
#include<stdio.h>
#include <stdlib.h>

//insertsort faz a leitura com dois loops um de forma crescente e outra de forma descrecente 

void shellsort(int *vet, int n){
    //chave serve para copiarmos os elementos do vet 
    int i,j,chave;
    for (i = 1; i < n; i++){
        chave=vet[i];
        j=i-1;
        while (j>=0){
            vet[j+1]=vet[j];
            j--;
        }
        vet[i+1]=chave;
    }
    

}

int main(){
    int *vetor;
    int numero;
    scanf("%d",&numero);
    vetor=(int*)malloc(numero*sizeof(int));
    for(int i=0;i<numero;i++){
        scanf("%d", &vetor[i]);
    }
    shellsort(vetor,numero);
    
    for(int k=0;k<numero;k++){
        printf("%d", vetor[k]);
    }
    return 0;
}