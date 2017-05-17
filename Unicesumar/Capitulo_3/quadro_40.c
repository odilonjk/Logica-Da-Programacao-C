#include <stdio.h>
int main() {
  char nome[30];
  int i;

  printf("Informe o nome: ");
  scanf("%s", nome);
  i=0;

  while (i != 10) {
    printf("%d - %s\n", (i+1), nome);
    i++;
  }
  return 0;
}
