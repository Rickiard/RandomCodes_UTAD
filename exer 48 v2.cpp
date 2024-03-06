//Prog. Proc. exer. 48

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int n1, n2, d1, d2, i, soma;
int mdc(int d);
int mmc(int mult);

/*Implemente um programa que permita efetuar somas entre dois números
fracionários. O resultado deverá ser apresentado no formato de fração. Utilize
funções para o máximo divisor comum e para o mínimo múltiplo comum.*/

int main()
{	
	int d, mult;
	
	printf("Introduza a soma: ");
	scanf("%d/%d + %d/%d", &n1, &d1, &n2, &d2);
	
	if(d1 > d2)
	{
		mdc(d);
	}
	else if(d1 <= d2)
	{
		mmc(mult);
	}
	
	return 1;
}

int mdc(int d)
{
	int div; 
	
	for(i = 1; i >= div; i++)
	{
		div = d1 / i;
		
		if(div % d2 == 0)
		{
			soma = n1 / i + n2;
			printf("\nResultado = %d/%d\n", soma, div);
		}
	}
	
	return d;
}

int mmc(int mult)
{
	int m;
	
	for(i = 1; i >= m; i++)
	{
		m = d1 * i;
		
		if(m % d2 == 0)
		{			
			soma = n1 * i + n2;
			printf("\nResultado = %d/%d\n", soma, m);
		}
	}
	
	return mult;
}
