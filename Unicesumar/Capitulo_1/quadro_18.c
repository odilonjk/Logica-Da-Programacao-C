#include <stdio.h>
int main()
{
	int idade, ano;
	float altura;
	char nome[30];

	printf("Digite o seu nome: ");
	scanf("%s", nome);
	printf("\nDigite sua idade: ");
	scanf("%d", &idade);
	printf("\nDigite sua altura: ");
	scanf("%f", &altura);

	ano = 2017 - idade;

	printf("\nNome: %s", nome);
	printf("\nNascimento: %d", ano);
	printf("\nAltura: %.2f\n", altura);
	return(0);

}