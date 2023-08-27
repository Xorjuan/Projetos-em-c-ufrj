#include<stdio.h>
#include <stdlib.h>
//temos que usar long long pois o tam da entrada é muito grande e pode dar overflow 
    int main(){
        long long int x,y;
       while(scanf("%lld %lld", &y,&x)!=EOF){
        if(x>y){
        printf("%lld\n", x-y);
       }else{
        printf("%lld\n", y-x);
       }
    }
        return 0;
    }