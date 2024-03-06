#include<stdlib.h>
#include<stdio.h>
#include<time.h>

#define N 10
#define M 10

void lermatrix(int m[N][M]);
void somaline(int m[N][M]);
void somacolumn(int m[N][M]);

int main()
{
	int m[N][M];
	srand(time(NULL));
	lermatrix(m);
	somaline(m);
	somacolumn(m);
	
	return 0;
}

void lermatrix(int m[N][M])
{
	int i, o;
		
	for(i = 0; i < N; i++)
	{
		for (o = 0; o < M; o++)
		{
			m[i][o] = rand() % 10; 
			printf("m[%d][%d] = %d", i, o, m[i][o]);
		}
	} 	
}

void somaline(int m[N][M])
{
	int line[N], aux[N];
	
	for(int l = 0; l < M; l++)
	{
		aux[l] = 0;
	}
	
	for(int i = 0; i < N; i++)
	{
		for (int o = 0; o < M; o++)
		{
			line[i] = aux[i] + m[i][o];
			aux[i] = line[i];	
		}	
	}
	
	for(int i = 0; i < N; i++)
	{
		printf("A soma das entradas da linha %d: %d\n\n", i + 1, aux[i]);
	}
}

void somacolumn(int m[N][M])
{
	int column[M], aux[M];
	
	for(int l = 0; l < M; l++)
	{
		aux[l] = 0;
	}
	
	for(int i = 0; i < M; i++)
	{
		for (int o = 0; o < N; o++)
		{
			column[i] = aux[i] + m[o][i];
			aux[i] = column[i];
		}	
	}
	
	for(int i = 0; i < M; i++)
	{
		printf("A soma das entradas da coluna %d: %d\n\n", i + 1, aux[i]);
	}
}

