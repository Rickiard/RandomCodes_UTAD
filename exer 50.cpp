//exer 50

#include <stdlib.h>
#include <stdio.h>

int main()
{
	int tamanho, soma, aux = 0;
	printf("Introduza o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	int vetor[tamanho];
	
	for(int i = 0; i < tamanho; i++)
	{
		printf("\nIntroduza o valor do vetor[%d]: ", i);
		scanf("%d", &vetor[i]);
		
		if(i % 2 == 0)
		{
			soma = aux + vetor[i];
			aux = soma;
		}
	}
	
	printf("\nA soma dos vetores de posicao impar e de %d\n", soma);
	
	return 1;
}
