//Prog. Proc. exer. 45

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{	
	int base;
	
	do
	{
		printf("Numero de uma base: ");
		scanf("%d", &base)
	}while(base < 1 || base > 10)
	
	return 1;
}


