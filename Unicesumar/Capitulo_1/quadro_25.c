#include <stdio.h>
int main()
{
	float base1, base2, altura, area;
	
	printf("\nInforme o valor da base maior: ");
	scanf("%f", &base1);
	printf("\nInforme o valor da base menor: ");
	scanf("%f", &base2);
	printf("\nInforme o valor da altura: ");
	scanf("%f", &altura);

	area = ((base1 + base2) * altura) / 2;

	printf("\nA area do trapezio é: %.2f\n", area);
	return(0);
}