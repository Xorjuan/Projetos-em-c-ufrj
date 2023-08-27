#include<stdio.h>   

    int main(){
        
        int A,B,C;
        //A entrada tem o eof pois o problema solicita isso mas pode fazer sem, a logica é a mesma
        //usar o eof dentro do w
        while(scanf("%d %d %d", &A,&B,&C)!=EOF){ 
        if(A!=B&&A!=C){
            printf("A\n");
        }else if(B!=A&&B!=C){
            printf("B\n");
        }else if(C!=B&&C!=A){
            printf("C\n");
        }else{
            printf("*\n");
        }

        }
        
        return 0;
    }