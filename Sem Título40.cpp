//Exer 16

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int inverter(int num);

int main()
{
	int num = 0;
	int invertido = 0;
	
	printf("Introduza um numero:");
	scanf("%d", &num);
	
	int original = num;
	
	invertido = inverter(num);

	printf("\nInvertido de %d=%d\n", original, invertido);

	return 1;
}
	

int inverter(int num)
{

	int u_digito = 0;
	int invertido = 0;


	while (num > 0)
	{
		//Encontrar o último dígito (mais à direita)
		u_digito = num % 10;

		//Adicionar o digito ao intervalo
		invertido = invertido * 10 + u_digito;

		//Remover do original
		num = num / 10;
	}
	return invertido;
}
