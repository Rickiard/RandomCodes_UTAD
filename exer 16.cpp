//Prog. Proc. exer. 16

#include<stdio.h>

int main ()
{
	int num1, num2;
	
	printf("Introduza os numeros:");
	scanf("%d, %d", &num1, &num2);
	
	if(num1 < num2)
	{
		printf("\nO menor valor e %d\n", num1);
	}
	else
	{
		printf("\nO menor valor e %d\n", num2);
	}
	
	return 1;
}
