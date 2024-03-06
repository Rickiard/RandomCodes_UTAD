#include<stdio.h>

#define N 5

typedef struct atleta
{
	char nome[10];
	int dorsal;
	float pontos;
}Atleta;

int main()
{
	int i;
	float max = 0.0;
	
	Atleta atl[N];
	
	
	
	for(i = 0; i < N; i++)
	{
		fflush(stdin);
		printf("\nInsira o nome do atleta %d: ", i + 1);
		gets(atl[i].nome);
		printf("\nInsira o dorsal e pontos do atleta %d: ", i + 1);
		scanf("%d %f", &atl[i].dorsal, &atl[i].pontos);
		
		if(atl[i].pontos > max)
		{
			max = atl[i].pontos;
		}
	}
	
	for(i = 0; i < N; i++)
	{
		if(atl[i].pontos == max)
		{
			printf("\n\nO atleta %s c/ dorsal %d é campeão c/ %.2f pontos\n", atl[i].nome, atl[i].dorsal, atl[i].pontos);
		}
	}
	
	return 1;
}
