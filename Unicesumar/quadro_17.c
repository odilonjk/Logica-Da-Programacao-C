#include <stdio.h>

int main()
{
	// declaração das variaveis
	int idade, ano;
	float altura;
	char nome[30];

	// entrada de dados
	printf("Digite o seu nome: ");
	// leitura do nome
	scanf("%s", nome);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	// processamento
	// calculo do ano de nascimento
	ano = 2017 - idade;

	// saida de dados
	printf("\nO nome: %s\n", nome);
	printf("A altura: %f\n", altura);
	printf("A idade: %d\n", idade);
	printf("Ano de nascimento: %d\n", ano);
	return 0;
}