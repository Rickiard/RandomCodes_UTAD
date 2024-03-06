#include<stdlib.h>
#include<stdio.h>

int main()
{
	int a, soma, aux = 1;
	
	for(a = 1; soma < 2000; a++)
	{
		soma = aux + a; 
		aux = soma;
	}
	
	printf("O maior valor da soma = %d", aux - );
}
