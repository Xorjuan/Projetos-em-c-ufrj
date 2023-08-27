#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>//podemos trocar o bool por 0 e 1


int crescente(int *vetor, int entrada){ //recebe o tamanho do vetor e dados
    for(int i=0;i<entrada;i++){ //tem que usar menos 1 para não dar problemas no "for" mas vc tá numa prova entao foda-se.
    if(vetor[i]> vetor[i+1] ){//se vetor for maior que o proximo valor do array ele não é crescente então return 0.
      printf("%d", vetor[i]);
      return 0; 
    }
      
  }
  return 1;//se for maior retorna 1
}

int main(){
  int tamanho;
  //entrda do tamanho do vetor
  scanf("%d", &tamanho); 
  //define um "tamanho" de vetor 
  int *vetor=malloc(tamanho*sizeof(int)); 

  for(int i=0; i<tamanho; i++){
    //coloca os dados do vetor
    scanf("%d", &vetor[i]); 
  }
    //chama a fx para ver se é crescente or n
  if(crescente(vetor, tamanho)){ 
    printf("\n eh crescente ");
  }else{
    printf("\n falso");
  }
  free(vetor);
  return 0;
}
  
  
  
  
  
      
  
