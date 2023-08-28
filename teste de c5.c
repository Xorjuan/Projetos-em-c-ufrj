#include<stdio.h>

    int main(){
        int picao;
        printf("digite uma pica paizão\n");
        scanf("%d", &picao);
        switch(picao){
            case 1:
                printf("picão numero 1");
            break;
            case 2:
                printf("esculte from stars da rah band");
            break;
            case 3:
                printf("sair ?");
            default:
                printf("digite novamente");
            return 0;
        }
        return 0;
    }