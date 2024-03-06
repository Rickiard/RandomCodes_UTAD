#include<stdlib.h>
#include<stdio.h>

int main()
{
	char nome[20];
	
	printf("Introduza o seu nome completo: ");
	scanf("%[A-Z, a-z ]s", &nome);
	
	printf("O seu nome e %s", nome);
	
	return 1;
}
