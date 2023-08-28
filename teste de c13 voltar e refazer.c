#include <stdio.h>

int main() {
  int n, i, j, soma = 0;

  printf("Digite um número: ");
  scanf("%d", &n);//entrada

  for (i = 2; i < n; i++) {
    int ehPrimo = 1;//entender o pq disso
    for (j = 2; j * j <= i; j++) {
      if (i % j == 0) {//resto de i e j para a separação de primos 
        ehPrimo = 0;//pq disso
        break;
      }
    }

    if (ehPrimo) {
      soma += i;//chama a função no if e soma
    }
  }

  printf("A soma dos números primos menores que %d é %d.\n", n, soma);//saida

  return 0;
}
