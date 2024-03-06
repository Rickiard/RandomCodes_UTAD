//Prog. Proc. exer. 48

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int n1, n2, d1, d2, i, soma;
int mdc(int d);
int mmc(int mult);

/*Implemente um programa que permita efetuar somas entre dois n�meros
fracion�rios. O resultado dever� ser apresentado no formato de fra��o. Utilize
fun��es para o m�ximo divisor comum e para o m�nimo m�ltiplo comum.*/

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
