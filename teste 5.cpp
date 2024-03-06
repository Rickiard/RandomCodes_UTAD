#include<stdio.h>
#include<stdlib.h>

int f(int x);

int main()
{
	int x;
	
	printf("Introduza o exercicio: ");
	scanf("%d", &x);
	
	f(x);
	
	return 1;
}

int f(int x)
{
	switch(x)
	{
		case 1:
		{
	    	printf("\nOla\n");	
	    	break;
		}
		
		case 2:
		{
			printf("\njoao\n");
			break;		
		}
		
		default: 
		{
			printf("\nExercicio nao encontrado\n");
			break;
		}
	}
		
	return x;
}
