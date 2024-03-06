//Prog. Proc. exer. 9

#include<stdio.h>

int main ()
{
	float nota;
	
	printf("Insira a nota:");
	scanf("%f", &nota);
	
	if(nota >= 9.5)
	{
		printf("\nAPROVADO!\n");
	}
	else
	{
		printf("\nREPROVADO!\n");
	}
	
	return 1;
}
