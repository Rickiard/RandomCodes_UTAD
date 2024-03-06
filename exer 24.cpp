//Prog. Proc. exer. 18

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, soma = 0;
	
	for(i = 1; i <= 180; i++)
	{
		soma = soma + i;
	}
	
	printf("Soma=%d\n", soma);
	
	return 1;
}
