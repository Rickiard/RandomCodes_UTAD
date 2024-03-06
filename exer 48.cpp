//Prog. Proc. exer. 46

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int mdc(int mmc);
int n1, n2, d1, d2, mmc;

/*Implemente um programa que permita efetuar somas entre dois números
fracionários. O resultado deverá ser apresentado no formato de fração. Utilize
funções para o máximo divisor comum e para o mínimo múltiplo comum.*/

int main()
{	
	printf("Introduza a soma: ");
	scanf("%d/%d + %d/%d", &n1, &d1, &n2, &d2);
	
	mdc(mmc);
	
	return 1;
}

int mdc(int mmc)
{
	int soma, aux;
	
	if (d1 == d2)
	{
		soma = n1 + n2;
		printf("\nResultado = %d/%d\n", soma, d1);
	}
	else
	{
		aux = d1 * d2;
		n1 = n1 * d2;
		n2 = n2 * d1;
		
		soma = n1 + n2;
		
		printf("\nResultado = %d/%d\n", soma, aux);	
	}
	
	return mmc;
}
