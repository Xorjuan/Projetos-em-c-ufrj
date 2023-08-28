#include<stdio.h>

    int main(){

        int a,b,c,d;

        scanf("%d %d %d %d", &a,&b,&c,&d);
        
        if(a<b&&b<c){
            printf("ordem crescente");
        }else if(a>b&&b>c){
            printf("ordem descerente");
        }



        return 0;
    }