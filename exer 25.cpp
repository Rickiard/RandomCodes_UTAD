//Prog. Proc. exer. 25

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, soma = 0;
	
	for(i = 2; i <= 20; i = i + 2)
	{
		soma = soma + i;
	}
	
	printf("Soma=%d\n", soma);
	
	return 1;
}
