#include <stdio.h>
#include<stdlib.h>

int maior(int*);

int main()
{
	int num[3];
	
	printf("Insira tres valores: ");
	scanf("%d, %d, %d", &num[0], &num[1], &num[2]);
	
	printf("O maior valor e %d", maior(num));
	
	return 1;
}

int maior(int* num)
{
	for(int i = 0; i < 3; i++)
	{
		if(num[i] >= num[0] && num[i] >= num[1] && num[i] >= num[2])
		{
			return i;
		}
	}
}
