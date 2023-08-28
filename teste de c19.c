#include<stdio.h>

    int main(){

        int n;
        scanf("%d", &n);
        
      
        int soma=0;
     for (int i = 0; i < n; i++)
     {
        soma+=i;
        printf("%d\n", soma);
     }
     
        return 0;
    }