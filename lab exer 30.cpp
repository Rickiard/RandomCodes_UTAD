#include<stdlib.h>
#include<stdio.h>

#define N 4
#define M 4

void lermatrix(int[M][N]);
int lermatrix_File(int m[N][M], const char *filename);
void mostrarmatrix(int m[N][M]);

int main()
{
	int m[N][M];
	
	if(lermatrix_File(m, "Matriz.txt") == 1)
	{
		mostrarmatrix(m);
	}
	else
	{
		printf("ERRO na leitura do ficheiro\n");
	}
		
	return 0;
}

int lermatrix_File(int m[N][M], const char *filename)
{
	FILE* file;
	
	if((file = fopen(filename, "r")) != NULL)
	{
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				fscanf(file, "%d", &m[i][j]);
			}
			fscanf(file, "\n");
		}
		fclose(file);
		return 1;
	}
	return -1;
}

void mostrarmatrix(int m[N][M])
{
	for(int i = 0; i < N; i++)
	{
		for(int o = 0; o < M; o++)
		{
			printf("\nm[%d][%d] = %d", i, o, m[i][o]);
		}
	}
}

