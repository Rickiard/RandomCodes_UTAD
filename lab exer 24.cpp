#include<stdlib.h>
#include<stdio.h>

void Ler(int*); 
int soma(int*);
int media(int*);
int max(int*);
int min(int*); 

#define N 5

int main()
{
	int num[N];
	
	Ler(num);
	
	printf("\nSoma = %d\n\nMedia = %d\n\nMaximo = %d\n\nMinimo = %d\n", soma(num), media(num), max(num), min(num));

	return 1;
}

void Ler(int* num)
{
	for(int i = 0; i < N; i++)
	{
		printf("\nInsira o valor %d: ", i + 1);
		scanf("%d", &num[i]);
	}
}

int soma(int* num)
{
	int soma = 0;
	
	for(int i = 0; i < N; i++)
	{
		soma+= num[i];
	}
	
	return soma;
}

int media(int* num)
{
	int media = soma(num) / N;
	
	return media;
}

int max(int* num)
{
	int max = num[0];
	
	for(int i = 0; i < N; i++)
	{
		if(max < num[i])
		{
			max = num[i];
		}
	}
	
	return max;
}

int min(int* num)
{
	int min = max(num);
	
	for(int i = 0; i < N; i++)
	{
		if(min > num[i])
		{
			min = num[i];
		}
	}
	
	return min;	
}
