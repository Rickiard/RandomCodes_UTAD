//Prog. Proc. exer. 18

#include<stdio.h>
#include<stdlib.h>

int main ()
{
		int lado1, lado2, lado3, hip, hipao2, ladoao2;
	
	printf("Insira os valores dos lados dos triangulo:");
	scanf("%d, %d, %d", &lado1, &lado2, &lado3);
	
	if(lado1 == lado2 && lado1 == lado3)
	{
		printf("\nO triangulo e equilatero.\n");
	}
	else if(lado1 != lado2 && lado1 != lado3)
	{
		printf("\nO triangulo e escaleno.\n");
	}
	else
	{
		printf("\nO triangulo e isosceles.\n");
	}
	
	return 1;
}
