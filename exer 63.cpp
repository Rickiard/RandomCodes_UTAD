//exer 63

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void sigla(char myString[])
{	
	int tamanho, i, j = 0;
	char aux[20];
	
	tamanho = strlen(myString) + 1;
	
	for(i = 0; i < tamanho; i++)
	{
		if(myString[i] != ' ' && myString[i] != '\0')
		{
			aux[j] = myString[i];
			j++;
		}
		else
		{
			aux[j] = '\0';
			
			if(strcmp(aux, "de") != 0 && strcmp(aux, "do") != 0 && strcmp(aux, "da") != 0 && strcmp(aux, "das") != 0 && strcmp(aux, "dos") != 0 && strcmp(aux, "e") != 0)
			{
				printf("%c", aux[0]);
			}
			
			j = 0;
		}
	}
}

int main()
{
	char string[20];
	
	printf("Nome: ");
	gets(string);

	printf("\n");

	sigla(string);
	
	printf("\n");
		
	return 1;
}
