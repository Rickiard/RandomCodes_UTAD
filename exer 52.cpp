//exer 52

#include <stdlib.h>
#include <stdio.h>

int main()
{
	char nome[10][50];

	for(int i = 0; i < 10; i++)
	{
		printf("\nInsira um nome: ");
		gets(nome[i]);
	}
	
	for(int i = 0; i < 10; i++)
	{
		printf("\nNome %d: %s\n", i + 1, nome[i]);
	}
		
	return 1;
}
