#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N, fat;
	
	printf("Insira o fatorial: ");
	scanf("%d!", &N);
	
	int aux = N;
	
	for(int i = N - 1; i >= 1; i--)
	{
		fat = aux * i;
		aux = fat;
	}
	
	printf("\nFatorial: %d\n", aux);
	
	return 1;
}
