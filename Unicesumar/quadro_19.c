#include <stdio.h>
int main()
{
	int num1, num2, total;

	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	printf("\nDigite o segundo número: ");
	scanf("%d", &num2);

	// processando calculo
	total = num1 + num2;

	printf("\nA soma dos dois números é: %d\n", total);
	return(0);
}