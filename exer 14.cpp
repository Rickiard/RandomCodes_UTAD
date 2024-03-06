//Prog. Proc. exer. 14

#include<stdio.h>

int main ()
{
	float nota;	
	
	printf("Introduza a nota:");
	scanf("%f", &nota);
	
	if(nota >= 0 && nota < 5)
	{
		printf("\nPessimo\n");
	}
	
	if(nota >= 5 && nota < 8)
	{
		printf("\nMau\n");
	}
	
	if(nota >= 8 && nota < 10)
	{
		printf("\nInsuficiente\n");
	}
	
	if(nota >= 10 && nota < 12)
	{
		printf("\nSuficiente\n");
	}
	
	if(nota >= 12 && nota < 16)
	{
		printf("\nBom\n");
	}
	
	if(nota >= 16 && nota < 18)
	{
		printf("\nMuito Bom\n");
	}
	
	if (nota >= 18 && nota <= 20)
	{
		printf("\nExcelente\n");
	}
	
	return 1;
}
