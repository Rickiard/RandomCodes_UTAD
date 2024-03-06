#include<stdio.h>
#include<stdlib.h>

int mmc(int, int, int, int);

int mdc(int, int, int, int);


int main()
{
	int n1, n2, d1, d2, soman;
	
	printf("Insira a soma de fracoes: ");
	scanf("%d/%d + %d/%d", n1, d1, n2, d2);

	if(d1 < d2)
	{
		soman = (n1 * mmc(n1, d1, n2, d2)) + n2;
		
		printf("Soma: %d/%d", soman, d2);
	}
	else
	{
		soman = (n1 / mdc(n1, d1, n2, d2)) + n2;
		
		printf("Soma: %d/%d", soman, d2);
	}
	
	return 1;
}

int mmc(int, int d1, int, int d2)
{
	if(d1 < d2)
	{
		for(int i = 1; i > 0; i++)
		{
			if(d1 * i == d2)
			{
				return i;
			}
		}
	}
	
	return mdc;
}

int mdc(int, int d1, int, int d2);
{
	if(d1 > d2)
	{
		for(int i = 1; i > 0; i++)
		{
			if(d1 / i == d2)
			{
				return i;
			}
		}
	}
}
