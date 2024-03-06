//exer 61

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char string[20];
	
	printf("Nome: ");
	gets(string);
	
	printf("\n");

	for(int i = strlen(string) - 1; i >= 0; i--)
	{
		printf("%c", string[i]);
	}
	
	printf("\n");
		
	return 1;
}
