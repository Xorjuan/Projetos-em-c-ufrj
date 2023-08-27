#include<stdio.h>
//bublesort em c
    int main(){
        int num,i,aux;
        //define tamanho do vet
        scanf("%d", &num);
        int vet[num];
        //prenche o vetor definido
        for (i = 0; i < num; i++){ 
            scanf("%d", &vet[i]);
        }
        //algoritimo de ordenarção
        //temos que por -1 pois estamos trocando com o proximo termo
        //e como ponto de parada vamos até o penultimo termo
        //precisamos de dois fors e um if para atualização no bublesort
        // ou podemos fazer for(int j=1;j<num;j++)
    for(int j=0;j<num-1;j++){ 
        for (i = 0; i <num-1; i++){
            //vai atualizando e comparando se vet na posição 1 e maior q na posicão 2
            //com o passar do loop de repetição 
            //fazendo a troca de valores com o auxiliar

            if(vet[i]>vet[i+1]){
                //comparação de vet posi 1 com posi 2 se for maior atualiza o vet e vai fazendo
                //ate o final e vai fazendo a manipulação de troca 
                aux=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=aux;
            }
        }

    }
        //saida 
        for(i=1;i<num;i++){
        printf("%d\n", vet[i]);

        }
        
        
    }