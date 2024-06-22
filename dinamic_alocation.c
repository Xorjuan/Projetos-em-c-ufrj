#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int agrc, char *argv[]) {

  // aloacação dinamica de memoria
  int *p = malloc(sizeof(int));
  // verifica se a alocação foi bem sucedida
  assert(p != NULL);
  printf("(%d) endereço do ponteiro p: %p\n", getpid(), p);
  // nosso endereço de memoria da alocação dinamica
  *p = 0;
  // ele vai apontando e vai fazendo isso em um loop infinito
  while (1) {
    sleep(1);
    // o ponteiro aponta para o proximo valor no endereço de memoria
    *p = *p + 1;
    printf("(%d)valor do ponteiro p: %d\n", getpid(), *p);
  }
  return 0;
}
