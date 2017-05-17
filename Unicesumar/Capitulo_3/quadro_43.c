#include <stdio.h>
int main() {
  float nota, soma, media;
  int cod, i, nnota, naprovado, nreprovado;

  naprovado = 0;
  nreprovado = 0;

  printf("Informe a quantia de notas do curso: ");
  scanf("%d", &nnota);

  do
  {
    printf("Informe o código do aluno: ");
    scanf("%d", &cod);
    soma = 0;

    if (cod != 0)
    {

      for (i=1;i<=nnota;i++)
      {
        printf("Informe a %dª nota: ", i);
        scanf("%f", &nota);
        soma += nota;
      }
      media = soma/nnota;

      if (media >= 6)
        naprovado++;
      else
        nreprovado++;

    }
  } while(cod != 0);

  printf("Total de aprovados: %d\n", naprovado);
  printf("Total de reprovados: %d\n", nreprovado);

  return 0;
}
