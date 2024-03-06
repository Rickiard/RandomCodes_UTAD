#include<stdlib.h>
#include<stdio.h>

#define N 3
#define M 3

void lermatrix(int m[N][M], int);
void somaline(int m[N][M]);
void somacolumn(int m[N][M]);
void somadiagonal(int m[N][M]);

int main()
{
	int m[N][M], n = 1;
	
	for(int i = 0; i < 3; i++)
	{
		for(int o = 0; o < 3; o++)
		{
			m[i][o] = 0;
		}
	}
	
	for(int i = 0; i < 5; i++, n++)
	{
		if(n % 2 != 0)
		{
			printf("Vez do Jogador 1");
		}
		else
		{
			printf("Vez do Jogador 2");
		}
		
		lermatrix(m, i);
		somaline(m);
		somacolumn(m);
		somadiagonal(m);
	}

	
	return 0;
}

void lermatrix(int m[N][M], int i)
{
	int j, o;
	
	printf("\n\nIntroduza as coordenadas: ");
	scanf("%d, %d", &j, &o);	
	
	j = j - 1;
	o = o - 1;
	
	if(m[j][o] == 0)
	{
		if(i % 2 != 0)
		{
			m[j][o] = -1;
		}
		else
		{
			m[j][i] = 1;
		}
	}
	else
	{	
		printf("\nEscolha Novamente\n");
		lermatrix(m, i);
	}
	
	printf("%d %d %d\n%d %d %d\n%d %d %d\n\n", m[0][0], m[0][1], m[0][2], m[1][0], m[1][1], m[1][2], m[2][0], m[2][1], m[2][2]);
	
	j = 0;
	i = 0;
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
		if(aux[i] == -3)
		{
			printf("Jogador 1 Venceu!");
		}
		
		if(aux[i] == 3)
		{
			printf("Jogador 2 Venceu!");
		}
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
		if(aux[i] == -3)
		{
			printf("Jogador 1 Venceu!");
		}
		
		if(aux[i] == 3)
		{
			printf("Jogador 2 Venceu!");
		}
	}
}

void somadiagonal(int m[N][M])
{
	int diagonal[M], aux1[M], aux2[M];
	
	for(int l = 0; l < M; l++)
	{
		aux1[l] = 0;
		aux2[l] = 0;
	}
	for (int o = 0; o < N; o++)
	{
		diagonal[o] = aux1[o] + m[o][o];
		aux1[o] = diagonal[o];	
	}
	
	for (int o = 0, i = 2; o < N; o++, i--)
	{
		diagonal[o] = aux1[o] + m[o][i];
		aux1[o] = diagonal[o];	
	}
	
	for(int i = 0; i < M; i++)
	{
		if(aux1[i] == -3 || aux2[i])
		{
			printf("Jogador 1 Venceu!");
		}
		
		if(aux1[i] == 3 || aux2[i])
		{
			printf("Jogador 2 Venceu!");
		}
	}
}

