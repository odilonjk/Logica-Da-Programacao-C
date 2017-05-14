#include <stdio.h>
int main()
{
	float num1, num2, resultado;
	int op;
	printf("Digite o primeiro número: ");
	scanf("%f", &num1);
	printf("\nDigite o segundo número: ");
	scanf("%f", &num2);
	printf("\nEscolha uma opção!");
	printf("\n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
	scanf("%d", &op);

	switch (op)
	{
		case 1: resultado = num1 + num2;
			printf("\nA soma é: %.2f\n", resultado);
		break;
		case 2: resultado = num1 - num2;
			printf("\nA subtração é: %.2f\n", resultado);
		break;
		case 3: resultado = num1 * num2;
			printf("\nA multiplicação é: %.2f\n", resultado);
		break;
		case 4: resultado = num1 / num2;
			printf("\nA divisão é: %.2f\n", resultado);
		break;
		default: printf("\nOpção inválida...");
	}
	return(0);
}