#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>

int ** alocarMatriz(int, int);
int ** lerMatriz(const char *filename, int *m, int *n);
void imprimirMatriz(int **, int, int);
void libertarMatriz(int **, int);
void somarLinhas(int **, int, int);

int main()
{
	int **M = NULL;
	int m = 0;
	int n = 0;
	
	M = lerMatriz("matriz.txt", &m, &n);
	imprimirMatriz(M, m, n);
	somarLinhas(M, m, n);
	somarColunas(M, m, n);
	libertarMatriz(M, m);
	printf("\n");
	
	return 1;
}

int ** alocarMatriz(int m, int n)
{
	int **M;
	int i;
	
	M = (int **)malloc(sizeof(int *) * m); // aloca um vetor de
	if(M == NULL)
	{
		printf("Memoria insuficiente.\n");
		exit(1);
	}
	for(i = 0; i < m; i++)
	{
		M[i] = (int *)malloc(sizeof(int) * n); // aloca cada uma
		if(M[i] == NULL)
		{
			printf("Memoria insuficiente.\n");
			exit(1);
		}
	}
}

int ** lerMatriz(const char *filename, int *m, int *n)
{
	int **MM;
	FILE *fp;
	int mm, nn, i, j;
	
	fp = fopen(filename, "r");
	if(fp == NULL)
	{
		printf("Erro na leitura do arquivo.\n");
		exit(1);
	}
	fscanf(fp, "%d %d", &mm, &nn);
	*m = mm;
	*n = nn;
	
	MM = alocarMatriz(mm, nn);
	
	for(i = 0; i < mm; i++)
	{
		for(j = 0; j < nn; j++)
		{
			fscanf(fp, "%d", &MM[i][j]);
		}
	}
	
	fclose(fp);
	return MM;
}

void imprimirMatriz(int **M, int m, int n)
{
	int i, j;
	
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d\t", M[i][j]);
		}
		printf("\n");
	}
}

void libertarMatriz(int **M, int m)
{
	int i;
	for(i = 0; i < m; i++)
	{
		free(M[i]); //Libertar memoria para cada linha (vetores)
	}
	free(M); //Libertar a matriz toda
}

void somarLinhas(int **M, int m, int n)
{
	int i, j, soma;
	
}

void somarColunas()
{
	
}
