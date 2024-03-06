#include <stdio.h>
#include <stdlib.h>

void limpa_vector(float *, int tamanho);

int main()
{
	int n;
	
	printf("Introduza o tamanho do vetor: ");
	scanf("%d", &n);
	
	float vetor[n];
	
	for(int i = 0; i < n; i++)
	{
		printf("\nIntroduza o valor %d: ", i + 1);
		scanf("%d", &vetor[i]);	
	}
	
	printf("\n");
	
	limpa_vector(vetor, n);
	
	return 1;
}

void limpa_vector(float *vetor, int n)
{
	for(int i = 0; i < n; i++)
	{
		vetor[i] = 0;
		printf("%d ", vetor[i]);
	}
	
	printf("\n");
}
