#include <stdio.h>
int main()
{
  int vetorA[10];
  int i;
  for (i=0; i<10; i++)
  {
    printf("Digite o %d elemento do vetor:\n", i+1);
    scanf("%d", &vetorA[i]);
  }
  printf("\nVetor preenchido.\n");
  for (i=0; i<10; i++) {
    printf("%d posicao: %d\n", i+1, vetorA[i]);
  }
  return 0;
}
