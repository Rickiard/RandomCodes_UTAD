#include<stdio.h>

int main()
{
	int valor;
	
	printf("Introduza o valor:");
	scanf("%d", &valor);
	
	if(valor % 2 == 0)
	{
		printf("\nPar\n");
	}
	else
	{
		printf("\nImpar\n");
	}
	
	return 1;
}
