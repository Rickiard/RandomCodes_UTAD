//Escreva o c�digo de um programa que escreva no ficheiro �mensagem.txt� o texto �Ol� mundo!�.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void mensagem();

int main()
{	
	mensagem();
	
	return 1;
}

void mensagem()
{
	FILE *file;
	file = fopen("mensagem.txt", "w");
	
	if(file != NULL)
	{
		fprintf(file,"Ol� mundo!");
		fclose(file);
	}
	else
	{
		printf("Falhou!");
	}
}
