//Prog. Proc. exer. 17

#include<stdio.h>

int main ()
{
	int num1, num2, num3;
	
	printf("Introduza os numeros:");
	scanf("%d, %d, %d", &num1, &num2, &num3);
	
	if(num1 > num2 && num1 > num3)
	{
		printf("\nO maior valor e %d\n", num1);
	}
	else if(num2 > num1 && num2 > num3)
	{
		printf("\nO maior valor e %d\n", num2);
	}
	else
	{
		printf("\nO maior valor e %d\n", num3);
	}
	
	return 1;
}
