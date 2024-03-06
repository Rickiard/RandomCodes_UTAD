//Prog. Proc. exer. 46

#include<stdio.h>
#define n 3

float maior(float x, float y);

int main()
{	
	int i;
	float num, n_maior;
	
	printf("\nn1 = ");
	scanf("%f", &n_maior);
	
	for(i = 2; i <= n; i++)
	{
		printf("\nn%d = ", i);
		scanf("%f", &num);
		n_maior = maior(num, n_maior);
	}
	printf("\nO maior e %.2f", n_maior);
	
	return 1;
}

float maior(float x, float y)
{
	if (x > y)
	{
		return (x);
	}	
	else
	{
		return (y);
	}
}

