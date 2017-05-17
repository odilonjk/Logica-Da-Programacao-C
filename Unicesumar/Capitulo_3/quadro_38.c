#include <stdio.h>
int main() {
  char nome[30];
  int i;

  printf("Informe um nome: ");
  scanf("%s", nome);

  for (i=1; i<=10; i++) {
    printf("%s\n", nome);
  }
  return 0;
}
