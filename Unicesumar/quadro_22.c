#include <stdio.h>
int main() 
{
	float nota1, nota2, nota3, nota4, media;
	printf("Qual a primeira nota? ");
	scanf("%f", &nota1);
	printf("\nQual a segunda nota? ");
	scanf("%f", &nota2);
	printf("\nQual a terceira nota? ");
	scanf("%f", &nota3);
	printf("\nQual a quarta nota? ");
	scanf("%f", &nota4);

	media = (nota1 + nota2 + nota3 + nota4) / 4;

	printf("\nMédia das quatro notas: %.1f\n", media);
	return(0);
}