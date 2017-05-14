#include <stdio.h>
#include <math.h>
int main() 
{
	int num;
	float raiz;

	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	if(num % 2 == 0)
	{
		raiz = sqrt(num);
		printf("\nA raiz quadrada de %d é %.3f\n", num, raiz);
	}
	return(0);
}