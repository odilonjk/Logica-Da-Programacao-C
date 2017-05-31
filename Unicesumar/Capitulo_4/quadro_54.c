#include <stdio.h>
int main() {
  int vetorA[10];
  int i, j, troca;

  //  Capturando valores para o vetor
  for (i=0; i<10; i++)
  {
    printf("Digite o valor do %d elemento:\n", i+1);
    scanf("%d", &vetorA[i]);
  }
  for (i=0; i<9; i++)
  {
    for (j=0; j<10; j++)
    {
      if(vetorA[i] > vetorA[j])
      {
        troca = vetorA[i];
        vetorA[i] = vetorA[j];
        vetorA[j] = troca;
      }
    }
  }
  printf("Vetor decrescente:\n");
  for (i=0; i<9; i++) {
    printf("%d - ", vetorA[i]);
  }
  printf("%d\n", vetorA[9]);
  return 0;
}
