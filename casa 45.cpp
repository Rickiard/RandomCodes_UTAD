#include <stdio.h>
#include<stdlib.h>

int repeat(int*);

int main()
{
	int num[100];
	
	repeat(num);
	
	return 1;
}

int repeat(int* num)
{
		for(int i = 0; i < 100; i++)
		{
			do
			{
				printf("\nInsira o valor %d: ", i + 1);
				scanf("%d", &num[i]);
			}while(num[i] < 0 || num[i] > 20);
		}
}
