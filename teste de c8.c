#include<stdio.h>

    int main(){

        float pesoideal,altura1,altura2;
        int escolha;
        printf("digite 1 para homens e 2 para culer\n");
        scanf("%d", &escolha);
        switch(escolha){
            case 1:
            printf("altura\n");
            scanf("%f", &altura1);
            pesoideal=(72.7*altura1)-58;
            printf("gordão tu tem que ficar com esse peso %0.2f\n", pesoideal);
            break;
            case 2:
            printf("altura\n");
            scanf("%f", &altura2);
            pesoideal=(62.1*altura2)-58;
            printf("culer ta gordona olha teu peso kkkkk %0.2f", pesoideal);
        }




        return 0;
    }