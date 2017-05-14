#include <stdio.h>
int main()
{
	float deposito, taxa, rendimento, total;

	printf("Informe o valor do depósito: ");
	scanf("%f", &deposito);
	printf("\nInforme o valor da taxa de juros: ");
	scanf("%f", &taxa);

	rendimento = deposito * (taxa/100);
	total = deposito + rendimento;

	printf("\nO rendimento é: R$%.2f", rendimento);
	printf("\nO total é: R$%.2f\n", total);
	return(0);
}