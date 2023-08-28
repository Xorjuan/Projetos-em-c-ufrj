#include<stdio.h>
#include<string.h>
#include<stdlib.h>
    int main(){
        char entrada[89];
        int cont=0;
        char senha[]="1234";

        printf("digite sua senha por favor.\n");
        
        do{
       
        //fgets(entrada, 89,stdin);//agora posso por frases 
        scanf("%s", &entrada);
        if(strcmp(entrada,senha)==0){
            printf("bem vindo ao windows xp :)\n");
            break;
        }else{
            printf("senha errada voce tem 3 tentativas\n");
            cont++;
        }
      
        
        }while(cont<3);

        if (cont==3)
        {
            printf("programa vai se encerrar kkkkkkkkkk");
        
        }


        return 0; 
    }