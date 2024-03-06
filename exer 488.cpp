//exer 48

#include <stdlib.h>
#include <stdio.h>

int main()
{
	int tamanho;
	printf("Introduza o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	int vetor[tamanho];
	
	for(int i = 0; i < tamanho; i++)
	{
		printf("\nIntroduza o valor do vetor[%d]: ", i);
		scanf("%d", &vetor[i]);
	}
	
	for(int i = 0; i < tamanho; i++)
	{
		printf("\nvetor[%d] = %d\n", i, vetor[i]);
	}
	
	return 1;
}
