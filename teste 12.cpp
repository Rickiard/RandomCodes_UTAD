#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable: 4996)

void res(int* valor);

int main()
{
	int valor[5];

	for (int i = 0; i <= 4; i++)
	{
		srand(time(NULL));

		do
		{
			srand(time(NULL));
			valor[i] = rand() % 10;
		} while (valor[i] < 1 || valor[i] > 6);

		int r = i + 1;
			
		printf("Lancamento %d: %d\n\n", r, valor[i]);
	}

	res(valor);

	return 1;
}

void res(int* valor)
{
	int pontos;

	for (int i = 0; i <= 5; i++)
	{
		if (valor[0] == valor[1] && valor [1] == valor[2] && valor[2] == valor[3] && valor[3] == valor[4])
		{
			printf("Yathzee!\n");
			break;
		}
		else if (valor[i] == valor[i + 1] && valor[i+1] == valor[i + 2])
		{
			pontos = valor[0] + valor[1] + valor[2] + valor[3] + valor[4];
			printf("3 valores iguais: %d pontos\n", pontos);
			break;
		}
		else
		{
			printf("Zero pontos!\n");
			break;
		}
	}
}
