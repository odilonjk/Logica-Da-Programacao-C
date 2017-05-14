#include <stdio.h>
#include <math.h>
int main()
{
	float num1, num2, total;
	printf("Informe o primeiro número: ");
	scanf("%f", &num1);
	printf("\nInforme o segundo número: ");
	scanf("%f", &num2);
	total = pow(num1, num2);
	printf("\n%.2f elevado a %.2f é: %.2f\n", num1, num2, total);
	return(0);
}