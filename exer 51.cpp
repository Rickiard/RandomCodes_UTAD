//exer 51

#include <stdlib.h>
#include <stdio.h>

void LerVetor(int* vetor, int tamanho);
void MostrarVetor(int* vetor, int tamanho);

int main()
{
	int tamanho;
	
	printf("Introduza o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	int vetor[tamanho];
	
	LerVetor(vetor, tamanho);
	
	MostrarVetor(vetor, tamanho);
	
	return 1;
}

void LerVetor(int* vetor, int tamanho)
{	
	for(int i = 0; i < tamanho; i++)
	{
		printf("\nIntroduza o valor do vetor[%d]: ", i);
		scanf("%d", &vetor[i]);
	}
}

void MostrarVetor(int* vetor, int tamanho)
{
	for(int i = 0; i < tamanho; i++)
	{
		printf("\nVetor[%d] = %d\n", i, vetor[i]);
	}
}
