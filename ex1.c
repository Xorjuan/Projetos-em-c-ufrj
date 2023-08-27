#include<stdio.h>



  int main(){
    
    float a,b,c;
    scanf("%f %f %f", &a,&b,&c);

    if(a>=b+c){
        printf("nenhum triangulo é formado");
    }else if( (a*a)==(b*b)+(c*c)){ //prestar atenção na igualdade ou atribuição
        printf("triangulo retangulo");
    }else if((a*a)>(b*b)+(c*c)){
        printf("triangulo obtusangulo");
    }
    else if((a*a)<(b*b)+(c*c)){
        printf("triangulo acutangulo");
    }
    return 0;
  }