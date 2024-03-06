#include<stdlib.h>
#include <stdio.h>
#include <locale.h>

void primos(long int);

int main()
{	
	long int N;
	
	printf("Introduza um numero: ");
	scanf("%ld", &N);
	
	primos(N);
	
	return 1;
}

void primos(long int N)
{
	long int aux = 0;
	
	for(long int i = 2; i < N; i++)
	{
		if(N % i == 0 && N != i)
		{
			aux++;	
		}
	}	
	
	if(aux != 0)
	{
		printf("\nO numero %ld nao e primo.\n", N);
	}
	else
	{
		printf("\nO numero %ld e primo.\n", N);
	}
}
