#include<stdio.h>

int main(){
    int  A, B, C, D, E,T, count=0;

    scanf("%d", &T);
    scanf("%d%d%d%d%d", &A,&B,&C,&D,&E);
    
    int vet[5]={A,B,C,D,E};
   
    
   for (int i = 0; i < 5; i++)
   {
        if (vet[i]==T)
        {
           count++; //VARIAVEL DE ARMAZENAGEM 
        }
   }
        printf("%d", count);

   return 0;
}