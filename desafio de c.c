#include <stdio.h>


int proximonumero(int vet[],int entrada,int y){
   for(int x=0;x<entrada;x++){
      if(vet[x]+vet[x+1]==y){
        printf("%d %d", vet[x], vet[x+1]);
      }
        
    }
    printf("não tem numero ");
    return 0;
}

int main(void) {
  int entrada;
  int vet[entrada];
  int y;
  printf("tamanho do vetor");
  scanf("%d", &entrada);
  printf("digite o x para ser igual");
  scanf("%d", &y);
  for(int i=0;i<entrada;i++){
    scanf("%d", &vet[i]);
  }
  
  proximonumero(vet,entrada,y);
       
      
    
  
  return 0;
}
