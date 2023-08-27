#include<stdio.h>

    int main(){
        int entrada,tempo,distancia,distanciafinal=0;
        scanf("%d", &entrada);
        for(int x=0;x<entrada;x++){
            //como estamos trabalhando com dados no mesmo bloco nem precisamos de vetores 
            scanf("%d %d", &tempo,&distancia);
            //pode colar mais e igual para evitar a chance de lixo de memoria 
            distanciafinal=tempo*distancia;
        }
        printf("%d", distanciafinal);
    }