#include<stdio.h>

    int main(){
        int entrada;
        scanf("%d", &entrada);
        if(entrada %2==0){
            printf("ele eh par\n");
            if(entrada %4==0){
                printf("ele eh par e divisivel por 4\n");
            }else{
                printf("não eh divisivel por 4");
            }
        }else{
            printf("não é par\n");
        }
        return 0;
    }