#include <stdio.h>
int main() {
  int vetorA[10];
  int i, acha, busca;
  for (i=0; i<10; i++)
  {
    printf("Digite o %d elemento:\n", i+1);
    scanf("%d", &vetorA[i]);
  }

  printf("Informe o elemento que deseja buscar:\n");
  scanf("%d", &busca);
  i=0;
  acha=0;
  while((acha == 0) && (i<10))
  {
    if(vetorA[i] == busca)
    {
      acha = 1;
    }
    else
    {
      i++;
    }
  }
  if(acha == 1)
    printf("O valor %d foi encontrado na posicao %d.\n", busca, i);
  else
    printf("O valor %d nao foi encontrado.\n", busca);
  return 0;
}
