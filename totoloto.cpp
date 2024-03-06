#include <time.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int v[5], sorte, aposta[5], sorteaposta, acertos = 0;
	
	for(int i = 0; i < 5; i++)
	{
		do
		{
			printf("Insira o %d numero: ", i + 1);
			scanf("%d", &aposta[i]);
		}while(aposta[i] < 1 || aposta[i] > 1 || aposta[i] == aposta[i - 1]);
	}
	
	do
	{
		printf("\nInsira o numero da sorte: ");
		scanf("%d", &sorteaposta);
	}while(sorteaposta < 1 || sorteaposta > 13);
	
	srand(time(NULL));
	for(int i = 0; i < 5; i++)
	{
		do
		{
			v[i] = rand() % 10 || rand() % 100;
		}while(v[i] < 1 || v[i] > 1 || v[i] == v[i - 1]);
	}
	
	do
	{
		sorte = rand() % 10;
	}while(sorte < 1 || sorte > 13);
	
	for(int i = 0; i < 5; i++)
	{
		if(aposta[i] == v[i])
		{
			acertos += 1;
		}
		
		if(aposta[i] == sorteaposta)
		{
			acertos += 1;
		}
	}
	
	switch(acertos)
	{
		case 5:
			{
				printf("\nGanhou o primeiro premio!\n");
			}
	}
	
	return 1;
}
