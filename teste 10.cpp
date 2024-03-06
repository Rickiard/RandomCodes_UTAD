#include<stdio.h>

int main()
{
	char texto[20];
	
	//puts(texto) = printf("%s", texto)
	gets(texto);
	
	printf("%s\n", texto);
	
	return 1;
}
