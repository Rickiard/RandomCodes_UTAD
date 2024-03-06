//Prog. Proc. exer. 21

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
	float lado1, lado2, lado3, hipao2, ladoao2;
	
	printf("Insira os valores dos lados dos triangulo:");
	scanf("%f, %f, %f", &lado1, &lado2, &lado3);
	
	if(lado1 > lado2 && lado1 > lado3)
	{
		hipao2 = pow(lado1, 2);
		ladoao2 = pow(lado2, 2) + pow(lado3, 2);
				
		if(hipao2 == ladoao2)
		{
			printf("\nOs lados formam um triangulo retangulo\n");
		}
		else
		{
			printf("\nOs lados nao formam um triangulo retangulo\n");
		}
	}
	else if(lado2 > lado1 && lado2 > lado3)
	{
		hipao2 = pow(lado2, 2);
		ladoao2 = pow(lado1, 2) + pow(lado3, 2);
		
		if(hipao2 == ladoao2)
		{
			printf("\nOs lados formam um triangulo retangulo\n");
		}
		else
		{
			printf("\nOs lados nao formam um triangulo retangulo\n");
		}
	}
	else if(lado3 > lado1 && lado3 > lado2)
	{
		hipao2 = pow(lado3, 2);
		ladoao2 = pow(lado1, 2) + pow(lado2, 2);
				
		if(hipao2 == ladoao2)
		{
			printf("\nOs lados formam um triangulo retangulo\n");
		}
		else
		{
			printf("\nOs lados nao formam um triangulo retangulo\n");
		}
	}
	else
	{
		printf("\nOs lados nao formam um triangulo retangulo\n");
	}
			
	return 1;
}
