#include<stdio.h>

    void troca(int *i, int *j){
        int temp;
        temp = *i;
        *i = *j;
        *j = temp;
    }

    int main(){
        int x,p;
        x=100;
        scanf("%d", &p);
        troca(&x,&p);
        printf("%d %d", x,p);
        return 0;
    }