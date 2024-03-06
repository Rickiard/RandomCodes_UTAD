//exer 64
//Escreva o código de uma função que aceite como parâmetro de entrada um texto e uma string e que devolva/retorne a quantidade de vezes que a string aparece no texto.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void vezes(char myString[], char texto[])
{
	int vezes = 0;
	
	char aux[100];
	
	for(int i = 0, j = 0; i < strlen(texto) + 1; i++)
	{
		if(texto[i] != ' ' && texto[i] != '\0' && texto[i] != '!' && texto[i] != '.' && texto[i] != '?' && texto[i] != ':' && texto[i] != ',' && texto[i] != ';' && texto[i] != '-')
		{
			aux[j] = texto[i];
			
			j++;
		}
		else 
		{
			aux[j] = '\0';
			
			if(strcmp(aux, myString) == 0)
			{
				vezes++;
			}
			
			j = 0;
		}
	}
	
	printf("A palavra aparece %d vezes", vezes);
}

int main()
{
	char texto[500], string[50];
	
	printf("Insira o texto: ");
	gets(texto);
	
	printf("\nInsira a palavra a ser contada: ");
	gets(string);

	printf("\n");

	vezes(string, texto);
	
	printf("\n");
		
	return 1;
}
