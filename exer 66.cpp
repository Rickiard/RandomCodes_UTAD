//Escreva o código de um programa que permita contabilizar o número de linhas de texto que estão armazenadas no ficheiro “dados.txt”.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int dados();
int vezes = 0;
char paragrafo;

int main()
{	
	dados();
		
	return 1;
}

int dados()
{
	FILE *file;
	file = fopen("dados.txt", "r");
	
	if(file != NULL)
	{
		re:
		
		fscanf(file, "%c", &paragrafo);
			
		if(paragrafo == '\n')
		{
			vezes++;
		}
		
		if(EOF == true)
		{
			printf("Numero de linhas: %d", vezes);
			return 1;
		}
		
		goto re;
		
		fclose(file);
	}
	else
	{
		printf("Falhou!");
	}
}
