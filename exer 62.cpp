//exer 61

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void sigla(char myString[])
{
	int i, size;
	
	size = strlen(myString);

	if(myString[0] != ' ')
	{
		printf("%c",  myString[0]);
	}
	
	for(i = 0; i < size; i++)
	{
		if(myString[i] == ' ')
		{
			printf("%c", myString[i + 1]);
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
