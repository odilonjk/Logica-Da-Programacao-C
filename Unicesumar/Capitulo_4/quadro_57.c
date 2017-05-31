#include <stdio.h>
#include <string.h>

int main()
{
  char nome[80];
  int tamanho;
  printf("Qual é o seu nome?\n");
  gets(nome);
  tamanho = strlen(nome);
  printf("O nome tem %d letras.\n", tamanho);
  return 0;
}
