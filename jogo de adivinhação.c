#include<stdio.h>

int logicajooj(){

    maquina=rand()%100;
 
}
int main(){
    int roll(logicajooj);

    int jogador1,maquina;
    scanf("%d", &jogador1);
    if(jogador==maquina){
        printf("voce acertou paizão");
    }else if(jogador>maquina){
        printf("voce errou, tente um numero menor");
        printf("tentar novamente ?, 1 para sim, 0 para não");
        if(jogador1==1){
            roll;
        }else{
            break;
        }
    }else if(jogador1<maquina){
        printf("voce errou, tente um numero maior");
        printf("tentar novamente ?, 1 para sim, 0 para não");
        if(jogador1==1){
            roll;
        }else{
            break;
        }
    }
    return 0;
}