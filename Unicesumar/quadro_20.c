#include <stdio.h>
int main()
{
	int num, ant, suc;

	printf("Digite um número: ");
	scanf("%d", &num);

	ant = num - 1;
	suc = num + 1;

	printf("\n Número digitado: %d", num);
	printf("\n Número anterior: %d", ant);
	printf("\n Número sucessor: %d\n", suc);
	return(0);
}