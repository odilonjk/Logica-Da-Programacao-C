#include <stdio.h>
#include <math.h>
int main()
{
	int quadrado, num;
	float raiz;
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	if(num % 2 == 0)
	{
		raiz = sqrt(num);
		printf("\nA raiz quadrada de %d é %.3f\n", num, raiz);
	}
	else 
	{
		quadrado = num * num;
		printf("\n%d ao quadrado é %d\n", num, quadrado);
	}
	return(0);
}