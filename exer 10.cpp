//Prog. Proc. exer. 10

#include<stdio.h>

int main ()
{
	float nota1;
	float nota2;
	
	printf("Introduza as notas das frequencias:");
	scanf("%f, %f", &nota1, &nota2);
	
	float media;
	media = (nota1 + nota2)/2;
	
	if (media >= 9.5)
	{
		printf("\nAPROVADO!\n");
	}
	else
	{
		printf("\nREPROVADO!\n");
	}
	
	return 1;
}
