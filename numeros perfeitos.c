#include<stdio.h>

    int main(){
        int a,aux,i;
        aux=0;//contador 
        scanf("%d", &a);
        for (i = 1; i < a; i++)
        {
            if (a%i==0)
            {
                aux+=i;//acrecenta o termo em que ele é divisivel
                printf("%d+", aux);
            }
            
        }
        if (aux==i)
        {
            printf("\n eh perfeito");
        }else{
            printf("\n não eh perfeito");
        }
        
        
        
        
        
        
        

        }
        
  