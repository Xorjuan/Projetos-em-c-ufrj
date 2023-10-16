#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


typedef struct Caixa {
    int *itens;
    int tamanho;
} Caixa;

bool encontrarChave(Caixa *caixa, int chave) {
    for (int i = 0; i < caixa->tamanho; ++i) {
        if (caixa->itens[i] == chave || (caixa->itens[i] > 0 && encontrarChave(&(Caixa){caixa->itens + i + 1, caixa->itens[i]}, chave))) {
            return true;
        }
    }
    return false;
}

int main() {
    
    Caixa *caixa = (Caixa *)malloc(sizeof(Caixa));
    if (caixa == NULL) {
        fprintf(stderr, "Erro ao alocar memória para a caixa.\n");
        return 1;
    }

    
    caixa->itens = (int[]){1, 2, 2, 3, 4, 5, 2, 6, 7, 8, 1, 9, 2, 10, 11};
    caixa->tamanho = sizeof(caixa->itens) / sizeof(caixa->itens[0]);

    int chave = 11;

    printf("A chave %d está presente? %s\n", chave, encontrarChave(caixa, chave) ? "Sim" : "Não");

    
    free(caixa);

    return 0;
}
