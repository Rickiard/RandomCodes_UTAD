//Prog. Proc. exer. 46

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float maior(float n);
int i;
float n;

int main()
{	
	for(i = 1; i <= 3; i++)
	{
		maior(n);
	}
	
	printf("\nO maior valor e %d\n", maior);
	
	return 1;
}

float maior(float n)
{
	float maior = 0;
	
	printf("\nIntroduza o %dº valores: ", i);
    scanf("%f", &n);
	
	if(maior < n)
	{
		maior = n;
	}
	
	return n;
}
