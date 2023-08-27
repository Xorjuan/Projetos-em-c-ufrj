#include<stdio.h>   
#include<string.h>
//programa incompleto falta rever a logica 

    int main(){

        int y,t,count=0;
        char a[987];
        char b[986];
        //numeros de casos 
        scanf("%d", &t);

        for(int i=0;i<t;i++){
            scanf("%s %s", &a[i],&b[i]);
        }
        y=strlen(a);
        for(int x=0;x<y;x++){
            
            int aux=strlen(a);
            int aux1=strlen(b);

            if(aux==aux1){
                count++;
                printf("%d", count);
            }

        }

        return 0;







        
    }