//Programação Procedimental 6

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char nome[20];

	printf("Escreva o seu nome completo:");
	scanf("%[A-Za-z ]s", &nome);

	printf("\nNome Completo:%s\n", nome);

	return 0;
}
