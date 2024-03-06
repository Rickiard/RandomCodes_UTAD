#include<stdio.h>
#include<stdlib.h>

int main()
{
	int valores[20];
	
	for(int i = 0; i < 20; i++)
	{
		if(i == 0)
		{
			printf("Introduza o valor %d: ", i + 1);
			scanf("%d", &valores[i]);
		}
		
		if(i >= 1)
		{
			do
			{
				printf("Introduza o valor %d: ", i + 1);
				scanf("%d", &valores[i]);	
			}while(valores[i - 1] >= valores[i]);
		}
	}
	
	return 1;
}
